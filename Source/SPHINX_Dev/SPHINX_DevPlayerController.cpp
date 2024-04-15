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
        AAvatar* Avatar = Cast<AAvatar>(FoundActor);
        if (Avatar)
        {
            ActivePlayer = Avatar;
        }
    }
}

void ASPHINX_DevPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
    InputComponent->BindAction("LeftClick", IE_Pressed, this, &ASPHINX_DevPlayerController::OnLeftMouseDown);
	UE_LOG(LogTemp, Display, TEXT("LeftClick bound to mouse."));

    InputComponent->BindAction("RightClick", IE_Pressed, this, &ASPHINX_DevPlayerController::OnRightMouseDown);
	UE_LOG(LogTemp, Display, TEXT("RightClick bound to mouse."));
}

void ASPHINX_DevPlayerController::OnLeftMouseDown()
{
	UE_LOG(LogTemp, Display, TEXT("Left mouse has been clicked!"));
	PerformGeoSweep();
}


void ASPHINX_DevPlayerController::PerformGeoSweep()
{
    if (!ActivePlayer) return;

    FVector CurrentVelocity = ActivePlayer->GetVelocity();
    FVector Direction;

    if (CurrentVelocity.Size() > 0)
    {
        Direction = CurrentVelocity.GetSafeNormal();
        ActivePlayer->LastMovementDirection = Direction;
    }
    else
    {
        Direction = ActivePlayer->LastMovementDirection;
    }


    FVector Start = ActivePlayer->GetActorLocation();
    FVector End = Start + FVector(Direction.X, Direction.Y, 0) * MaxGrabDistance;
    
    
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
            GrabGameItem(HitGameItem);
			//HitGameItem->OnGameItemClicked(ActionMenuContent, ButtonPrefab, ActionHeader);
        }
    }
}

void ASPHINX_DevPlayerController::GrabGameItem(UGameItem* GameItem)
{
    if (ActivePlayer->HeldGameItem != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("Player is already holding item"));
        //open menu and allow for inspection, add to inventory or swap item in hand to new item by sending old item to inventory
    }
    else
    {
        AActor* GameItemBP = GameItem->GetOwner();

        DisableCollisionForActor(GameItemBP);
  
        GameItemBP->AttachToComponent(ActivePlayer->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
        FVector RelativeLocation = FVector(20.0f, 0.0f, 0.0f);
        GameItemBP->SetActorRelativeLocation(RelativeLocation);
        ActivePlayer->HeldGameItem = GameItemBP;
        ActivePlayer->IsHoldingItem = true;
    }
    
}

void ASPHINX_DevPlayerController::DisableCollisionForActor(AActor* ActorToDisable)
{
     if (ActorToDisable != nullptr)
    {
        TArray<UPrimitiveComponent*> Components;
        ActorToDisable->GetComponents<UPrimitiveComponent>(Components);

        for (UPrimitiveComponent* Component : Components)
        {
            if (Component != nullptr)
            {
                Component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                Component->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

                UE_LOG(LogTemp, Warning, TEXT("Collision disabled for %s"), *Component->GetName());
            }
        }
        UE_LOG(LogTemp, Warning, TEXT("Collision disabled for all components of %s"), *ActorToDisable->GetName());
    }
}

void ASPHINX_DevPlayerController::OnRightMouseDown()
{
    UE_LOG(LogTemp, Display, TEXT("Right mouse has been clicked!"));
    if (ActivePlayer && ActivePlayer->HeldGameItem)
    {
        DropGameItem(ActivePlayer->HeldGameItem);
    }
}

void ASPHINX_DevPlayerController::DropGameItem(AActor* GameItemBP)
{
    USceneComponent* GameItemRoot = GameItemBP->GetRootComponent();
    GameItemRoot->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

    // Ensure the item has a slight offset when dropped; sometimes helps with collision detection
    FVector NewLocation = GameItemRoot->GetComponentLocation() + FVector(0.0f, 0.0f, 10.0f);
    GameItemRoot->SetWorldLocation(NewLocation);
    ActivePlayer->IsHoldingItem = false;

    EnableCollisionForActor(GameItemBP);
}

void ASPHINX_DevPlayerController::EnableCollisionForActor(AActor* ActorToEnable)
{
     if (ActorToEnable != nullptr)
    {
        TArray<UPrimitiveComponent*> Components;
        ActorToEnable->GetComponents<UPrimitiveComponent>(Components);

        for (UPrimitiveComponent* Component : Components)
        {
            if (Component != nullptr)
            {
                Component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                Component->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);

                UE_LOG(LogTemp, Warning, TEXT("Collision enabled for %s"), *Component->GetName());
            }
        }
        UE_LOG(LogTemp, Warning, TEXT("Collision enabled for all components of %s"), *ActorToEnable->GetName());
    }
}