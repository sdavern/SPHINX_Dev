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

	SpawnInit();
	
}

// Called every frame
void AGamePuzzlePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UPuzzlePoint* AGamePuzzlePoint::PPToPtr()
{
	if (PuzzlePoint)
	{
		UPuzzlePoint* Ptr = NewObject<UPuzzlePoint>(this, PuzzlePoint);
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
			AInitNPC* InitNPC = GetWorld()->SpawnActor<AInitNPC>(InitNPCs[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitNPC spawned."));
		}

		else if (PuzzlePointPtr->IsText == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitTexts.Num() - 1);
			AInitText* InitText = GetWorld()->SpawnActor<AInitText>(InitTexts[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitText spawned"));
		}

		else if (PuzzlePointPtr->IsObject == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitObjects.Num() - 1);
			AInitObject* InitObject = GetWorld()->SpawnActor<AInitObject>(InitObjects[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitObject spawned."));
		}
	}
}