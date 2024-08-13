// Fill out your copyright notice in the Description page of Project Settings.


#include "SphinxActor.h"

// Sets default values
ASphinxActor::ASphinxActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASphinxActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASphinxActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

