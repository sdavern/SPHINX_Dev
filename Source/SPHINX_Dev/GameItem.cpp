// Fill out your copyright notice in the Description page of Project Settings.
#include "GameItem.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Components/WidgetComponent.h"
#include "InventoryManager.h"
#include "PlayerPawn.h"
#include "ActionMenu.h"


// Sets default values
UGameItem::UGameItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	

}

// Called when the game starts or when spawned
void UGameItem::BeginPlay()
{
	Super::BeginPlay();
	SetupDbItem();
	
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



void UGameItem::OnGameItemClicked(UActionMenu* ActionMenu, UActionBtn* ActionButton)
{
	//bool NoAction = true;
	
	APuzzleManager* Instance = APuzzleManager::GetInstance();
	
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
					//NoAction = false;
					UE_LOG(LogTemp, Error, TEXT("ActionButton is being initialized"));
					FString FormattedText = ActionButton->AddSpacesBeforeCaps(PuzzleRule->Action);
					ActionMenu->ActionText->SetText(FText::FromString(FormattedText));
                	ActionButton->InitializeButton(this, PuzzleRule);
					break;
            	}
			}
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
	ExecuteRule(World, Rule, true, this);
	
}

void UGameItem::ExecuteRule(UWorld* World, URule* Rule, bool Full, UGameItem* GameI)
{
	TArray<AActor*> ObjectsToDestroy;
	AInventoryManager* Inventory = AInventoryManager::GetInstance();
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();

	for (int32 i = 0; i < Rule->Inputs.Num(); i++)
	{
		bool Found = true;
		for (UTerm* Output : Rule->Outputs)
		{
			if (Output->Name == Rule->Inputs[i]->Name)
			{
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

		UE_LOG(LogTemp, Display, TEXT("Input Item at %d : %s of rule %s"), i, *Rule->Inputs[i]->ToString(), *Rule->ToString());
		if (!Found && Rule->Inputs[i]->GameItem->IsDestrutible())
		{
			UE_LOG(LogTemp, Display, TEXT("Destroying: %s"), *Rule->Inputs[i]->Name);
			if (i == 0)
			{
				ObjectsToDestroy.Add(GameI->GetOwner());
			}
			else
			{
				if (!Inventory->DeleteItemFromInventory(Rule->Inputs[i]->GameItem))
				{
					ObjectsToDestroy.Add(Rule->Inputs[i]->GameItem->GetOwner());
				}
			}
		}
	}
	int32 SpawnIndex = 0;
	bool FirstOutput = true;
	for (UTerm* Output : Rule->Outputs)
	{
		bool Found = false;
		for (UTerm* Input : Rule->Inputs)
		{
			if (Output->Name == TEXT("Player"))
			{
				for (UItemProperty* OutputProperty : Output->Properties)
				{
					APuzzleManager::GetInstance()->UpdatePlayerProperties(OutputProperty);
				}
			}
			if (Output->Name == Input->Name)
			{
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
						Input->GameItem->Properties.Add(OutputProperty);
					}
				}
			}
		}
		if (!Found)
		{
			if (Output->DbItem != nullptr)
			{
    			//SpawnParams.Owner = ItemGO;
    			//SpawnParams.Instigator = ItemGO->GetInstigator();
				AActor* ItemGO = nullptr;
				UGameItem* GameItem = nullptr;
				if (ItemGO)
				{
						GameItem = NewObject<UGameItem>(ItemGO, UGameItem::StaticClass());
						if (GameItem)
						{
							GameItem->RegisterComponent();
						}
				}

				if (ObjectsToDestroy.Num() > SpawnIndex)
				{
					FTransform Transform = ObjectsToDestroy[SpawnIndex]->GetTransform();
					Transform.SetLocation(Transform.GetLocation() + FVector (0, 0, 100));
					FActorSpawnParameters SpawnParams;
					ItemGO = World->SpawnActor<AActor>(Output->DbItem->ItemPrefab, Transform, SpawnParams);
        			
				}
				else
				{
					//Logic for moving location of item relative to player
					//FVector Position = APlayerPawn::GetInstance()->GetTransform->GetLocation() + FVector (0, 20, 0);
					//Position.Z = 0;
					//ItemGO = GetWorld()->SpawnActor<AActor>(Output->DbItem->ItemPrefab, Position, FQuat::Identity);
				}
				GameItem->Setup(Output->DbItem->Name, Output->DbItem);

				if (Rule->bInventory)
				{
					if (GameItem->Name == Rule->Outputs[0]->Name || FirstOutput)
					{
						Inventory->AddItemToInventory(GameItem);
					}
				}
				
			}
		}
		FirstOutput = false;
	}

	PMInstance->ExecuteRule(Rule);

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
	//needo to fix this then go onto ExecuteRule()
	AInventoryManager* InventoryManager = AInventoryManager::GetInstance();
	
/* 	if (Rule)
	{
		if (Rule->Inputs.Num() == 1)
		{
			if (this->FulfillsProperties(Rule->Inputs[0]))
			{
				return true;
			}
		}
		
		if (Rule->Inputs.Num() > 1)
		{
			UGameItem* SelectedItem = InventoryManager->GetSelectedItem();
			UE_LOG(LogTemp, Display, TEXT("SelectedItem is %s"), *SelectedItem->Name);

			if (SelectedItem)
			{
				for (UTerm* Input : Rule->Inputs)
				{
					if (SelectedItem->Name == Input->Name || SelectedItem->DbItem->GetSuperTypes().Contains(Input->Name))
					{
						UE_LOG(LogTemp, Error, TEXT("SelectedItem is an Input"));
						if (SelectedItem->FulfillsProperties(Input))
						{
							UE_LOG(LogTemp, Error, TEXT("SelectedItem fulfills input"));
							return true;
						}
					}
				}
			}
		}
		
	}
	return false; */
	







	if (Rule != nullptr)
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
	for (UItemProperty* Property : Properties)
	{
		if (Property->Name == PropertyName)
		{
			return Property;
		}
	}
	return nullptr;
}

bool UGameItem::IsDestrutible()
{
	UItemProperty* Destructible = this->GetProperty(TEXT("Indestrucible"));
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