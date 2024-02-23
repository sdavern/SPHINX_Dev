// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "PuzzlePoint.h"
#include "InitNPC.h"
#include "InitText.h"
#include "InitObject.h"
#include "GamePuzzlePoint.generated.h"

UCLASS()
class SPHINX_DEV_API AGamePuzzlePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGamePuzzlePoint();

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPuzzlePoint> PuzzlePoint;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitNPC>> InitNPCs;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitText>> InitTexts;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AInitObject>> InitObjects;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AInitNPC> TestNPC;


	FTransform PointTransform;

	UPuzzlePoint* PuzzlePointPtr;

	UPuzzlePoint* PPToPtr();

	void SpawnInit();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
