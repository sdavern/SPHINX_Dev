// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "GameItem.h"
#include "ActionMenu.h"
#include "Avatar.h"
#include "SPHINX_DevPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class SPHINX_DEV_API ASPHINX_DevPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UActionMenu> ActionMenuClass;

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	virtual void SetupInputComponent() override;

	// Begin Actor interface

private:

	UPROPERTY(VisibleAnywhere)
	AAvatar* ActivePlayer;

	void OnLeftMouseDown();

	void OnRightMouseDown();

	void PerformGeoSweep();

	UPROPERTY(EditAnywhere)
	float MaxGrabDistance = 400;

	UPROPERTY(EditAnywhere)
	float GrabRadius = 10;

	void AssignPlayer();

	void GrabGameItem(UGameItem* GameItem);

	void DropGameItem(AActor* GameItemBP);

	void DisableCollisionForActor(AActor* ActorToDisable);

	void EnableCollisionForActor(AActor* ActorToEnable);


protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
