// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Area.h"
#include "Rule.h"
#include "Item.h"
#include "Term.h"
#include "GameItem.h"
#include "GameArea.h"
#include "PuzzleManager.h"
#include "InventoryManager.h"
#include "PuzzlePoint.h"
#include "GamePuzzlePoint.h"
#include "Generator.generated.h"

class ASpawnPoint;

//Make singleton, see GenerateForArea in PuzzleManager

UCLASS()
class SPHINX_DEV_API AGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerator();

	static AGenerator* GetInstance();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	static const bool DebugMode = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FindSpawnDelay = 5.0f;

	void Spawn(UWorld* World, UItem* Item, URule* Rule, UPuzzlePoint* PP);

	URule* GeneratePuzzleStartingFrom(UPuzzlePoint* PP, TArray<UPuzzlePoint*> NewAccessiblePPs, int depth);

	bool GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UPuzzlePoint* CurrentPP, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel, AGenerator* GInstance);

	AGamePuzzlePoint* FindGamePuzzlePoint(UPuzzlePoint* PP);

	void GetAllAttachedActors(AActor* ParentActor, TArray<AActor*>& OutActors);

	UWorld* GetWorldForGenerator();

	ASpawnPoint* GetSpawnPointFor(UItem* Item);

	TArray<ASpawnPoint*> GetAllSpawnPoints();

	TArray<ASpawnPoint*> GetSPsInViewport();

	UFUNCTION()
	void RetryGetSpawnPointFor(UItem* Item);

	int MAX_DEPTH = 20;

	UPROPERTY()
	APuzzleManager* PMInstance;

	UPROPERTY()
	AInventoryManager* InventoryInstance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:


	static AGenerator* Instance;

	//static TMap<UArea*, URule*> PuzzlesPerArea;


	UPROPERTY(EditAnywhere)
	TArray<UGameItem*> StartingInventory;

	static FString PuzzleString;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
