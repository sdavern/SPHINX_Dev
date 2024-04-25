// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"

AInventoryManager* AInventoryManager::Instance = nullptr;

AInventoryManager* AInventoryManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<AInventoryManager>();
        return Instance;
    }
    return nullptr;
    
}

AInventoryManager::AInventoryManager()
{


}

void AInventoryManager::BeginPlay()
{
    Super::BeginPlay();
    GetInstance();

}

void AInventoryManager::AddItemToInventory(UGameItem* Item)
{
    if (!Item)
    {
        UE_LOG(LogTemp, Warning, TEXT("Attempted to add a null Item to inventory."));
        return;
    }

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
    

void AInventoryManager::RemoveItemFromInventory(UGameItem* Item)
{
    for (int32 i = Inventory.Num() - 1; i >= 0; i--)
    {
        if (Inventory[i] == Item)
        {
            Inventory.RemoveAt(i);
            Item->DbItem->GetPropertyWithName("InInventory")->RemoveProperty();
            //Line about transform on item relative to character is here in Unity code
            //Line that triggers a drop noise is here in Unity code
            AActor* OwnerActor = Item->GetOwner();
            OwnerActor->SetActorHiddenInGame(false);
            OwnerActor->SetActorEnableCollision(true);
            OwnerActor->SetActorTickEnabled(true);
            if (Item->Selected)
            {
                Item->Selected = false;
                SelectedItem = nullptr;
            }
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
        return SelectedItem;
    }
    return nullptr;
}

const TArray<UGameItem*>& AInventoryManager::GetInventory() const 
{
    return Inventory;
}