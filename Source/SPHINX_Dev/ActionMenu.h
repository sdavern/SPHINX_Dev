// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Delegates/Delegate.h"
#include "ActionMenu.generated.h"



class SPHINX_DevPlayerController;
/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UActionMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	void ChangeButtonText(UTextBlock* ButtonText, const FString& NewText);

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* HoldButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* InspectButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ActionButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* InventoryButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ExitButton;

	UPROPERTY(meta = (BindWidget))
    UTextBlock* HoldText;

	UPROPERTY(meta = (BindWidget))
    UTextBlock* ActionText;



};
