// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemProperty.h"
#include "Term.generated.h"

class UItem;
class UGameItem;
class APuzzleManager;


UCLASS(Blueprintable)
class SPHINX_DEV_API UTerm : public UObject
{
	GENERATED_BODY()

public:
	UTerm();
	
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSubclassOf<UItemProperty>> PropertiesBP;

    UPROPERTY()
    TArray<UItemProperty*> Properties;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UItem* DbItem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UGameItem* GameItem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Hint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString InitPointType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString GoalDialogue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ThanksDialogue;


	UTerm(const FString& Name);

	UTerm(const UTerm& Term, const FString& Name);

    UFUNCTION()
	void AddPropertyOfType(EItemProperty Type);

    UFUNCTION()
	void DeleteProperty(int32 Index);

    UFUNCTION()
    TArray<UItemProperty*> GetPropertiesWithName(const FString& PropertyName) const;

    UFUNCTION()
    UItemProperty* GetPropertyWithName(const FString& PropertyName) const;

    UFUNCTION()
	TArray<FString> GetSuperTypes();

    UFUNCTION()
	FString GetTermAsString();

    UFUNCTION()
	FString ToString();

    //Remove if causing issues
    UFUNCTION()
    void ToPropPtrs();


};
