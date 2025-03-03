// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Avatar.h"

AInventoryManager* AInventoryManager::Instance = nullptr;

void AInventoryManager::BeginPlay()
{
    Super::BeginPlay();
    Instance = GetInstance();
    AssignPlayer();

}

AInventoryManager* AInventoryManager::GetInstance()
{
    if (!Instance)
    {
        // Iterate over all world contexts to find the game world
        for (const FWorldContext& Context : GEngine->GetWorldContexts())
        {
            if (Context.World() != nullptr)
            {
                for (TActorIterator<AInventoryManager> It(Context.World()); It; ++It)
                {
                    Instance = *It;
                    break;
                }
            }
        }

        if (!Instance)
        {
            UE_LOG(LogTemp, Error, TEXT("InventoryManager instance not found in GetInstance."));
        }
    }
    UE_LOG(LogTemp, Display, TEXT("Inventory Manager instance found."));
    return Instance;
    
}

void AInventoryManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    Instance = nullptr;  
}

AInventoryManager::AInventoryManager()
{
   

}

void AInventoryManager::AssignPlayer()
{
	TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Player"), FoundActors);
    if (FoundActors.Num() > 0)
    {
        AActor* FoundActor = FoundActors[0];
        AAvatar* Avatar = Cast<AAvatar>(FoundActor);
        if (Avatar)
        {
            ActivePlayer = Avatar;
        }
    }
}



void AInventoryManager::AddItemToInventory(UGameItem* Item)
{
    UE_LOG(LogTemp, Display, TEXT("Trying to add %s to inventory"), *Item->Name);
    if (!Item)
    {
        UE_LOG(LogTemp, Warning, TEXT("Attempted to add a null Item to inventory."));
        return;
    }

    if (Inventory.Num() <= 15)
    {
        AActor* OwnerActor = Item->GetOwner();
        if (!OwnerActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("OwnerActor is null in AddItemToInventory."));
            return;
        }

        OwnerActor->SetActorHiddenInGame(true);
        OwnerActor->SetActorEnableCollision(false);
        OwnerActor->SetActorTickEnabled(false);

        if (!Item->DbItem)
        {
            UE_LOG(LogTemp, Warning, TEXT("DbItem is null for Item: %s."), *Item->GetName());
            return;
        }

        UItemProperty* InInventory = Item->DbItem->GetPropertyWithName("InInventory");
        if (!InInventory)
        {
            InInventory = NewObject<UItemProperty>(Item->DbItem, UItemProperty::StaticClass());
            InInventory->Type = EItemProperty::BoolProperty;
            InInventory->Name = TEXT("InInventory");
            Item->DbItem->Properties.Add(InInventory);
            UE_LOG(LogTemp, Display, TEXT("InInventory added to %s"), *Item->Name);
        }
        InInventory->Value = TEXT("True");

        Inventory.Add(Item);
    }
    
}
    

void AInventoryManager::RemoveItemFromInventory(UGameItem* Item)
{
    UE_LOG(LogTemp, Display, TEXT("RemoveItemFromInventory called for %s"), *Item->Name);
    if (Item)
    {
        UE_LOG(LogTemp, Display, TEXT("Item is valid in removefrominventory"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("Item is not valid"));
    }
    for (int32 i = Inventory.Num() - 1; i >= 0; i--)
    {
        if (Inventory[i] == Item)
        {
            Inventory.RemoveAt(i);

            if (Item->DbItem->GetPropertyWithName("InInventory"))
            {
                Item->DbItem->GetPropertyWithName("InInventory")->RemoveProperty();
            }

            if (ActivePlayer)
            {
                FVector AvatarOffset = ActivePlayer->GetActorLocation() + FVector(25.0f, 0.0f, 0.0f);
                AvatarOffset.Z = 40.0f;
                AActor* OwnerActor = Item->GetOwner();

                OwnerActor->SetActorHiddenInGame(false);
                OwnerActor->SetActorEnableCollision(true);
                OwnerActor->SetActorTickEnabled(true);
                OwnerActor->SetActorLocation(AvatarOffset);

                UPaperSpriteComponent* SpriteComponent = OwnerActor->FindComponentByClass<UPaperSpriteComponent>();
                if (SpriteComponent)
                {
                    SpriteComponent->SetVisibility(true);
                    SpriteComponent->SetHiddenInGame(false);
                    SpriteComponent->MarkRenderStateDirty(); 
                    UE_LOG(LogTemp, Display, TEXT("Sprite restored for item %s"), *Item->Name);
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("Sprite component not found for item %s"), *Item->Name);
                }

                if (Item->Selected)
                {
                    Item->Selected = false;
                    SelectedItem = nullptr;
                }
            }
            else
            {
                UE_LOG(LogTemp, Display, TEXT("When checking for sprite, active player is null"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("i == i not working in inventory manager"));
        }
    }
}

void AInventoryManager::RemoveSelectedItemFromInventory()
{
    DeleteItemFromInventory(this->SelectedItem);
}

bool AInventoryManager::DeleteItemFromInventory(UGameItem* Item)
{
    for (int32 i = Inventory.Num() - 1; i >= 0; i--)
    {
        if (Inventory[i] == Item)
        {
            Inventory.RemoveAt(i);
            if (Item->Selected)
            {
                Item->Selected = false;
                SelectedItem = nullptr;
                UE_LOG(LogTemp, Display, TEXT("DELETEFROMINVENTORY: SelectedItem is null"));

            }
            return true;
        }
    }
    return false;
}

void AInventoryManager::SelectItemFromInventory(UGameItem* Item)
{
  //come back to if needed
}

void AInventoryManager::DeselectItemFromInventory(UGameItem* Item)
{
    //come back to if needed
}

UGameItem* AInventoryManager::GetSelectedItem()
{
    if (SelectedItem != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("SelectedItem in InventoryManager is %s"), *SelectedItem->Name);
        return SelectedItem;
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("SelectedItem is null in InventoryManager"));
    }
    return nullptr;
}

const TArray<UGameItem*>& AInventoryManager::GetInventory() const 
{
    return Inventory;
}