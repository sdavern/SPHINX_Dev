// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Rule.h"
#include "ActionBtn.generated.h"

class UGameItem;


UCLASS()
class SPHINX_DEV_API UActionBtn : public UButton
{
	GENERATED_BODY()
	
public:

    UActionBtn();

    UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    UActionBtn* ActionButton; 

    UPROPERTY(meta = (BindWidget))
    UTextBlock* ActionText; 

    UFUNCTION(BlueprintCallable)
    void InitializeButton(UGameItem* GameItem, URule* Rule);

    UFUNCTION()
	FString AddSpacesBeforeCaps(const FString& InString);

private:
    UPROPERTY()
    UGameItem* LinkedGameItem;

    UPROPERTY()
    URule* LinkedRule;

    UFUNCTION()
    void OnButtonClicked();
	
};
