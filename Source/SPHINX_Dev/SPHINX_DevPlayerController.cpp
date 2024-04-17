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

    /* InputComponent->BindAction("RightClick", IE_Pressed, this, &ASPHINX_DevPlayerController::OnRightMouseDown);
	UE_LOG(LogTemp, Display, TEXT("RightClick bound to mouse.")); */
}

void ASPHINX_DevPlayerController::OnLeftMouseDown()
{
	UE_LOG(LogTemp, Display, TEXT("Left mouse has been clicked!"));
	if (PerformGeoSweep())
    {
        UE_LOG(LogTemp, Display, TEXT("GeoSweep = true"));
        ActionMenu = CreateWidget<UActionMenu>(this, ActionMenuClass);
        if (ActionMenu)
        {
            ActionMenu->AddToViewport(1);
            ActionMenu->SetVisibility(ESlateVisibility::Visible);
            SetupActionMenuButtons();
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ActionMenu not created"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("GeoSweep = false"));
    }
    
}


bool ASPHINX_DevPlayerController::PerformGeoSweep()
{
    if (!ActivePlayer) return false;

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
        HitGameItem = HitResult.GetActor()->FindComponentByClass<UGameItem>();
        if (HitGameItem)
        {
            UE_LOG(LogTemp, Display, TEXT("%s clicked on!"), *HitGameItem->Name);
            return true;
			//HitGameItem->OnGameItemClicked(ActionMenuContent, ButtonPrefab, ActionHeader);
        }
    }
    return false;
}

void ASPHINX_DevPlayerController::GrabGameItem(UGameItem* GameItem)
{
    if (GameItem)
    {
        if (ActivePlayer->IsHoldingItem)
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

/* void ASPHINX_DevPlayerController::OnRightMouseDown()
{
    UE_LOG(LogTemp, Display, TEXT("Right mouse has been clicked!"));
    if (ActivePlayer && ActivePlayer->HeldGameItem)
    {
        DropGameItem(ActivePlayer->HeldGameItem);
    } 
} */

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

void ASPHINX_DevPlayerController::SetupHoldButton()
{
    if (ActionMenu && HitGameItem && ActionMenu->HoldButton)
    {
        ActionMenu->HoldButton->OnClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnHoldButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("HoldButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::OnHoldButtonClicked()
{
    if (HitGameItem && !ActivePlayer->IsHoldingItem)
    {
        GrabGameItem(HitGameItem);
        UE_LOG(LogTemp, Display, TEXT("%s grabbed!"), *HitGameItem->Name);
        if (ActivePlayer->IsHoldingItem && ActionMenu) 
        {
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Drop"));
        }
    }
    else if (HitGameItem && ActivePlayer->HeldGameItem)
    {
        DropGameItem(ActivePlayer->HeldGameItem);
        UE_LOG(LogTemp, Display, TEXT("%s dropped!"), *HitGameItem->Name);
        if (!ActivePlayer->IsHoldingItem && ActionMenu) 
        {
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Hold"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("HoldButton clicked, but no item to grab"));
    }
}

void ASPHINX_DevPlayerController::OnActionButtonClicked()
{
    if (HitGameItem)
    {
        UE_LOG(LogTemp, Display, TEXT("Action button clicked!"));
    }
}


void ASPHINX_DevPlayerController::OnExitButtonClicked()
{
    if (ActionMenu)
    {
        ActionMenu->RemoveFromParent();
        ActionMenu = nullptr;
        UE_LOG(LogTemp, Display, TEXT("Exit button clicked!"));
    }
}


void ASPHINX_DevPlayerController::OnInventoryButtonClicked()
{
    if (HitGameItem)
    {
        UE_LOG(LogTemp, Display, TEXT("Inventory button clicked!"));
    }
}


void ASPHINX_DevPlayerController::OnInspectButtonClicked()
{
    if (HitGameItem)
    {
        //Print Item->Description on new Widget
        UE_LOG(LogTemp, Display, TEXT("Inspect button clicked!"));
    }
}

void ASPHINX_DevPlayerController::SetupActionButton()
{
    if (ActionMenu && HitGameItem && ActionMenu->ActionButton)
    {
        //Change ActionText to Rule->Action
        ActionMenu->ActionButton->OnClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnActionButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("ActionButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("ActionButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::SetupExitButton()
{
    if (ActionMenu && HitGameItem && ActionMenu->ExitButton)
    {
        ActionMenu->ExitButton->OnClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnExitButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("ExitButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("ExitButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::SetupInventoryButton()
{
    if (ActionMenu && HitGameItem && ActionMenu->InventoryButton)
    {
        ActionMenu->InventoryButton->OnClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnInventoryButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("InventoryButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("InventoryButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::SetupInspectButton()
{
    if (ActionMenu && HitGameItem && ActionMenu->InspectButton)
    {
        ActionMenu->InspectButton->OnClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnInspectButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("InspectButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("InspectButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::SetupActionMenuButtons()
{
    if (ActionMenu && HitGameItem)
    {
        SetupHoldButton();
        SetupActionButton();
        SetupExitButton();
        SetupInventoryButton();
        SetupInspectButton();
    }
}