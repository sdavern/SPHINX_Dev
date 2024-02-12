// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "Rule.h"
#include "Area.h"
#include "PuzzleManager.generated.h"


class UGameItem;
class APlayerPawn;

UCLASS()
class SPHINX_DEV_API APuzzleManager : public AActor
{
	GENERATED_BODY()

public: 

	APuzzleManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APlayerPawn* Player;

	static APuzzleManager* GetInstance();

	UItem* GetObject(FString ItemName);

	void UpdatePlayerProperties(UItemProperty* Property);

	TArray<URule*> RulesFor(UGameItem* GameItem, UArea* Area);

	APlayerPawn* GetPlayer();

	UArea* GetCurrentArea();

private:

	static APuzzleManager* Instance;
	
	UArea* CurrentArea;

};
