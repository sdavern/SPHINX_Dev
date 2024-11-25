// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "PuzzlePoint.h"
#include "InitNPC.h"
#include "InitText.h"
#include "InitObject.h"
#include "Rule.h"
#include "GameItem.h"
#include "GamePuzzlePoint.generated.h"

UCLASS()
class SPHINX_DEV_API AGamePuzzlePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGamePuzzlePoint();

	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPuzzlePoint> PuzzlePointBP;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitNPC>> InitNPCs;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitText>> InitTexts;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitObject>> InitObjects;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AInitNPC> TestNPC;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsActive = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool HasPuzzle = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool InitSpawned = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool InitInitalised = false;

	FTransform PointTransform;

	UPROPERTY(VisibleAnywhere)
	UPuzzlePoint* PuzzlePointPtr;

	UPROPERTY()
	AInitNPC* InitNPC;
	
	UPROPERTY()
	AInitText* InitText;

	UPROPERTY()
	AInitObject* InitObject;

	bool ActivePuzzleCompleted = false;

	UPuzzlePoint* PPToPtr();

	void SpawnInit();

	void DespawnInit();

	void AssignInitNPCProperties(UPuzzlePoint* PP);

	void SetupInitNPCGameItem();

	void InitialiseInitNPC();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
