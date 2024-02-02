// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"

UInventoryManager* UInventoryManager::Instance = nullptr;

UInventoryManager* UInventoryManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<UInventoryManager>();
    }

    return Instance;
}

UInventoryManager::UInventoryManager()
{

}

void UInventoryManager::AddItemToInventory(UGameItem* Item)
{

    AActor* OwnerActor = Item->GetOwner();

    OwnerActor->SetActorHiddenInGame(true);
    OwnerActor->SetActorEnableCollision(false);
    OwnerActor->SetActorTickEnabled(false);

    if (Item->DbItem->GetPropertyWithName("InInventory") == nullptr)
    {
       UItemProperty* InInventory = NewObject<UItemProperty>(Item->DbItem, UItemProperty::StaticClass());
       InInventory->Type = EItemProperty::BoolProperty;
       InInventory->Name = TEXT("InInventory");
       InInventory->Value = TEXT("True");
       DbItem->Properties.Add(InInventory);
    }
    else
    {
        Item->DbItem->GetPropertyWithName("InInventory")->Value = TEXT("True");
    }
    Inventory.Add(Item);
    SelectItemFromInventory(Item);
}

void UInventoryManager::RemoveItemFromInventory(UGameItem* Item)
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

void UInventoryManager::RemoveSelectedItemFromInventory()
{
    DeleteItemFromInventory(this->SelectedItem);
}

bool UInventoryManager::DeleteItemFromInventory(UGameItem* Item)
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

void UInventoryManager::SelectItemFromInventory(UGameItem* Item)
{
  //come back to if needed
}

void UInventoryManager::DeselectItemFromInventory(UGameItem* Item)
{
    //come back to if needed
}

UGameItem* UInventoryManager::GetSelectedItem()
{
    return SelectedItem;    
}

TArray<UGameItem*> UInventoryManager::GetInventory()
{
    return Inventory;
}