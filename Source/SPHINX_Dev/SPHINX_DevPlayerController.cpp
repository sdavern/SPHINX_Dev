// Copyright Epic Games, Inc. All Rights Reserved.


#include "SPHINX_DevPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

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
    if (!ActivePlayer) return;

    UCameraComponent* PlayerCamera = ActivePlayer->GetFirstPersonCameraComponent();
    if (!PlayerCamera) return;

    FVector Start = PlayerCamera->GetComponentLocation();
    FVector ForwardVector = PlayerCamera->GetForwardVector();
    FVector End = Start + (ForwardVector * MaxGrabDistance); 
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(ActivePlayer);

    DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 5.0f);

    FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
    bool bHit = GetWorld()->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity, ECC_GameTraceChannel2, Sphere, QueryParams);

    if (bHit && HitResult.GetActor() != nullptr)
    {
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, GrabRadius, 32, FColor::Blue, false, 5.0f);
        UGameItem* HitGameItem = HitResult.GetActor()->FindComponentByClass<UGameItem>();
        if (HitGameItem)
        {
            UE_LOG(LogTemp, Display, TEXT("%s clicked on!"), *HitGameItem->Name);
			//HitGameItem->OnGameItemClicked(ActionMenuContent, ButtonPrefab, ActionHeader);
        }
    }
}
