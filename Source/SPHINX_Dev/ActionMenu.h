// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Delegates/Delegate.h"
#include "ActionBtn.h"
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
	TArray<UActionBtn*> ActionButtons;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BackBottom;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* HoldButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* InspectButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UActionBtn* ActionButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UActionBtn* ActionButton_1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UActionBtn* ActionButton_2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UActionBtn* ActionButton_3;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* InventoryButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ExitButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* HoldText;

 	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* ActionText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* ActionText_1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* ActionText_2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* ActionText_3; 

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* InspectText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* ExitText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* NameText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* AddText;



};
