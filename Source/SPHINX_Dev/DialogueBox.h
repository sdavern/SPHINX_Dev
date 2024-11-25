// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Delegates/Delegate.h"
#include "DialogueBox.generated.h"

class SPHINX_DevPlayerController;

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UDialogueBox : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void ChangeInspectText(UTextBlock* ButtonText, const FString& NewText);

	UPROPERTY(meta = (BindWidget))
    UTextBlock* InspectText;
	
};
