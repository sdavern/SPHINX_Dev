// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Item.h"
#include "PuzzleManager.generated.h"

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API UPuzzleManager : public UGameInstance
{
	GENERATED_BODY()

public: 

	UPuzzleManager();

	static UPuzzleManager* GetInstance();

	UItem* GetObject(FString ItemName);

private:

	static UPuzzleManager* Instance;
	
};
