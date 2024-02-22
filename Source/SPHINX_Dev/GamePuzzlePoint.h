// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzlePoint.h"
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

	UPuzzlePoint* PuzzlePointPtr;

	FTransform PointTransform;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
