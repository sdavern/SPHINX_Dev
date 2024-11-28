// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameItem.h"
#include "Item.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "ItemProperty.h"
#include "InventoryManager.generated.h"


class AAvatar;
/**
 * 
 */
UCLASS()
class SPHINX_DEV_API AInventoryManager : public AActor
{
	GENERATED_BODY()

public:

	static AInventoryManager* GetInstance();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void AssignPlayer();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(UGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveItemFromInventory(UGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveSelectedItemFromInventory();

	UFUNCTION(BlueprintCallable)
	bool DeleteItemFromInventory(UGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void SelectItemFromInventory(UGameItem* Item);

	UFUNCTION(BlueprintCallable)
	void DeselectItemFromInventory(UGameItem* Item);

	UFUNCTION(BlueprintCallable)
	UGameItem* GetSelectedItem();

	UFUNCTION(BlueprintCallable)
	const TArray<UGameItem*>&  GetInventory() const;

	AInventoryManager();

	UPROPERTY(EditAnywhere)
	TArray<UGameItem*> Inventory;

	UPROPERTY(EditAnywhere)
	UItem* DbItem;

	UPROPERTY(EditAnywhere)
	TArray<UItemProperty*> Properties;
	
	UPROPERTY(EditAnywhere)
	UGameItem* SelectedItem;

	UPROPERTY(EditAnywhere)
	UGameItem* HitGameItem;

	UPROPERTY(VisibleAnywhere)
	AAvatar* ActivePlayer;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	static AInventoryManager* Instance;

	
};
