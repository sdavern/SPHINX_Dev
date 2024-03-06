// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePuzzlePoint.h"

// Sets default values
AGamePuzzlePoint::AGamePuzzlePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGamePuzzlePoint::BeginPlay()
{
	Super::BeginPlay();

	PointTransform = this->GetActorTransform();

	PuzzlePointPtr = this->PPToPtr();

	UPuzzlePoint* MyPPInstance = NewObject<UPuzzlePoint>(this, PuzzlePointBP);
	if (MyPPInstance)
	{
		MyPPInstance->OwningGamePP = this;
	}

		
}

// Called every frame
void AGamePuzzlePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsActive && !InitSpawned)
	{
		SpawnInit();
		InitSpawned = true;
	}

}

UPuzzlePoint* AGamePuzzlePoint::PPToPtr()
{
	if (PuzzlePointBP)
	{
		UPuzzlePoint* Ptr = NewObject<UPuzzlePoint>(this, PuzzlePointBP);
		return Ptr;
 	}
	return nullptr;
}

void AGamePuzzlePoint::SpawnInit()
{
	if (GetWorld())
	{
		if (PuzzlePointPtr->IsNPC == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitNPCs.Num() - 1);
			InitNPC = GetWorld()->SpawnActor<AInitNPC>(InitNPCs[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitNPC spawned."));
			InitSpawned = true;
		}

		else if (PuzzlePointPtr->IsText == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitTexts.Num() - 1);
			InitText = GetWorld()->SpawnActor<AInitText>(InitTexts[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitText spawned"));
			InitSpawned = true;
		}

		else if (PuzzlePointPtr->IsObject == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitObjects.Num() - 1);
			InitObject = GetWorld()->SpawnActor<AInitObject>(InitObjects[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitObject spawned."));
			InitSpawned = true;
		}
	}
}

void AGamePuzzlePoint::DespawnInit()
{
	if (PuzzlePointPtr->IsNPC == true)
	{
		if (InitNPC)
		{
			InitNPC->Destroy();
		}
	}
	else if (PuzzlePointPtr->IsText == true)
	{
		if (InitText)
		{
			InitText->Destroy();
		}
	}
	else if (PuzzlePointPtr->IsObject == true)
	{
		if (InitObject)
		{
			InitObject->Destroy();
		}
	}
}