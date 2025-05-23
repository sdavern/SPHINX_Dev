// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Components/CapsuleComponent.h"
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
#include "InitNPC.h"
#include "SPHINX_DevPlayerController.generated.h"

class UInputMappingContext;
class UInventoryButton;
class UItemProperty;
class ASpawnPoint;
class APuzzleManager;


UCLASS()
class SPHINX_DEV_API ASPHINX_DevPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	ASPHINX_DevPlayerController();

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

	UPROPERTY()
	bool NPCIsHit = false;

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	virtual void SetupInputComponent() override;

	// Begin Actor interface

private:

	void OnSpaceDown();

	void OnOneDown();

	void OnLeftMouseDown();

	void OnRightMouseDown();

	bool PerformGeoSweep();

	bool PerformCursorTrace();

	UPROPERTY(EditAnywhere)
	float MaxGrabDistance = 400;

	UPROPERTY(EditAnywhere)
	float GrabRadius = 30;

	void AssignPlayer();
	
	void AssignInventoryManager();

	void DisableCollisionForActor(AActor* ActorToDisable);

	void EnableCollisionForActor(AActor* ActorToEnable);
	
	UPROPERTY()
	UGameItem* HitGameItem;

	UPROPERTY()
	UGameItem* SelectedGameItem;

	UPROPERTY()
	APuzzleManager* PMInstance;

	
public:

	void DropGameItem(AActor* GameItemBP);

	void GrabGameItem(UGameItem* GameItem);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* GrabSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* DropSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* ClickSoundCue;

	UPROPERTY()
	UActionMenu* ActionMenu;

	UPROPERTY()
	UDialogueBox* DialogueBox;

	UPROPERTY()
	UInventoryMenu* InventoryMenu;

	UPROPERTY()
	AInitNPC* HitInitNPC;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool InspectOpen = false;

	UPROPERTY(BlueprintReadWrite, Category="Inventory")
	bool InventoryOpen = false;

	UPROPERTY(BlueprintReadWrite, Category="Inventory")
	bool ExitMenuOpen = false;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
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
