// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Rule.h"
#include "ActionBtn.generated.h"

class AGameItem;


UCLASS()
class SPHINX_DEV_API UActionBtn : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UPROPERTY(Meta = (BindWidget))
    UButton* ActionButton;

    UPROPERTY(Meta = (BindWidget))
    UTextBlock* ActionText;

    UFUNCTION(BlueprintCallable)
    void InitializeButton(AGameItem* GameItem, URule* Rule);

	FString AddSpacesBeforeCaps(const FString& InString);

private:
    UPROPERTY()
    AGameItem* LinkedGameItem;

    UPROPERTY()
    URule* LinkedRule;

    UFUNCTION()
    void OnButtonClicked();
	
};
