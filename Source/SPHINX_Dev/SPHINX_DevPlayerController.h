// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "EngineUtils.h"
#include "Sound/SoundCue.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "GameItem.h"
#include "ActionMenu.h"
#include "ActionBtn.h"
#include "DialogueBox.h"
#include "InventoryMenu.h"
#include "Avatar.h"
#include "InventoryManager.h"
#include "SPHINX_DevPlayerController.generated.h"

class UInputMappingContext;
class UInventoryButton;
class UItemProperty;
class ASpawnPoint;

UCLASS()
class SPHINX_DEV_API ASPHINX_DevPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UActionMenu> ActionMenuClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UDialogueBox> DialogueBoxClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UInventoryMenu> InventoryMenuClass;

	UPROPERTY()
	AInventoryManager* InventoryManager;

	UPROPERTY(VisibleAnywhere)
	AAvatar* ActivePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPlayingScene = false;

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	virtual void SetupInputComponent() override;

	// Begin Actor interface

private:

	

	void OnLeftMouseDown();

	void OnRightMouseDown();

	bool PerformGeoSweep();

	UPROPERTY(EditAnywhere)
	float MaxGrabDistance = 400;

	UPROPERTY(EditAnywhere)
	float GrabRadius = 10;

	void AssignPlayer();
	
	void AssignInventoryManager();

	void DisableCollisionForActor(AActor* ActorToDisable);

	void EnableCollisionForActor(AActor* ActorToEnable);
	
	UGameItem* HitGameItem;

	UGameItem* SelectedGameItem;

public:

	void DropGameItem(AActor* GameItemBP);

	void GrabGameItem(UGameItem* GameItem);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* GrabSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* DropSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* ClickSoundCue;

	UActionMenu* ActionMenu;

	UDialogueBox* DialogueBox;

	UInventoryMenu* InventoryMenu;

	bool InspectOpen = false;

	bool InventoryOpen = false;

	bool ActionMenuOpen = false;

	bool HitNPC = false;

	void SetupHoldButton();

	/* void SetupActionButton(); */

	void SetupExitButton();

	void SetupInventoryButton();

	void SetupInspectButton();

	void SetupSpriteButton(UInventoryButton* Button);

	void SetupUISprites();

	void CreateActionMenu();

	UFUNCTION()
	void OnHoldButtonClicked();

	/* UFUNCTION()
	void OnActionButtonClicked(); */

	UFUNCTION()
	void OnInventoryButtonClicked();

	UFUNCTION()
	void OnExitButtonClicked();

	UFUNCTION()
	void OnInspectButtonClicked();

	UFUNCTION()
	void OnSpriteButtonClicked(UInventoryButton* Button);

	void SetupActionMenuButtons();

	UFUNCTION()
	void OpenInventoryMenu();

	UFUNCTION()
	void CloseInventoryMenu();

	UFUNCTION()
	void ClearSprites();

	FString AddSpacesBeforeCaps(const FString& InString);
	


protected:

	virtual void BeginPlay() override;


	// End Actor interface
};
