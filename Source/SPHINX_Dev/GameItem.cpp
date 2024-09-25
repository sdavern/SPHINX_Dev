// Fill out your copyright notice in the Description page of Project Settings.
#include "GameItem.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Components/WidgetComponent.h"
#include "InventoryManager.h"
#include "PlayerPawn.h"
#include "ActionMenu.h"
#include "SpawnPoint.h"
#include "Avatar.h"
#include "PuzzleManager.h"
// Sets default values
UGameItem::UGameItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void UGameItem::BeginPlay()
{
	Super::BeginPlay();
	SetupDbItem(); //called in PM instead as GameItem initialises before PM
	
	
}

APuzzleManager* UGameItem::GetPuzzleManager()
{
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (TActorIterator<APuzzleManager> It(World); It; ++It)
    	{
        	APuzzleManager* FoundActor = *It;
			return FoundActor;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("PuzzleManager not found."));
	return nullptr;
}

void UGameItem::SetupDbItem()
{
	if (APuzzleManager* Manager = GetPuzzleManager())
    {
        DbItem = Manager->GetObject(Name);
        if (DbItem)
        {
            UE_LOG(LogTemp, Display, TEXT("DbItem for %s successfully retrieved."), *Name);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to retrieve DbItem for %s."), *Name);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PuzzleManager instance not found."));
    }

    if (DbItem != nullptr)
    {
        Properties = DbItem->Properties;
    }
}

void UGameItem::Setup(FString NewName, UItem* NewDbItem)
{
	if (NewName.IsEmpty() || NewDbItem == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Setup called with invalid parameters."));
        return;
    }
	this->Name = NewName;
	this->DbItem = NewDbItem;
	Properties = this->DbItem->Properties;
}


UGameItem* UGameItem::Copy(UGameItem* Original, UObject* Outer)
{
    if (Original == nullptr || Outer == nullptr)
    {
        return nullptr;
    }

    UGameItem* CopiedItem = NewObject<UGameItem>(Outer, Original->GetClass());
    if (CopiedItem)
    {
        CopiedItem->Setup(Original->Name, Original->DbItem);
    }

    return CopiedItem;
}

void UGameItem::Spawn(UGameItem* Item)
{
	
	if (Item != nullptr)
	{
		AActor* OwnerActor = Item->GetOwner();
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = OwnerActor;
  	  	SpawnParams.Instigator = OwnerActor->GetInstigator();
		AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(OwnerActor->GetClass(), OwnerActor->GetActorLocation(), OwnerActor->GetActorRotation(), SpawnParams);

	}
	
}



void UGameItem::OnGameItemClicked(UActionMenu* ActionMenu)
{
	//bool NoAction = true;
	
	APuzzleManager* Instance = APuzzleManager::GetInstance();
	TArray<URule*> ButtonRules;
	
	if (Instance)
	{
		Instance->ReturnLeaves();
		UE_LOG(LogTemp, Warning, TEXT("OnGameItemClicked PM instance is valid, this is %s"), *this->Name);

		TArray<URule*> Rules = Instance->RulesFor(this);
		if (Rules.Num() > 0)
		{
			for (URule* PuzzleRule : Rules)
			{
				UE_LOG(LogTemp, Error, TEXT("Rule %s is in RulesFor(%s)"), *PuzzleRule->Action, *this->Name);
				UE_LOG(LogTemp, Display, TEXT("Checking Rule %s fulfilled by %s ? %s"), *PuzzleRule->ToString(), *this->Name, (RuleFulfilled(PuzzleRule) ? TEXT("True") : TEXT("False")));
				if (PuzzleRule && RuleFulfilled(PuzzleRule))
				{
					ButtonRules.Add(PuzzleRule);
            	}
			}

			if (ActionMenu->ActionButtons.Num() == 0)
			{
				UE_LOG(LogTemp, Display, TEXT("ActionMenu has no ActionButtons"));
				return;
			}

			for (int i = 0; i <= ButtonRules.Num() - 1; i++)
			{
				if (ActionMenu && ActionMenu->ActionButtons[i])
				{
					UE_LOG(LogTemp, Error, TEXT("ActionButton is being initialized"));
					FString FormattedText = ActionMenu->ActionButtons[i]->AddSpacesBeforeCaps(ButtonRules[i]->Action);
					ActionMenu->ActionButtons[i]->ActionText->SetText(FText::FromString(FormattedText));
                	ActionMenu->ActionButtons[i]->InitializeButton(this, ButtonRules[i]);
				}
				
			}

			if (ButtonRules.Num() > 1 && ActionMenu && ActionMenu->BackBottom)
			{
				float AddedY = (ButtonRules.Num() - 1) * 81;
				FWidgetTransform CurrentTransform = ActionMenu->BackBottom->GetRenderTransform();
				FVector2D NewPosition = FVector2D(CurrentTransform.Translation.X, CurrentTransform.Translation.Y + AddedY);
				CurrentTransform.Translation = NewPosition;
				ActionMenu->BackBottom->SetRenderTransform(CurrentTransform);
			}

		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Couldn't find any rules"));
		}
		 
	}
		//Need to set NoAction on Player instance to NoAction from this. 

}

void UGameItem::ExecuteRule(URule* Rule)
{
	AInventoryManager* Inventory = AInventoryManager::GetInstance();

	//Inpspect logic requires statistics class


	if (Rule->Action == TEXT("PickUp"))
	{
		Inventory->AddItemToInventory(this);
	}

	if (Rule->Action == TEXT("Drop"))
	{
		Inventory->DeselectItemFromInventory(this);
		Inventory->RemoveItemFromInventory(this);
	}

	if (Rule->Action == TEXT("Select"))
	{
		Inventory->SelectItemFromInventory(this);
	}

	if (Rule->Action == TEXT("Deselect"))
	{
		Inventory->DeselectItemFromInventory(this);
	}

	if (Rule->Action == TEXT("TakeOut"))
	{
		this->ContainedValue->GetOwner()->SetActorHiddenInGame(false);
		this->ContainedValue->GetOwner()->SetActorEnableCollision(true);
		this->ContainedValue->GetOwner()->SetActorTickEnabled(true);
		this->ContainedValue = nullptr;
		this->GetProperty("Contains")->RemoveProperty();
	}
	UWorld* World = GetWorld();
	if (World)
	{
		UE_LOG(LogTemp, Display, TEXT("Switching to second ExecuteRule in GameItem"));
		ExecuteRule(World, Rule, true, this);
	}
	
}

void UGameItem::ExecuteRule(UWorld* World, URule* Rule, bool Full, UGameItem* GameI)
{
	TArray<AActor*> ObjectsToDestroy;
	AInventoryManager* Inventory = AInventoryManager::GetInstance();
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();
	//Rule->ToInputsPtr();
	//Rule->ToOutputsPtr();
	//Rule->GetDbItems();
	
	//UGameItem* HeldItem = PMInstance->Player->HeldGameItem->FindComponentByClass<UGameItem>();
	
	UGameItem* HeldItem = Inventory->SelectedItem;
	UGameItem* HitGameItem = Inventory->HitGameItem;

	if (!HeldItem && !HitGameItem)
	{
		UE_LOG(LogTemp, Display, TEXT("GameItem->ExecuteRule HeldItem && HitGameItem is not valid"));
		return;
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("%s has %d properties, Rule has %d inputs"), *Rule->Inputs[0]->GameItem->Name, Rule->Inputs[0]->GameItem->Properties.Num(), Rule->Inputs.Num());
	//UE_LOG(LogTemp, Warning, TEXT("Rules inputs are %s and %s"), *Rule->Inputs[0]->Name, *Rule->Inputs[1]->Name);
	UE_LOG(LogTemp, Error, TEXT("HeldItem is valid, beginning ExecuteRule"));
	//UE_LOG(LogTemp, Warning, TEXT("Input[0] is %s and has GameItem %s, the rule has %d outputs"), *Rule->Inputs[0]->Name, *Rule->Inputs[0]->GameItem->Name, Rule->Outputs.Num());
	for (int32 i = 0; i < Rule->Inputs.Num(); i++)
	{
		//UE_LOG(LogTemp, Display, TEXT("Rule %s has input %s at [%d]"), *Rule->Action, *Rule->Inputs[i]->Name, i);
		bool Found = false;
		for (UTerm* Output : Rule->Outputs)
		{
			if (Output && Output->Name == Rule->Inputs[i]->Name)
			{
				UE_LOG(LogTemp, Display, TEXT("Output equals rule input, Found = true"));
				Found = true;
				Output->GameItem = Rule->Inputs[i]->GameItem;
				break;
			}
			else if (Output->GetPropertyWithName("Contains") != nullptr)
			{
				if (Output->GetPropertyWithName("Contains")->Value == Rule->Inputs[i]->Name)
				{
					if (Rule->Inputs[i]->Name == Inventory->GetSelectedItem()->Name)
					{
						Output->GameItem->ContainedValue = Inventory->GetSelectedItem();
						Inventory->RemoveSelectedItemFromInventory();
						Output->GameItem->ContainedValue->GetOwner()->SetActorHiddenInGame(true);
						Output->GameItem->ContainedValue->GetOwner()->SetActorEnableCollision(false);
						Output->GameItem->ContainedValue->GetOwner()->SetActorTickEnabled(false);
					}
					else
					{
						Output->GameItem->ContainedValue = Rule->Inputs[i]->GameItem;
						Output->GameItem->ContainedValue->GetOwner()->SetActorHiddenInGame(true);
						Output->GameItem->ContainedValue->GetOwner()->SetActorEnableCollision(false);
						Output->GameItem->ContainedValue->GetOwner()->SetActorTickEnabled(false);
					}
					Found = true;
					break;
				}
			}
		}

		//UE_LOG(LogTemp, Display, TEXT("Input Item at %d : %s of rule %s"), i, *Rule->Inputs[i]->ToString(), *Rule->ToString());
		
		if (Rule)
		{
			//UE_LOG(LogTemp, Display, TEXT("Rule is valid"));
			if (Rule->Inputs[i])
			{
				//UE_LOG(LogTemp, Display, TEXT("Inputs are valid, input is %s"), *Rule->Inputs[i]->Name);
				{
					//DbItem needs to be set for each input
					if (Rule->Inputs[i]->GameItem)
					{
						UE_LOG(LogTemp, Display, TEXT("GameItem %s is valid"), *Rule->Inputs[i]->GameItem->Name);
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("GameItem for input %s is not valid"), *Rule->Inputs[i]->Name);
					}
					
				}
			}
		}

		if (!Found && !Rule->Inputs[i]->DbItem->IsIndestructible)
		{
			UE_LOG(LogTemp, Display, TEXT("Destroying: %s"), *Rule->Inputs[i]->Name);
			if (Rule->Inputs.Num() < 1)
			{
				ObjectsToDestroy.Add(GameI->GetOwner());
				UE_LOG(LogTemp, Warning, TEXT("i == 0"));
			}  
			else
			{
				if (HeldItem)
				{
					if (Rule->Inputs[i]->Name == HeldItem->Name)
					{
						UE_LOG(LogTemp, Display, TEXT("Adding HeldItem to ObjectsToDestroy"));
						ObjectsToDestroy.Add(PMInstance->Player->HeldGameItem);
					}
				}
				

				if (!Inventory->DeleteItemFromInventory(Rule->Inputs[i]->GameItem))
				{
					UE_LOG(LogTemp, Display, TEXT("Attempting to add %s to ObjectsToDestroy"), *Rule->Inputs[i]->Name);
					if (Rule->Inputs[i]->GameItem)
					{
						ObjectsToDestroy.Add(Rule->Inputs[i]->GameItem->GetOwner());
						UE_LOG(LogTemp, Error, TEXT("GetOwner is valid"));
					}
				}
			}
		}
		else 
		{
			UE_LOG(LogTemp, Display, TEXT("Destruction sequence failed"));
		} 
	
	}
	
	//Rule->ToOutputsPtr();
	//Rule->GetDbItems();
	int32 SpawnIndex = 0;
	bool FirstOutput = true;
	
	for (UTerm* Output : Rule->Outputs)
	{
		UE_LOG(LogTemp, Display, TEXT("Rule %s has %d outputs1"), *Rule->Action, Rule->Outputs.Num());
		bool Found = false;
		UE_LOG(LogTemp, Display, TEXT("Found is false 1"));
		for (UTerm* Input : Rule->Inputs)
		{
			if (Output->Name == TEXT("Player"))
			{
				UE_LOG(LogTemp, Display, TEXT("Output->Name == player"));
				for (UItemProperty* OutputProperty : Output->Properties)
				{
					UE_LOG(LogTemp, Display, TEXT("PlayerProperties being updated"));
					APuzzleManager::GetInstance()->UpdatePlayerProperties(OutputProperty);
				}
			}
			if (Output->Name == Input->Name)
			{
				UE_LOG(LogTemp, Error, TEXT("Output->Name == Input->Name"));
				Found = true;
				for (UItemProperty* OutputProperty : Output->Properties)
				{
					UItemProperty* Property = Input->GameItem->GetProperty(OutputProperty->Name);
					if (Property != nullptr && Property->Name != TEXT("Contains"))
					{
						Property->Value = OutputProperty->Value;
						UE_LOG(LogTemp, Display, TEXT("Property to change: %s"), *Property->Name);
						break;
					}
					else
					{
						UE_LOG(LogTemp, Display, TEXT("Adding OutputProperty"));
						Input->GameItem->Properties.Add(OutputProperty);
					}
				}
			}
		}
		if (!Found)
		{
			UE_LOG(LogTemp, Display, TEXT("Found = false2"));
			if (Output->DbItem->ItemPrefab != nullptr)
			{
				UE_LOG(LogTemp, Display, TEXT("DbItem %s for Output is valid"), *Output->DbItem->Name);
				//Output DbItem needs to be initialised
    			//SpawnParams.Owner = ItemGO;
    			//SpawnParams.Instigator = ItemGO->GetInstigator();
				AActor* ItemGO = nullptr;
				UGameItem* GameItem = nullptr;
				if (ItemGO)
				{
						GameItem = NewObject<UGameItem>(ItemGO, UGameItem::StaticClass());
						if (GameItem)
						{
							UE_LOG(LogTemp, Display, TEXT("GameItem created"));
							GameItem->RegisterComponent();
						}
				}

				if (ObjectsToDestroy.Num() > SpawnIndex)
				{
					FTransform Transform = ObjectsToDestroy[SpawnIndex]->GetTransform();
					Transform.SetLocation(Transform.GetLocation() + FVector (0, 0, 0));
					FActorSpawnParameters SpawnParams;
					if (Output->DbItem->ItemPrefab && World)
					{
						ItemGO = World->SpawnActor<AActor>(Output->DbItem->ItemPrefab.Get(), Transform, SpawnParams);
						UE_LOG(LogTemp, Warning, TEXT("Output %s has been spawned"), *Output->Name);
					}
				}
				//GameItem->Setup(Output->DbItem->Name, Output->DbItem); need to have 

				if (Rule->bInventory)
				{
					if (GameItem->Name == Rule->Outputs[0]->Name || FirstOutput)
					{
						Inventory->AddItemToInventory(GameItem);
					}
				} 
				
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Output DbItem is null"));
			}
		}
		FirstOutput = false;
	}

	PMInstance->ExecuteRule(Rule);
	UE_LOG(LogTemp, Warning, TEXT("ObjectsToDestroy has %d actors"), ObjectsToDestroy.Num());
	for (AActor* GO : ObjectsToDestroy)
	{
		if (GO)
		{
			GO->Destroy();
		}
	}	
}

bool UGameItem::RuleFulfilled(URule* Rule)
{
	UE_LOG(LogTemp, Display, TEXT("RuleFulfilled called for %s"), *Rule->ToString());
	AInventoryManager* InventoryManager = AInventoryManager::GetInstance();
    
    if (!Rule) 
    {
		UE_LOG(LogTemp, Display, TEXT("No rule in rule fulfilled"));
        return false;
    }
 
    if (Rule->Inputs.Num() == 0) 
    {
		UE_LOG(LogTemp, Display, TEXT("Rule in RuleFulfilled is valid but has no inputs"));
        return false;
    }

    UGameItem* SelectedItem = InventoryManager->GetSelectedItem(); //gets held gameitem
	UGameItem* HitGameItem = InventoryManager->HitGameItem; //gets item hit by geosweep

	if (HitGameItem && !SelectedItem && Rule->Inputs.Num() == 1) //if item hit by geosweep is valid and player is not holding item
	{
		bool ClickedItemFulfilled = true;
		UE_LOG(LogTemp, Display, TEXT("HitGameItem is %s"), *HitGameItem->Name);
		for (UTerm* Input : Rule->Inputs)
    	{
			if (HitGameItem->FulfillsProperties(Input))
			{
				UE_LOG(LogTemp, Display, TEXT("HitGameItem %s fulfills properties of rule %s"), *HitGameItem->Name, *Rule->ToString());
			}
			UE_LOG(LogTemp, Display, TEXT("HitGameItem is %s and Input is %s"), *HitGameItem->Name, *Input->Name);
        	if (HitGameItem) /* && (HitGameItem->Name == Input->Name || HitGameItem->DbItem->GetSuperTypes().Contains(Input->Name)) */
        	{
				UE_LOG(LogTemp, Display, TEXT("HitGameItem check 1 succeeded"));
            	if (!HitGameItem->FulfillsProperties(Input))
            	{
                	ClickedItemFulfilled = false;
					UE_LOG(LogTemp, Display, TEXT("HitGameItem check 2 succeeded"));
                	break;
            	}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("HitGameItem check 2 failed"));
				}
        	}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("HitGameItem check 1 failed"));
				ClickedItemFulfilled = false;
				break;
			}
    	}
		if (ClickedItemFulfilled)
		{
			return true;
		}
	}

	if (SelectedItem && HitGameItem) //if player is holding item and has hit a game item in the world
	{
		bool SelectedItemFulfilled = false;
    	bool ClickedItemFulfilled = false;

    	for (UTerm* Input : Rule->Inputs)
    	{
        	if (SelectedItem) //&& (SelectedItem->Name == Input->Name || SelectedItem->DbItem->GetSuperTypes().Contains(Input->Name)))
        	{
				UE_LOG(LogTemp, Display, TEXT("SelectedItem is %s and Input is %s"), *SelectedItem->Name, *Input->Name);
            	if (SelectedItem->FulfillsProperties(Input))
            	{
                	SelectedItemFulfilled = true;
                	break;
            	}
        	}
		
    	}

    	for (UTerm* Input : Rule->Inputs)
    	{
			UE_LOG(LogTemp, Display, TEXT("HitGameItem is %s and Input is %s"), *HitGameItem->Name, *Input->Name);
        	if (HitGameItem) //&& (HitGameItem->Name == Input->Name || HitGameItem->DbItem->GetSuperTypes().Contains(Input->Name)))
        	{
				UE_LOG(LogTemp, Display, TEXT("HitGameItem check 1 succeeded"));
            	if (HitGameItem->FulfillsProperties(Input))
            	{
                	ClickedItemFulfilled = true;
					UE_LOG(LogTemp, Display, TEXT("HitGameItem check 2 succeeded"));
                	break;
            	}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("HitGameItem check 2 failed"));
				}
        	}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("HitGameItem check 1 failed"));
			}
    	}

    	return SelectedItemFulfilled && ClickedItemFulfilled;
	}
	/* if (!SelectedItem || SelectedItem == this)
    {
		UE_LOG(LogTemp, Display, TEXT("SelectedItem check is false"));
        return false;
    } */
   return false;
}

bool UGameItem::FulfillsProperties(UTerm* Input)
{
	for (UItemProperty* Property : Input->Properties)
	{
		if(!HasProperty(Property))
		{
			return false;
		}
	}
	return true;
}

bool UGameItem::HasProperty(UItemProperty* PropertyToCheck)
{
	UE_LOG(LogTemp, Display, TEXT("HasProperty called for %s %s"), *PropertyToCheck->Name, *PropertyToCheck->Value);
	for (UItemProperty* Property : Properties)
	{
		if (Property->Equals(PropertyToCheck))
		{
			return true;
		}
	}
	return false;
}

UItemProperty* UGameItem::GetProperty(FString PropertyName)
{
	if (DbItem->Properties.Num() > 0)
	{
		for (UItemProperty* Property : DbItem->Properties)
		{
			if (Property)
			{
				if (Property->Name == PropertyName)
				{
					return Property;
				}
			}
			
		}
	}
	
	return nullptr;
}

bool UGameItem::IsDestructible()
{
	UItemProperty* Destructible = GetProperty(TEXT("Indestructible"));
	if (Destructible != nullptr)
	{
		if(Destructible->Value == TEXT("True"))
		{
			return false;
		}
	}
	return true;
}

//void UGameItem::Inspect() //needs Player.h

FString UGameItem::ToString()
{
	return Name;
}



/* void UGameItem::OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, UPuzzlePoint* PP, bool Inventory)
{
	if (!Inventory)
	{
		OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader, PP);
	}
	else
	{
		if (Selected)
		{
			OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader, PP);
		}
		else
		{
			UWidgetComponent* WidgetComp = NewObject<UWidgetComponent>(ActionMenu, UWidgetComponent::StaticClass());
            if (WidgetComp)
            {
            	WidgetComp->SetupAttachment(ActionMenu->GetRootComponent());
                WidgetComp->SetWidgetClass(UActionBtn::StaticClass());
                WidgetComp->SetDrawSize(FVector2D(200, 100)); // Adjust size as needed
                WidgetComp->RegisterComponent();
                
                // Initialize the button widget after creating it
                UActionBtn* ButtonWidget = Cast<UActionBtn>(WidgetComp->GetUserWidgetObject());
                if (ButtonWidget)
                {
                    URule* Rule = NewObject<URule>(this, URule::StaticClass());
                    Rule->Action = TEXT("Select");
                    ButtonWidget->InitializeButton(this, Rule);
                }
            }

			OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader, PP);
		}
		
	}

} */


/* void UGameItem::OnGameItemMouseOver(UTextBlock* UITextRef)
{
    if (Name != "Player" && DbItem != nullptr && UITextRef != nullptr)
    {
        UITextRef->SetText(FText::FromString(DbItem->Description));
    }
} */

//from RuleFulfilled()
/* if (Rule != nullptr)
	{
		Rule->Inputs[0]->GameItem = this;
		UE_LOG(LogTemp, Display, TEXT("Rule->Inputs[0]->GameItem is %s"), *Rule->Inputs[0]->GameItem->Name);
		if (!this->FulfillsProperties(Rule->Inputs[0]))
		{
			return false;
		}

		if (Rule->Inputs.Num() > 1)
		{
			UE_LOG(LogTemp, Error, TEXT("Rule inputs > 1, %d"), Rule->Inputs.Num());
			int i = 1;
			if (Rule)
			{
				UGameItem* SelectedItem = InventoryManager->GetSelectedItem();
				UE_LOG(LogTemp, Display, TEXT("GetSelectedItem called"));
				if (SelectedItem != nullptr)
				{
					UE_LOG(LogTemp, Warning, TEXT("SelectedItem is %s"), *SelectedItem->Name);
					
					if (SelectedItem->Name == Rule->Inputs[1]->Name || SelectedItem->DbItem->GetSuperTypes().Contains(Rule->Inputs[1]->Name))
					{
						UE_LOG(LogTemp, Display, TEXT("SelectedItem == Input 1"));
						if (SelectedItem->FulfillsProperties(Rule->Inputs[1]))
						{
							UE_LOG(LogTemp, Display, TEXT("SelectedItem does fulfill properties"));
							Rule->Inputs[1]->GameItem = SelectedItem;
							i = 2;
						}
					}
					else
					{
						UE_LOG(LogTemp, Display, TEXT("Fulfill properties is false"));
						return false;
					}
				}
				else 
				{
					return false;
				}
			}
			TArray<UGameItem*> Inventory = InventoryManager->GetInventory();

			if (Inventory.Num() == 0 && !Rule->HasPlayerInput())
			{
				UE_LOG(LogTemp, Display, TEXT("Rule does not have player input and inventory is 0"));
				//return false;
			}
			for (; i < Rule->Inputs.Num(); i++)
			{
				bool Found = false;
				if (Rule->Inputs[i]->Name == TEXT("Player"))
				{
					if (APuzzleManager::GetInstance()->GetPlayer()->FulfillsProperties(Rule->Inputs[1]))
					{
						Found = true;
						Rule->Inputs[i]->GameItem = APuzzleManager::GetInstance()->GetPlayer();
					}
				}
				for (UGameItem* InventoryItem : Inventory)
				{
					if (InventoryItem->Name == Rule->Inputs[i]->Name || InventoryItem->DbItem->GetSuperTypes().Contains(Rule->Inputs[i]->Name))
					{
						if(InventoryItem->FulfillsProperties(Rule->Inputs[i]))
						{
							Found = true;
							Rule->Inputs[i]->GameItem = InventoryItem;
						}
					}
				}
				if (!Found)
				{
					return false;
				}
			}
		}
		UE_LOG(LogTemp, Display, TEXT("Returning TRUE"));
		return true;
	}
	return false; */