// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PuzzlePoint.h"
#include "InitNPC.generated.h"

UCLASS()
class SPHINX_DEV_API AInitNPC : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AInitNPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY()
	UPuzzlePoint* OwningPP;

	/* UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UGameItem* GameItem; */

};
