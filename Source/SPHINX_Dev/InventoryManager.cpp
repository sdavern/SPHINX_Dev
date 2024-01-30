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

void UInventoryManager::AddItemToInventory(AGameItem* Item)
{
    Item->SetActorHiddenInGame(true);
    Item->SetActorEnableCollision(false);
    Item->SetActorTickEnabled(false);

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

void UInventoryManager::RemoveItemFromInventory(AGameItem* Item)
{
    for (int32 i = Inventory.Num() - 1; i >= 0; i--)
    {
        if (Inventory[i] == Item)
        {
            Inventory.RemoveAt(i);
            Item->DbItem->GetPropertyWithName("InInventory")->RemoveProperty();
            //Line about transform on item relative to character is here in Unity code
            //Line that triggers a drop noise is here in Unity code
            Item->SetActorHiddenInGame(false);
            Item->SetActorEnableCollision(true);
            Item->SetActorTickEnabled(true);
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

bool UInventoryManager::DeleteItemFromInventory(AGameItem* Item)
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

void UInventoryManager::SelectItemFromInventory(AGameItem* Item)
{
  //come back to if needed
}

void UInventoryManager::DeselectItemFromInventory(AGameItem* Item)
{
    //come back to if needed
}

AGameItem* UInventoryManager::GetSelectedItem()
{
    return SelectedItem;    
}

TArray<AGameItem*> UInventoryManager::GetInventory()
{
    return Inventory;
}