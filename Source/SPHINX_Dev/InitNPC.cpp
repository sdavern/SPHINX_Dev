// Fill out your copyright notice in the Description page of Project Settings.


#include "InitNPC.h"

// Sets default values
AInitNPC::AInitNPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInitNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInitNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInitNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

