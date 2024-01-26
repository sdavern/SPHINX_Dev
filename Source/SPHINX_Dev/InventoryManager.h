// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameItem.h"
#include "Item.h"
#include "ItemProperty.h"
#include "InventoryManager.generated.h"

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UInventoryManager : public UGameInstance
{
	GENERATED_BODY()

public:

	UInventoryManager();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(AGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveItemFromInventory(AGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveSelectedItemFromInventory();

	UFUNCTION(BlueprintCallable)
	bool DeleteItemFromInventory(AGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void SelectItemFromInventory(AGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void DeselectItemFromInventory(AGameItem* Item);

	UFUNCTION(BlueprintCallable)
	AGameItem* GetSelectedItem();

	UFUNCTION(BlueprintCallable)
	TArray<AGameItem*> GetInventory();
	


private:

	UPROPERTY(EditAnywhere)
	TArray<AGameItem*> Inventory;

	UPROPERTY(EditAnywhere)
	UItem* DbItem;

	UPROPERTY(EditAnywhere)
	TArray<UItemProperty*> Properties;
	
	UPROPERTY(EditAnywhere)
	AGameItem* SelectedItem;





	
};
