// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "PaperZDCharacter.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "GameItem.h"
#include "Avatar.generated.h"

class UInputComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class SPHINX_DEV_API AAvatar : public APaperZDCharacter
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

public:
	// Sets default values for this pawn's properties
	AAvatar();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Components")
    UGameItem* GameItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float SpeedModifier = 18.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float HalvedSpeedModifier = 12.5f;

	FVector LastMovementDirection;

	UPROPERTY()
	AActor* HeldGameItem;

	bool IsHoldingItem;
	

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface


};
