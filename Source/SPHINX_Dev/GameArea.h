// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameItem.h"
#include "Area.h"
#include "Item.h"
#include "GameArea.generated.h"


UCLASS()
class SPHINX_DEV_API AGameArea : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AGameArea();

	UPROPERTY(EditAnywhere)
	TArray<UGameItem*> ItemsInArea;

	UArea* Area;

	AActor* AreaContent;

	FVector* GetNextSpawnPt(bool NPC, bool Floor);

	FVector* GetNextSpawnPt();

	FVector* GetRandomSpawnpt(bool NPC);

	FString ToString() const;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private: 

	UPROPERTY(EditAnywhere)
	TArray<AActor*> SpawnPoints;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> NPCSpawnPoints;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> FloorSpawnPoints;

	int32 Index = 0;

	int32 NPCIndex = 0;

	int32 FloorIndex = 0;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

		
};
