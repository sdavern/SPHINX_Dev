// Copyright Epic Games, Inc. All Rights Reserved.


#include "SPHINX_DevPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"

void ASPHINX_DevPlayerController::BeginPlay()
{
	Super::BeginPlay();
	AssignPlayer();

}

void ASPHINX_DevPlayerController::AssignPlayer()
{
	TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Player"), FoundActors);
    if (FoundActors.Num() > 0)
    {
        AActor* FoundActor = FoundActors[0];
        APlayerPawn* PlayerPawn = Cast<APlayerPawn>(FoundActor);
        if (PlayerPawn)
        {
            ActivePlayer = PlayerPawn;
        }
    }
}

void ASPHINX_DevPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
    InputComponent->BindAction("LeftClick", IE_Pressed, this, &ASPHINX_DevPlayerController::OnLeftMouseDown);
	UE_LOG(LogTemp, Display, TEXT("LeftClick bound to mouse."));
}

void ASPHINX_DevPlayerController::OnLeftMouseDown()
{
	UE_LOG(LogTemp, Display, TEXT("Left mouse has been clicked!"));
	PerformGeoSweep();
}


void ASPHINX_DevPlayerController::PerformGeoSweep()
{
	FVector2D MousePosition;
    if (GetMousePosition(MousePosition.X, MousePosition.Y))
    {
		FVector2D ViewportSize;
		if (GEngine && GEngine->GameViewport)
		{
			GEngine->GameViewport->GetViewportSize(ViewportSize);
    		FVector2D ScreenCenter = FVector2D(ViewportSize.X / 2, ViewportSize.Y / 2);

        	FVector WorldPosition, WorldDirection;
        	if (DeprojectScreenPositionToWorld(MousePosition.X, MousePosition.Y, WorldPosition, WorldDirection))
			{
				FHitResult HitResult;
        		FVector Start = WorldPosition;
        		FVector End = Start + WorldDirection * 1000;

				DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 5); 
				DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);
		
				FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
        		GetWorld()->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity, ECC_GameTraceChannel2, Sphere);
				AActor* HitActor = HitResult.GetActor();

				if (HitActor != nullptr)
				{
					UGameItem* HitGameItem = HitActor->FindComponentByClass<UGameItem>();
					if (HitGameItem != nullptr)
					{
						UE_LOG(LogTemp, Display, TEXT("%s clicked on!"), *HitGameItem->Name);
					}
				}
			}

		}
		
	}
	
}
