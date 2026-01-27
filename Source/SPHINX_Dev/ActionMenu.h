// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Delegates/Delegate.h"
#include "ActionBtn.h"
#include "PaperSpriteComponent.h"
#include "InventoryManager.h"
#include "InventoryButton.h"
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

	UActionMenu(const FObjectInitializer& ObjectInitializer);

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

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* Image_2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BackTop;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BackMiddle;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* Image_0;



//Inventory Menu Variables

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* Background;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="UI")
	TArray<UInventoryButton*> AllInventoryButtons;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="UI")
	TArray<UImage*> AllInventoryImages;

	AInventoryManager* InventoryManager;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* LowerText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UTextBlock* UpperText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB1_Image;
	
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB2_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB3;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB3_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB4;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB4_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB5;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB5_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB6;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB6_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB7;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB7_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB8;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB8_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB9;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB9_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB10;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB10_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB11;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB11_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB12;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB12_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB13;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB13_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB14;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB14_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB15;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB15_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UInventoryButton* IB16;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB16_Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* DefaultSprite;

	UFUNCTION()
	void ChangeLowerText(const FString& NewText);

	UFUNCTION()
	void ChangeUpperText(const FString& NewText);

	UFUNCTION()
	void ActivateInventoryMenu();

	UFUNCTION()
	void DeactivateInventoryMenu();

	UFUNCTION()
	void ActivateActionMenu();

	UFUNCTION()
	void DeactivateActionMenu();

	UFUNCTION()
	void SetupUI();


};
