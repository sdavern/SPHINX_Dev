// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Area.h"
#include "Rule.h"
#include "Generator.generated.h"


//Make singleton, see GenerateForArea in PuzzleManager

UCLASS()
class SPHINX_DEV_API AGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerator();

	URule* GeneratePuzzleStartingFrom(UArea* Area, TArray<UArea*> NewAccessibleAreas);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
