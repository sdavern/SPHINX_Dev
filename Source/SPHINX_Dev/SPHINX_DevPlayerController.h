// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameItem.h"
#include "PlayerPawn.h"
#include "SPHINX_DevPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class SPHINX_DEV_API ASPHINX_DevPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	virtual void SetupInputComponent() override;

	// Begin Actor interface

private:

	UPROPERTY(VisibleAnywhere)
	APlayerPawn* ActivePlayer;

	void OnLeftMouseDown();

	void PerformGeoSweep();

	UPROPERTY(EditAnywhere)
	float MaxGrabDistance = 400;

	UPROPERTY(EditAnywhere)
	float GrabRadius = 100;

	void AssignPlayer();

protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
