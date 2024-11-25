// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Term.h"
#include "PuzzlePoint.h"
#include "Rule.generated.h"

class APuzzleManager;

/**
 * 
 */
UCLASS(Blueprintable)
class SPHINX_DEV_API URule : public UObject
{
	GENERATED_BODY()


public:

	URule();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UTerm>> OutputsBP;

	UPROPERTY()
	TArray<UTerm*> Outputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UTerm>> InputsBP;

	UPROPERTY()
	TArray<UTerm*> Inputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Action;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPuzzlePoint* OwningPP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Hint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	URule* Parent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<URule>> ChildrenBP;

	UPROPERTY()
	TArray<URule*> Children;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutomatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSelectedInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RuleNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	




	URule(const FString& Action);

	UFUNCTION()
	bool IsEqual(const UObject* OtherObject) const;

	UFUNCTION()
	void AddOutput();

	UFUNCTION()
	void AddInput();

	UFUNCTION()
	void DeleteOutputAtIndex(int32 Index);

	UFUNCTION()
	void DeleteInputAtIndex(int32 Index);

	UFUNCTION()
	void AddChildRule(URule* Child);

	UFUNCTION()
	void RemoveLastAddedRule();

	UFUNCTION()
	bool MainOutputIs(UTerm* Term) const;

	UFUNCTION()
	bool HasPlayerInput();

	UFUNCTION()
	FString GetRuleAsString();

	FString GetRuleAsString(bool Speech);

	UFUNCTION()
	FString ToString();

	UFUNCTION()
	FString ToShortString();

	UFUNCTION()
	bool ContainsItem(UItem* Item);

	UFUNCTION()
	URule* Clone();

	UFUNCTION()
	void ToOutputsPtr();

	UFUNCTION()
	void ToInputsPtr();

	UFUNCTION()
	void ToChildrenPtr();

	UFUNCTION()
	FString ToPMString();

	UFUNCTION()
	void GetDbItems();

	UFUNCTION()
	void InitialiseRule();

};
