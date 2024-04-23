// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PaperSpriteComponent.h"
#include "InventoryManager.h"
#include "InventoryMenu.generated.h"

class SPHINX_DevPlayerController;
/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UInventoryMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	UInventoryMenu(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="UI")
	TArray<UButton*> AllButtons;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="UI")
	TArray<UImage*> AllImages;

	AInventoryManager* InventoryManager;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB1_Image;
	
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB2_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB3;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB3_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB4;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB4_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB5;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB5_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB6;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB6_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB7;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB7_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB8;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB8_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB9;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB9_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB10;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB10_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB11;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB11_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB12;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB12_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB13;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB13_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB14;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB14_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB15;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB15_Image;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* IB16;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* IB16_Image;

	void SetupUI();

	
};
