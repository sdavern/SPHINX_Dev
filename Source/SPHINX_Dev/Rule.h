// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Term.h"
#include "VectorStruct.h"
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

	bool IsEqual(const UObject* OtherObject) const;

	void AddOutput();

	void AddInput();

	void DeleteOutputAtIndex(int32 Index);

	void DeleteInputAtIndex(int32 Index);

	void AddChildRule(URule* Child);

	void RemoveLastAddedRule();

	bool MainOutputIs(UTerm* Term) const;

	bool HasPlayerInput();

	FString GetRuleAsString();

	FString GetRuleAsString(bool Speech);

	FString ToString();

	FString ToShortString();
	
	bool ContainsItem(UItem* Item);

	URule* Clone();

	void ToOutputsPtr();

	void ToInputsPtr();

	void ToChildrenPtr();

	FString ToPMString();

	void GetDbItems();

	void InitialiseRule();

};
