// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Term.h"
#include "PuzzlePoint.generated.h"
/**
 * 
 */
UCLASS(Blueprintable)
class SPHINX_DEV_API UPuzzlePoint : public UObject
{
	GENERATED_BODY()

public:

	UPuzzlePoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNPC = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsText = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsObject = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UTerm>> PuzzleGoals;

	UTerm* MainGoal;

	TArray<UTerm*> PuzzleGoalsPtrs;

	void ToPuzzleGoalPtrs();

	void SetInitType();

	UTerm* PickGoal();




private:






	
};
