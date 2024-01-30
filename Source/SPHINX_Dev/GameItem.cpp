// Fill out your copyright notice in the Description page of Project Settings.
#include "GameItem.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/WidgetComponent.h"
#include "InventoryManager.h"



// Sets default values
AGameItem::AGameItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameItem::BeginPlay()
{
	Super::BeginPlay();

	if (DbItem == nullptr)
    {
        DbItem = UPuzzleManager::GetInstance()->GetObject(Name);
    }
    if (DbItem != nullptr)
    {
        Properties = DbItem->Properties;
    }
	
}

// Called every frame
void AGameItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameItem::Setup(FString NewName, UItem* NewDbItem)
{
	this->Name = NewName;
	this->DbItem = NewDbItem;
	Properties = this->DbItem->Properties;
}


void AGameItem::OnGameItemMouseOver(UTextBlock* UITextRef)
{
    if (Name != "Player" && DbItem != nullptr && UITextRef != nullptr)
    {
        UITextRef->SetText(FText::FromString(DbItem->Description));
    }
}

AGameItem* AGameItem::Copy(AGameItem* Original, UObject* Outer)
{
    if (Original == nullptr || Outer == nullptr)
    {
        return nullptr;
    }

    AGameItem* CopiedItem = NewObject<AGameItem>(Outer, Original->GetClass());
    if (CopiedItem)
    {
        CopiedItem->Setup(Original->Name, Original->DbItem);
    }

    return CopiedItem;
}

void AGameItem::Spawn(AGameItem* Item)
{
	if (Item != nullptr)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
  	  	SpawnParams.Instigator = GetInstigator();

		AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Item->DbItem->ItemPrefab, GetActorLocation(), GetActorRotation(), SpawnParams);

	}
	
}

void AGameItem::OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, bool Inventory)
{
	if (!Inventory)
	{
		OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader);
	}
	else
	{
		if (Selected)
		{
			OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader);
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

			OnGameItemClicked(ActionMenu, ButtonPrefab, ActionHeader);
		}
		
	}

}

void AGameItem::OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader)
{
	ActionHeader->SetText(FText::FromString(this->DbItem->Description));
	FText CurrentText = ActionHeader->GetText();

	bool NoAction = true;

	if (GetProperty("InInventory") != nullptr && GetProperty("InInventory")->Value == "True")
	{
		NoAction = false;
	}
	
	UPuzzleManager* Instance = UPuzzleManager::GetInstance();
	if (Instance)
	{
		TArray<URule*> Rules = Instance->RulesFor(this, Instance->GetCurrentArea());
		for (URule* PuzzleRule : Rules)
		{
			UE_LOG(LogTemp, Display, TEXT("Checking Rule %s fulfilled by %s ? %s"), *PuzzleRule->ToString(), *this->Name, (RuleFulfilled(PuzzleRule) ? TEXT("True") : TEXT("False")));
			if (RuleFulfilled(PuzzleRule))
			{
				NoAction = false;
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
                    	ButtonWidget->InitializeButton(this, PuzzleRule);
                	}
            	}
			}
		}

		if (DbItem->IsCarryable() && !Selected && (GetProperty("InInventory") == nullptr || GetProperty("InInventory")->Value == TEXT("False")))
		{
			NoAction = false;
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
                    Rule->Action = TEXT("PickUp");
                    ButtonWidget->InitializeButton(this, Rule);
                }
            }
		}

		if (DbItem->IsInspectable())
		{
			NoAction = false;
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
                    Rule->Action = TEXT("Inspect");
                    ButtonWidget->InitializeButton(this, Rule);
                }
            }
		}

		if (ContainedValue && ContainedValue->GetProperty("Carryable") != nullptr)
		{
			if (ContainedValue->GetProperty("Carryable")->Value == TEXT("True"))
			{
				NoAction = false;
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
                    	Rule->Action = TEXT("TakeOut");
                    	ButtonWidget->InitializeButton(this, Rule);
                	}
            	}
			}
		}

		if (Selected)
		{
			NoAction = false;
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
                    Rule->Action = TEXT("Deselect");
                    ButtonWidget->InitializeButton(this, Rule);
                }
            }
		}

		if (GetProperty("InInventory") != nullptr && GetProperty("InInventory")->Value == TEXT("True"))
		{
			NoAction = false;
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
                    Rule->Action = TEXT("Drop");
                    ButtonWidget->InitializeButton(this, Rule);
                }
            }
		}
		//Need to set NoAction on Player instance to NoAction from this. 

		//Unity code also includes if statement for "ison", requires music controls
	}

}

void AGameItem::ExecuteRule(URule* Rule)
{
	UInventoryManager* Inventory = UInventoryManager::GetInstance();
	

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
		this->ContainedValue->SetActorHiddenInGame(false);
		this->ContainedValue->SetActorEnableCollision(true);
		this->ContainedValue->SetActorTickEnabled(true);
		this->ContainedValue = nullptr;
		this->GetProperty("Contains")->RemoveProperty();
	}

	ExecuteRule(Rule, true, this);
	
}

void AGameItem::ExecuteRule(URule* Rule, bool Full, AActor* GameI)
{
	return;
}

bool AGameItem::RuleFulfilled(URule* Rule)
{
	return true;
}




















bool AGameItem::FulfillsProperties(UTerm* Input)
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

bool AGameItem::HasProperty(UItemProperty* PropertyToCheck)
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

UItemProperty* AGameItem::GetProperty(FString PropertyName)
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

bool AGameItem::IsDestrutible()
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

//void AGameItem::Inspect() //needs Player.h

FString AGameItem::ToString()
{
	return Name;
}