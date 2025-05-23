// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DatabaseBuilder.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SPHINX_DEV_API UDatabaseBuilder : public UObject
{
	GENERATED_BODY()

public:
	UDatabaseBuilder();

	UFUNCTION(BlueprintCallable)
	void RefreshDatabase();

	UFUNCTION(BlueprintCallable)
	void LoadBaseItems(const FString& FilePath);

	UFUNCTION(BlueprintCallable)
	void AppendProperties(TArray<FString> BaseProps, TArray<FString> AppProps);

private:
	
};
