// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Term.h"
#include "Rule.generated.h"

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API URule : public UObject
{
	GENERATED_BODY()


public:

	URule();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTerm*> Outputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTerm*> Inputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Hint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	URule* Parent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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

};
