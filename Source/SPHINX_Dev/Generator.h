// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Area.h"
#include "Rule.h"
#include "Item.h"
#include "Term.h"
#include "GameItem.h"
#include "GameArea.h"
#include "Generator.generated.h"


//Make singleton, see GenerateForArea in PuzzleManager

UCLASS()
class SPHINX_DEV_API AGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerator();

	static AGenerator* GetInstance();

	static const bool DebugMode = true;

	static void Spawn(UItem* Item, URule* Rule, UArea* Area);

	URule* GeneratePuzzleStartingFrom(UArea* Area, TArray<UArea*> NewAccessibleAreas);

	static bool GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UArea* CurrentArea, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	static AGenerator* Instance;

	static TMap<UArea*, URule*> PuzzlesPerArea;


	UPROPERTY(EditAnywhere)
	TArray<UGameItem*> StartingInventory;

	static const FString PuzzleString;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
