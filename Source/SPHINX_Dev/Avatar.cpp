// Fill out your copyright notice in the Description page of Project Settings.

#include "Avatar.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "PaperZDCharacter.h"
#include "Engine/LocalPlayer.h"

//DEFINE_LOG_CATEGORY(LogTemplateCharacter);

// Sets default values
AAvatar::AAvatar()
{

	GameItem = CreateDefaultSubobject<UGameItem>(TEXT("GameItem"));
	GameItem->Name = TEXT("Player");

	LastMovementDirection = FVector(0, 1, 0);

	IsHoldingItem = false;


    

}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();

		// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
}



void AAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAvatar::Move);
	}
	else
	{
		//UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void AAvatar::Move(const FInputActionValue& Value)
{
    // Input is a Vector2D
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // Calculate the intended movement direction and speed
        float InputMagnitude = MovementVector.Size();
        if (InputMagnitude > 0)
        {
            // Check if both axes are being used for movement
            bool isDiagonalMovement = (FMath::Abs(MovementVector.X) > 0 && FMath::Abs(MovementVector.Y) > 0);
            float appliedSpeedModifier = isDiagonalMovement ? HalvedSpeedModifier : SpeedModifier;

            // Scale the movement vector by the speed modifier
            MovementVector *= appliedSpeedModifier;

            // Apply movement scaled by delta time
            FVector ForwardMovement = GetActorForwardVector() * MovementVector.Y * GetWorld()->GetDeltaSeconds();
            FVector RightMovement = GetActorRightVector() * MovementVector.X * GetWorld()->GetDeltaSeconds();

            // Add movement input
            AddMovementInput(ForwardMovement);
            AddMovementInput(RightMovement);

            // Update last movement direction if there is movement
            if (this->GetVelocity().Size() > 0)
            {
                LastMovementDirection = this->GetVelocity().GetSafeNormal();
            }
        }
    }
}


