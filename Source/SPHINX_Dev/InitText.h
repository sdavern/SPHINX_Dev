// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InitText.generated.h"

UCLASS()
class SPHINX_DEV_API AInitText : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInitText();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
