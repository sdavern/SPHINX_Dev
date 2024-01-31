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

	AGameItem* Player;

	static UPuzzleManager* GetInstance();

	UItem* GetObject(FString ItemName);

	void UpdatePlayerProperties(UItemProperty* Property);

	TArray<URule*> RulesFor(AGameItem* GameItem, UArea* Area);

	AGameItem* GetPlayer();

	UArea* GetCurrentArea();

private:

	static UPuzzleManager* Instance;
	
	UArea* CurrentArea;

};
