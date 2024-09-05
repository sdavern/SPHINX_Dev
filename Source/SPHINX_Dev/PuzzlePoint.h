// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Term.h"
#include "PuzzlePoint.generated.h"

class AGamePuzzlePoint;
class URule;
/**
 * 
 */
UCLASS(Blueprintable)
class SPHINX_DEV_API UPuzzlePoint : public UObject
{
	GENERATED_BODY()

public:

	UPuzzlePoint();

	//was (Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AGamePuzzlePoint> OwningGamePP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNPC = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsText = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsObject = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UTerm>> PuzzleGoals;

	UPROPERTY()
	UTerm* MainGoal;

	UPROPERTY()
	TArray<UTerm*> PuzzleGoalsPtrs;

	UPROPERTY()
	TArray<URule*> CurrentPuzzleRules;

	UPROPERTY()
	FString GoalDialogue;

	void ToPuzzleGoalPtrs();

	void SetInitType();

	UTerm* PickGoal();

	UTerm* GetCurrentGoal();

	FString GetHint();

	FString GetObjective();

	void AddGoal();

	void DeleteGoal(int32 Index);




private:






	
};
