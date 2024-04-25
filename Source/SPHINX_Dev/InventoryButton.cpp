// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryButton.h"
#include "GameItem.h"

UInventoryButton::UInventoryButton()
{
    OnClicked.AddDynamic(this, &UInventoryButton::ButtonClicked);
}

void UInventoryButton::ButtonClicked()
{
    OnInventoryButtonClicked.Broadcast(this);
}