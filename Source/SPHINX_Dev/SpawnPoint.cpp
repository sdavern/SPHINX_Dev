// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPoint.h"
#include "EngineUtils.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	GetLocation();
	ToSpawnPropPtrs();
}

// Called every frame
void ASpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnPoint::GetLocation()
{
	Location = GetActorLocation();
}

void ASpawnPoint::ToSpawnPropPtrs()
{
    PropPtrs.Empty();
	for (TSubclassOf<UItemProperty> Prop : SpawnableProperties)
    {
        if (Prop)
        {
            UItemProperty* PropPtr = NewObject<UItemProperty>(this, Prop);
            if (PropPtr)
            {
                PropPtrs.Add(PropPtr);
                UE_LOG(LogTemp, Error, TEXT("PropPtr %s %s added"), *PropPtr->Name, *PropPtr->Value);
            }
            
        }
    }
}

