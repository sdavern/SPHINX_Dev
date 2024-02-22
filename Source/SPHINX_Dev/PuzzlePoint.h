// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Term.h"
#include "PuzzlePoint.generated.h"

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UPuzzlePoint : public UObject
{
	GENERATED_BODY()

public:

	UPuzzlePoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UTerm>> PuzzleGoals;

	TArray<UTerm*> PuzzleGoalsPtrs;

	void ToPuzzleGoalPtrs();


private:






	
};
