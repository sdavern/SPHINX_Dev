// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/SceneComponent.h"
#include "Term.h"
#include "Area.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SPHINX_DEV_API UArea : public UObject
{
	GENERATED_BODY()

public:

	UArea();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTerm*> Goals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UArea*> ConnectedTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* InGameArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFinalScene = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTerm* CurrentGoal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* AreaObject;

	void AddGoal();

	void DeleteGoal(int32 Index);

	void AddConnectedArea();

	void DeleteConnectedArea(int32 Index);

	void SetCurrentGoal(UTerm* Goal);

	UTerm* GetCurrentGoal();

	FString GetHint();

	FString GetObjective();

	void SetFinal (bool Final);

	bool IsFinal();

	FString ToString() const;











};
