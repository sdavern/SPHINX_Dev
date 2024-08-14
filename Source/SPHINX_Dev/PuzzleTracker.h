// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "PuzzleTracker.generated.h"

class APuzzleManager;

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UPuzzleTracker : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* TrackerText;

	UFUNCTION(BlueprintCallable)
	void UpdateText(int PuzzleNumber);

};
