// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemProperty.h"
#include "Term.generated.h"

class UItem;
class UGameItem;


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

    TArray<UItemProperty*> Properties;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UItem* DbItem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UGameItem* GameItem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Hint;


	UTerm(const FString& Name);

	UTerm(const UTerm& Term, const FString& Name);

	void AddPropertyOfType(EItemProperty Type);

	void DeleteProperty(int32 Index);

    TArray<UItemProperty*> GetPropertiesWithName(const FString& PropertyName) const;

    UItemProperty* GetPropertyWithName(const FString& PropertyName) const;

	TArray<FString> GetSuperTypes();

	FString GetTermAsString();

	FString ToString();

    //Remove if causing issues
    void ToPropPtrs();


};
