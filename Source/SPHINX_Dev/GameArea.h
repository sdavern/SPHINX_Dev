// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "GameItem.h"
#include "Area.h"
#include "Item.h"
#include "GameArea.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPHINX_DEV_API UGameArea : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameArea();

	UPROPERTY(EditAnywhere)
	TArray<UGameItem*> ItemsInArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UArea> AreaBP;

	UPROPERTY(EditAnywhere)
	AActor* AreaContent;

	FVector GetNextSpawnPt(bool NPC, bool Floor);

	FVector GetNextSpawnPt();

	FVector GetRandomSpawnPt(bool NPC);

	FVector GetRandomSpawnPt();

	FString ToString();

	void GetAllAttachedActors(AActor* ParentActor, TArray<AActor*>& OutActors);


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




		
};
