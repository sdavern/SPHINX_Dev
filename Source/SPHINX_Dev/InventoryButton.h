// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "InventoryButton.generated.h"

class UGameItem;

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UInventoryButton : public UButton
{
	GENERATED_BODY()

public:

	UInventoryButton();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryButtonClicked, UInventoryButton*, Button);
	
	UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnInventoryButtonClicked OnInventoryButtonClicked;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ButtonClicked();

	UPROPERTY()
	UGameItem* GameItem;
};
