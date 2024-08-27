


#include "SPHINX_DevPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "ItemProperty.h"
#include "Slate/SlateBrushAsset.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InventoryButton.h"
#include "SpawnPoint.h"
#include "PuzzleManager.h"

ASPHINX_DevPlayerController::ASPHINX_DevPlayerController()
{

}

void ASPHINX_DevPlayerController::BeginPlay()
{
	Super::BeginPlay();
	AssignPlayer();
    AssignInventoryManager();
    PMInstance = APuzzleManager::GetInstance();
    bShowMouseCursor = true; 
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

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

void ASPHINX_DevPlayerController::AssignInventoryManager()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("InventoryManager"), FoundActors);
    if (FoundActors.Num() > 0)
    {
        AActor* FoundActor = FoundActors[0];
        AInventoryManager* IM = Cast<AInventoryManager>(FoundActor);
        if (IM)
        {
            InventoryManager = IM;
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

    if (!ActivePlayer)
    {
        return;
    }

    UPuzzlePoint* PP = NewObject<UPuzzlePoint>(this, UPuzzlePoint::StaticClass());

    if (ActivePlayer->IsHoldingItem && ActivePlayer->HeldGameItem)
    {
        if (PerformGeoSweep())
        {
            CreateActionMenu();
            HitGameItem->OnGameItemClicked(ActionMenu);
            return;
        }
        else
        {
            UGameItem* GameItem = Cast<UGameItem>(ActivePlayer->HeldGameItem->GetComponentByClass(UGameItem::StaticClass()));
            HitGameItem = GameItem;
            CreateActionMenu();
            HitGameItem->OnGameItemClicked(ActionMenu);
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Drop"));
            return;
        }
    }

	else if (PerformGeoSweep())
    {
        UE_LOG(LogTemp, Display, TEXT("GeoSweep = true"));
        CreateActionMenu();
        HitGameItem->OnGameItemClicked(ActionMenu);
        if (ActionMenu->ActionText)
        {
            UE_LOG(LogTemp, Error, TEXT("ActionText is valid from menu"));
        }
        return;
    }
}


bool ASPHINX_DevPlayerController::PerformGeoSweep()
{

    /* if (!ActivePlayer)
    {
        return false;
    }

    DrawDebugCapsule(GetWorld(), ActivePlayer->GetActorLocation(), 70.0f, 45.0f, FQuat::Identity, FColor::Red, false, 30.0f, 0, 1.0f);

    TArray<AActor*> OverlappingActors;
    CapsuleCollider->GetOverlappingActors(OverlappingActors);
    UE_LOG(LogTemp, Display, TEXT("OverlappingActors has %d actors"), OverlappingActors.Num());

    float ClosestDistance = FLT_MAX;

    AActor* ClosestActor = nullptr;
    UGameItem* ClosestGameItem = nullptr;

    FVector PlayerLocation = ActivePlayer->GetActorLocation();

    for (AActor* Actor : OverlappingActors)
    {
        if (Actor && Actor != ActivePlayer)
        {
            UGameItem* GameItem = Actor->FindComponentByClass<UGameItem>();
            if (GameItem)
            {
                UE_LOG(LogTemp, Display, TEXT("GameItem is valid"));
                float Distance = FVector::Dist(PlayerLocation, Actor->GetActorLocation());
                if (Distance < ClosestDistance)
                {
                    ClosestDistance = Distance;
                    ClosestActor = Actor;
                    ClosestGameItem = GameItem;
                }
            }
            UE_LOG(LogTemp, Display, TEXT("GameItem not found"));
        }
        UE_LOG(LogTemp, Display, TEXT("Did not pass first for check"));
    }

    if (ClosestGameItem)
    {
        HitGameItem = ClosestGameItem;
        return true;
    }

    return false; */


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
        }
    }
    return false; 
}

void ASPHINX_DevPlayerController::GrabGameItem(UGameItem* GameItem)
{
    if (GrabSoundCue)
    {
        FVector Location = FVector(0.0f, 0.0f, 0.0f);
        UGameplayStatics::PlaySoundAtLocation(this, GrabSoundCue, Location);
    }

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
            InventoryManager->SelectedItem = GameItem;
            SelectedGameItem = GameItem;

            
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

void ASPHINX_DevPlayerController::OnRightMouseDown()
{
    UE_LOG(LogTemp, Display, TEXT("Right mouse has been clicked!"));
    if (!ActivePlayer)
    {
        return;
    }
    else if (IsPlayingScene)
    {
        return;
    }
    else if (!InventoryOpen)
    {
        OpenInventoryMenu();
        //PMInstance->PrintAllRules();
    }
    else if (InventoryOpen)
    {
        CloseInventoryMenu();
        //PMInstance->PrintAllRules();
    }
}

void ASPHINX_DevPlayerController::DropGameItem(AActor* GameItemBP)
{
    if (DropSoundCue)
    {
        FVector Location = FVector(0.0f, 0.0f, 0.0f);
        UGameplayStatics::PlaySoundAtLocation(this, DropSoundCue, Location);
    }

    USceneComponent* GameItemRoot = GameItemBP->GetRootComponent();
    GameItemRoot->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
    FVector NewLocation = GameItemRoot->GetComponentLocation() + FVector(10.0f, 0.0f, 0.0f);
    NewLocation.Z = 40.0f;
    GameItemRoot->SetWorldLocation(NewLocation);

    ActivePlayer->IsHoldingItem = false;
    ActivePlayer->HeldGameItem = nullptr;
    InventoryManager->SelectedItem = nullptr;
    SelectedGameItem = nullptr;

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
        if (HitGameItem->DbItem->IsStationary)
        {
            ActionMenu->HoldButton->SetIsEnabled(false);
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Can't hold"));

        }
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::OnHoldButtonClicked()
{
    if (HitGameItem->IsNPC && !HitNPC)
    {
        DialogueBox = CreateWidget<UDialogueBox>(this, DialogueBoxClass);
        if (DialogueBox)
        {
            DialogueBox->AddToViewport(0);
            DialogueBox->SetVisibility(ESlateVisibility::Visible);
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Apologise"));

            if (HitGameItem->DbItem)
            {
                DialogueBox->ChangeInspectText(DialogueBox->InspectText, TEXT("'Oi! What do you think you're doing!?!'"));
            }
            InspectOpen = true;
            FSlateColor NewColor = FSlateColor(FLinearColor(0.652479f, 0.662771f, 0.697917f)); 
            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
            HitNPC = true;
        }
    }
    else if (HitGameItem && HitNPC)
    {
        if (DialogueBox)
        {
            DialogueBox->RemoveFromParent();
            DialogueBox = nullptr;
            InspectOpen = false;
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Hold"));
            FSlateColor NewColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f)); 
            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
            HitNPC = false;
        }
    }
    else if (ActivePlayer->IsHoldingItem && HitGameItem != SelectedGameItem)
    {
        UE_LOG(LogTemp, Display, TEXT("Already holding item"));
    }

    else if (HitGameItem && !ActivePlayer->IsHoldingItem)
    {
        if (HitGameItem->InInventory && InventoryManager && InventoryMenu)
        {
            InventoryManager->RemoveItemFromInventory(HitGameItem);
            HitGameItem->InInventory = false;
            ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Add to Inventory"));
            SetupUISprites();
            CloseInventoryMenu();
        }
        GrabGameItem(HitGameItem);
        UE_LOG(LogTemp, Display, TEXT("%s grabbed!"), *HitGameItem->Name);
        if (ActivePlayer->IsHoldingItem && ActionMenu) 
        {
            FSlateColor NewColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f)); 
            ActionMenu->HoldText->SetColorAndOpacity(NewColor);
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




void ASPHINX_DevPlayerController::OnExitButtonClicked()
{
    if (ActionMenu && !InspectOpen && ActionMenuOpen)
    {
        ActionMenu->RemoveFromParent();
        ActionMenu = nullptr;
        UE_LOG(LogTemp, Display, TEXT("Exit button clicked!"));

        
        FInputModeGameOnly InputMode;
        InputMode.SetConsumeCaptureMouseDown(false); // Ensure mouse down events are not consumed by the UI
        SetInputMode(InputMode);
        ActivePlayer->EnableInput(this);
        bShowMouseCursor = true;

        // Set the focus back to the game viewport
        if (APlayerController* PC = Cast<APlayerController>(this))
        {
            PC->SetIgnoreLookInput(false);
            PC->SetIgnoreMoveInput(false);
        }
        ActionMenuOpen = false;
        HitGameItem = nullptr;
    }
    
}



void ASPHINX_DevPlayerController::OnInventoryButtonClicked()
{
    
    if (HitGameItem && InventoryManager)
    {
        if (!HitGameItem->InInventory && InventoryManager->Inventory.Num() <= 16)
        {
            InventoryManager->AddItemToInventory(HitGameItem);
            if (HitGameItem->GetOwner() == ActivePlayer->HeldGameItem)
            {
                ActivePlayer->HeldGameItem = nullptr;
                ActivePlayer->IsHoldingItem = false;
            }
            UE_LOG(LogTemp, Display, TEXT("%s added to Inventory"), *HitGameItem->Name);
            HitGameItem->InInventory = true;
            ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Remove from Inventory"));
            OnExitButtonClicked();
            if (InventoryMenu)
            {
                SetupUISprites();
            }
            HitGameItem = nullptr;
        }
        else if (HitGameItem->InInventory)
        {
            InventoryManager->RemoveItemFromInventory(HitGameItem);
            AActor* OwnerActor = HitGameItem->GetOwner();
            EnableCollisionForActor(OwnerActor);
            UE_LOG(LogTemp, Display, TEXT("%s removed from Inventory"), *HitGameItem->Name);
            HitGameItem->InInventory = false;
            ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Add to Inventory"));
            CloseInventoryMenu();
            OnExitButtonClicked();
            if (InventoryMenu)
            {
                UE_LOG(LogTemp, Display, TEXT("SetupUISprites called"));
                SetupUISprites();
            }
        }
    }
}


void ASPHINX_DevPlayerController::OnInspectButtonClicked()
{
    if (HitGameItem && !InspectOpen && ActionMenu)
    {
        DialogueBox = CreateWidget<UDialogueBox>(this, DialogueBoxClass);
        if (DialogueBox)
        {
            DialogueBox->AddToViewport(0);
            DialogueBox->SetVisibility(ESlateVisibility::Visible);
            ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Exit Inspect"));

            if (HitGameItem->DbItem)
            {
                DialogueBox->ChangeInspectText(DialogueBox->InspectText, HitGameItem->DbItem->Description);
            }
            
            FSlateColor NewColor = FSlateColor(FLinearColor(0.652479f, 0.662771f, 0.697917f)); 
            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
            
            InspectOpen = true;
        }
    }
    else if (HitGameItem && InspectOpen && ActionMenu)
    {
        if (DialogueBox)
        {
            DialogueBox->RemoveFromParent();
            DialogueBox = nullptr;
            InspectOpen = false;
            ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Inspect"));
            FSlateColor NewColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f)); 
            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
        }
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
        if (HitGameItem->DbItem->IsStationary)
        {
            ActionMenu->InventoryButton->SetIsEnabled(false);
            ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Can't add to Inventory"));
        }
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
        SetupExitButton();
        SetupInventoryButton();
        SetupInspectButton();
    }
}

void ASPHINX_DevPlayerController::OpenInventoryMenu()
{
    InventoryMenu = CreateWidget<UInventoryMenu>(this, InventoryMenuClass);

        if (InventoryMenu)
        {
            InventoryMenu->AddToViewport(0);
            InventoryMenu->SetVisibility(ESlateVisibility::Visible);
            InventoryOpen = true;
            UE_LOG(LogTemp, Display, TEXT("Opening inventory menu with %d items, AllImages has %d elements."), InventoryManager->Inventory.Num(), InventoryMenu->AllImages.Num());
            SetupUISprites();
            
        }
}

void ASPHINX_DevPlayerController::CloseInventoryMenu()
{
    if (InventoryMenu && InventoryOpen)
        {
            InventoryMenu->RemoveFromParent();
            InventoryMenu = nullptr;
            InventoryOpen = false;
        }
}

void ASPHINX_DevPlayerController::SetupUISprites()
{
    if (InventoryManager && InventoryMenu)
    {
        ClearSprites();

        for (int i = 0; i < InventoryManager->Inventory.Num(); i++)
        {
            UGameItem* Item = InventoryManager->Inventory[i];
            if (Item)
            {
                AActor* SpriteOwner = Item->GetOwner();
                if (SpriteOwner)
                {
                    UPaperSpriteComponent* SpriteComponent = SpriteOwner->FindComponentByClass<UPaperSpriteComponent>();
                    if (SpriteComponent && SpriteComponent->GetSprite())
                    {
                        if (InventoryMenu->AllImages.IsValidIndex(i) && InventoryMenu->AllButtons.IsValidIndex(i) && InventoryMenu->AllImages[i] && InventoryMenu->AllButtons[i])
                        {
                            InventoryMenu->AllImages[i]->SetBrushFromAtlasInterface(SpriteComponent->GetSprite());
                            SetupSpriteButton(InventoryMenu->AllButtons[i]);
                        }
                    }
                }

            }
        }
    }
}

FString ASPHINX_DevPlayerController::AddSpacesBeforeCaps(const FString& InString)
{
    FString Result;
    for (int32 i = 0; i < InString.Len(); ++i)
    {
        if (FChar::IsUpper(InString[i]) && i > 0)
        {
            Result += TEXT(" ");
        }
        Result += InString[i];
    }
    return Result;
}

void ASPHINX_DevPlayerController::CreateActionMenu()
{
    if (ClickSoundCue)
    {
        FVector Location = FVector(0.0f, 0.0f, 0.0f);
        UGameplayStatics::PlaySoundAtLocation(this, ClickSoundCue, Location);
    }
    if (!ActionMenu)
    {
        ActionMenu = CreateWidget<UActionMenu>(this, ActionMenuClass);
        if (ActionMenu)
        {
            ActionMenu->AddToViewport(1);
            ActionMenu->SetVisibility(ESlateVisibility::Visible);
            SetupActionMenuButtons();
            FInputModeUIOnly InputMode;
            InputMode.SetWidgetToFocus(ActionMenu->TakeWidget());
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            SetInputMode(InputMode);
            if (HitGameItem)
            {
                FString ItemName = AddSpacesBeforeCaps(HitGameItem->Name);
                ActionMenu->ChangeButtonText(ActionMenu->NameText, ItemName);
                if (HitGameItem->InInventory)
                {
                    ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Remove from Inventory"));
                }
                else if (!HitGameItem->InInventory)
                {
                    ActionMenu->ChangeButtonText(ActionMenu->AddText, TEXT("Add to Inventory"));
                }

                if (SelectedGameItem != HitGameItem && ActivePlayer->IsHoldingItem)
                {
                    FSlateColor NewColor = FSlateColor(FLinearColor(0.652479f, 0.662771f, 0.697917f)); 
                    ActionMenu->HoldText->SetColorAndOpacity(NewColor);
                    ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Your hands are full!"));
                }
                else
                {
                    FSlateColor NewColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f));  
                    ActionMenu->HoldText->SetColorAndOpacity(NewColor);
                }
                
                //HitGameItem->OnGameItemClicked(ActionMenu, ActionMenu->ActionButton);
                //UE_LOG(LogTemp, Warning, TEXT("OnGameItemClicked called"));
            }
            if (ActivePlayer)
            {
                ActivePlayer->DisableInput(this);
                ActivePlayer->GetCharacterMovement()->Velocity = FVector::ZeroVector;
                ActivePlayer->GetCharacterMovement()->StopMovementImmediately();
                UE_LOG(LogTemp, Display, TEXT("ActivePlayer movement stopped."));
            
            }
            ActionMenuOpen = true;
            
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ActionMenu not created"));
        }
    }
    
}

void ASPHINX_DevPlayerController::SetupSpriteButton(UInventoryButton* Button)
{
    if (InventoryMenu && Button)
    {
        Button->OnInventoryButtonClicked.AddDynamic(this, &ASPHINX_DevPlayerController::OnSpriteButtonClicked);
        UE_LOG(LogTemp, Display, TEXT("ExitButton set up"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("SpriteButton setup falied"));
    }
}

void ASPHINX_DevPlayerController::OnSpriteButtonClicked(UInventoryButton* Button)
{
    if (!ActionMenuOpen)
    {
        int ItemIndex = InventoryMenu->AllButtons.Find(Button);
        if (ItemIndex != INDEX_NONE && InventoryManager->Inventory.IsValidIndex(ItemIndex))
        {
            HitGameItem = InventoryManager->Inventory[ItemIndex];
            if (HitGameItem)
            {
                CreateActionMenu();
                HitGameItem->OnGameItemClicked(ActionMenu);
            }
        }
    }
    else if (ActionMenuOpen)
    {
        OnExitButtonClicked();
        int ItemIndex = InventoryMenu->AllButtons.Find(Button);
        if (ItemIndex != INDEX_NONE && InventoryManager->Inventory.IsValidIndex(ItemIndex))
        {
            HitGameItem = InventoryManager->Inventory[ItemIndex];
            if (HitGameItem)
            {
                CreateActionMenu();
                //HitGameItem->OnGameItemClicked(ActionMenu, ActionMenu->ActionButton, ActionMenu->ActionText, PP);
            }
        }
    }
}

void ASPHINX_DevPlayerController::ClearSprites()
{
    for (UImage* Sprite : InventoryMenu->AllImages)
    {
        if (Sprite && InventoryMenu && InventoryMenu->DefaultSprite)
        {
            Sprite->SetBrushFromTexture(InventoryMenu->DefaultSprite);
        }
    }
}


/* 
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
 */
/* void ASPHINX_DevPlayerController::OnActionButtonClicked()
{
    if (HitGameItem)
    {
        UE_LOG(LogTemp, Display, TEXT("Action button clicked!"));
        //HitGameItem->OnGameItemClicked(ActionMenuContent, ButtonPrefab, ActionHeader);
    }
} */