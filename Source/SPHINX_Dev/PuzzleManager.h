// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Item.h"
#include "Rule.h"
#include "Area.h"
#include "PuzzleManager.generated.h"


class AGameItem;

UCLASS()
class SPHINX_DEV_API UPuzzleManager : public UGameInstance
{
	GENERATED_BODY()

public: 

	UPuzzleManager();

	static UPuzzleManager* GetInstance();

	UItem* GetObject(FString ItemName);

	TArray<URule*> RulesFor(AGameItem* GameItem, UArea* Area);

	UArea* GetCurrentArea();

private:

	static UPuzzleManager* Instance;
	
	UArea* CurrentArea;

};
