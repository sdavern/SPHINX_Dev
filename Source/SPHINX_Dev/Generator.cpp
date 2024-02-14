// Fill out your copyright notice in the Description page of Project Settings.


#include "Generator.h"

AGenerator* AGenerator::Instance = nullptr;

const FString AGenerator::PuzzleString = TEXT("");

// Sets default values
AGenerator::AGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AGenerator* AGenerator::GetInstance()
{
	if (!Instance)
    {
        Instance = NewObject<AGenerator>();
    }
    return Instance;
}

// Called when the game starts or when spawned
void AGenerator::BeginPlay()
{
	Super::BeginPlay();

	GetInstance();
	
}

// Called every frame
void AGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


URule* AGenerator::GeneratePuzzleStartingFrom(UArea* Area, TArray<UArea*> NewAccessibleAreas)
{
	URule* Rule = NewObject<URule>(this, URule::StaticClass());
	return Rule;
}
