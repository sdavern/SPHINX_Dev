// Fill out your copyright notice in the Description page of Project Settings.


#include "InitObject.h"

// Sets default values
AInitObject::AInitObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInitObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInitObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

