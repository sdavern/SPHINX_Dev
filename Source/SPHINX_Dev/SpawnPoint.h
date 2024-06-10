// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemProperty.h"
#include "SpawnPoint.generated.h"

UCLASS()
class SPHINX_DEV_API ASpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnPoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UItemProperty>> SpawnableProperties;

	TArray<UItemProperty*> PropPtrs;

	bool HasSpawnedItem = false;

	UFUNCTION(BlueprintCallable)
	void GetLocation();

	void ToSpawnPropPtrs();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
