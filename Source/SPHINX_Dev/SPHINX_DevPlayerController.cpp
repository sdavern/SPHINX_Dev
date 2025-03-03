


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

    InputComponent->BindAction("Space", IE_Pressed, this, &ASPHINX_DevPlayerController::OnSpaceDown);
    UE_LOG(LogTemp, Display, TEXT("Space bound to key"));

    InputComponent->BindAction("InventoryOne", IE_Pressed, this, &ASPHINX_DevPlayerController::OnOneDown);
    UE_LOG(LogTemp, Display, TEXT("One bound to key"));


    
}

void ASPHINX_DevPlayerController::OnSpaceDown()
{
    UE_LOG(LogTemp, Display, TEXT("Space"));
    
}

void ASPHINX_DevPlayerController::OnRightMouseDown()
{
    UE_LOG(LogTemp, Display, TEXT("Right mouse has been clicked"));
}

void ASPHINX_DevPlayerController::OnLeftMouseDown()
{
	UE_LOG(LogTemp, Display, TEXT("Left mouse has been clicked!"));

    if (!ActivePlayer)
    {
        return;
    }

    //UPuzzlePoint* PP = NewObject<UPuzzlePoint>(this, UPuzzlePoint::StaticClass());

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
        if (ActionMenu)
        {
            HitGameItem->OnGameItemClicked(ActionMenu);
        }
        
        if (ActionMenu->ActionText)
        {
            UE_LOG(LogTemp, Error, TEXT("ActionText is valid from menu"));
        }
        return;
    }

    
}


bool ASPHINX_DevPlayerController::PerformGeoSweep()
{
    if (!ActivePlayer) return false;

    FVector Start = ActivePlayer->GetActorLocation();
    FVector End = Start + 0.01f;//FVector(Direction.X, Direction.Y, 0) * MaxGrabDistance;
    
    
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(ActivePlayer);

    FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
    bool bHit = GetWorld()->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity, ECC_GameTraceChannel2, Sphere, QueryParams);

    if (bHit && HitResult.GetActor() != nullptr)
    {
        //DrawDebugSphere(GetWorld(), Start, GrabRadius, 32, FColor::Blue, false, 5.0f);

        AInitNPC* InitNPC = Cast<AInitNPC>(HitResult.GetActor());
        if (InitNPC)
        {
            UE_LOG(LogTemp, Display, TEXT("Cast to InitNPC succeeded"));
            NPCIsHit = true;
            HitGameItem = HitResult.GetActor()->FindComponentByClass<UGameItem>();

            if (InitNPC->OwningPP && InitNPC->OwningPP->MainGoal)
            {
                UE_LOG(LogTemp, Display, TEXT("MainGoal is %s"), *InitNPC->OwningPP->MainGoal->ToString());
            }

            if (HitGameItem)
            {
                UE_LOG(LogTemp, Display, TEXT("%s clicked on!"), *HitGameItem->Name);
                InventoryManager->HitGameItem = HitGameItem;
                HitInitNPC = InitNPC;
                return true;
            }
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("Cast to InitNPC failed"));
            NPCIsHit = false;
            HitGameItem = HitResult.GetActor()->FindComponentByClass<UGameItem>();
            if (HitGameItem)
            {
                UE_LOG(LogTemp, Display, TEXT("%s clicked on!"), *HitGameItem->Name);
                InventoryManager->HitGameItem = HitGameItem;
                return true;
            }
        }

        
    }
    return false; 
}

void ASPHINX_DevPlayerController::GrabGameItem(UGameItem* GameItem)
{
    UE_LOG(LogTemp, Display, TEXT("GrabGameItemCalled"));
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
    UE_LOG(LogTemp, Display, TEXT("GrabGameItem: GameItem is not valid"));
    
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

void ASPHINX_DevPlayerController::OnOneDown()
{
    UE_LOG(LogTemp, Display, TEXT("One key pressed!"));
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
    GameItemBP->SetActorLocation(NewLocation);

    UPaperSpriteComponent* SpriteComponent = GameItemBP->FindComponentByClass<UPaperSpriteComponent>();
    if (SpriteComponent)
    {
        SpriteComponent->SetVisibility(true);
        SpriteComponent->SetHiddenInGame(false);
        SpriteComponent->MarkRenderStateDirty();
    }

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
        if (!HitGameItem->DbItem)
        {
            UE_LOG(LogTemp, Display, TEXT("DBItem not valid for %s"), *HitGameItem->Name);
            return;
        }
        if (HitGameItem->DbItem->IsStationary)
        {
            ActionMenu->HoldButton->SetIsEnabled(false);
            ActionMenu->ChangeButtonText(ActionMenu->HoldText, TEXT("Too heavy to grab!"));

            UE_LOG(LogTemp, Display, TEXT("IsStationary is true"));

        }
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton setup falied"));
    }
    

}

void ASPHINX_DevPlayerController::OnHoldButtonClicked()
{
    UE_LOG(LogTemp, Display, TEXT("HoldButton clicked"));
    if (HitGameItem)
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton: HitGameItem is valid"));
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton: HitGameItem is null"));
    }
    if (HitGameItem->IsNPC && !HitNPC)
    {
        UE_LOG(LogTemp, Display, TEXT("HoldButton: HitGameItem->IsNPC && !HitNPC"));
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
        UE_LOG(LogTemp, Display, TEXT("HoldButton: HitGameItem && HitNPC"));
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
        UE_LOG(LogTemp, Display, TEXT("HoldButton: Already holding item"));
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

        if (ActivePlayer)
        {
            ActivePlayer->GetCharacterMovement()->StopMovementImmediately();
            ActivePlayer->LastMovementDirection = FVector::ZeroVector;
            ActivePlayer->DisableInput(this);
            ActivePlayer->EnableInput(this);
        }

        
        FInputModeGameOnly InputMode;
        InputMode.SetConsumeCaptureMouseDown(false); 
        SetInputMode(InputMode);
        ActivePlayer->EnableInput(this);
        bShowMouseCursor = true;

        if (APlayerController* PC = Cast<APlayerController>(this))
        {
            PC->SetIgnoreLookInput(false);
            PC->SetIgnoreMoveInput(false);
        }
        ActionMenuOpen = false;
        HitGameItem = nullptr;
        InventoryManager->HitGameItem = nullptr;
        NPCIsHit = false;
        HitInitNPC = nullptr;
    }
    if (ActivePlayer)
    {
        ActivePlayer->GetCharacterMovement()->Velocity = FVector::ZeroVector;
        UE_LOG(LogTemp, Display, TEXT("Character velocity set to 0"));
    }
    
    
}



void ASPHINX_DevPlayerController::OnInventoryButtonClicked()
{
    if (HitGameItem && InventoryManager && !HitGameItem->IsNPC && HitGameItem->DbItem && !HitGameItem->DbItem->IsStationary)
    {
        if (!HitGameItem->InInventory && InventoryManager->Inventory.Num() <= 16)
        {
            
            if (HitGameItem->GetOwner() == ActivePlayer->HeldGameItem)
            {
                DropGameItem(ActivePlayer->HeldGameItem); //check if error
                ActivePlayer->HeldGameItem = nullptr;
                ActivePlayer->IsHoldingItem = false;
            }
            InventoryManager->AddItemToInventory(HitGameItem);
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
            if (HitGameItem->IsNPC || NPCIsHit)
            {
                ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Leave"));
            }
            if (NPCIsHit)
            {
                UE_LOG(LogTemp, Display, TEXT("NPCIsHit = true (from OnInspect)"));
                if (HitInitNPC)
                {
                    UE_LOG(LogTemp, Display, TEXT("HitInitNPC is valid"));
                    if (HitInitNPC->OwningPP)
                    {
                        UE_LOG(LogTemp, Display, TEXT("HitInitNPC->OwningPP is valid, has %d GoalBPs"), HitInitNPC->OwningPP->PuzzleGoals.Num());
                        if (!HitInitNPC->OwningPP->GoalDialogue.IsEmpty())
                        {
                            UE_LOG(LogTemp, Display, TEXT("GoalDialogue is valid"));
                            DialogueBox->ChangeInspectText(DialogueBox->InspectText, HitInitNPC->OwningPP->GoalDialogue);
                        }
                        else
                        {
                            UE_LOG(LogTemp, Display, TEXT("GoalDialogue is not valid"));
                        }
                    
                    }
                    else
                    {
                        UE_LOG(LogTemp, Display, TEXT("MAINGOAL FROM OWNINGPP IS NOT VALID!!!"));
                    } 
                }
                else
                {
                    UE_LOG(LogTemp, Display, TEXT("Some aspect of NPC check failed in OnInspectButtonClicked"));
                }
            }
            else if (HitGameItem->DbItem)
            {
                DialogueBox->ChangeInspectText(DialogueBox->InspectText, HitGameItem->DbItem->Description);
            }
            
            FSlateColor NewColor = FSlateColor(FLinearColor(0.652479f, 0.662771f, 0.697917f)); 

            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
            ActionMenu->ExitButton->SetIsEnabled(false);

            ActionMenu->HoldText->SetColorAndOpacity(NewColor);
            ActionMenu->HoldButton->SetIsEnabled(false);
            
            ActionMenu->AddText->SetColorAndOpacity(NewColor);
            ActionMenu->InventoryButton->SetIsEnabled(false);

            ActionMenu->ActionText->SetColorAndOpacity(NewColor);
            ActionMenu->ActionButton->SetIsEnabled(false);

            for (int i = 0; i <= ActionMenu->ActionButtons.Num() - 1; i++)
            {
                if (i > 0 && ActionMenu->ActionButtons[i] && ActionMenu->ActionButtons[i]->HasRuleLinked)
                {
                    ActionMenu->ActionButtons[i]->ActionText->SetColorAndOpacity(NewColor);
                    ActionMenu->ActionButtons[i]->SetIsEnabled(false);
                }
            }   
            
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

            if (HitGameItem->IsNPC || NPCIsHit)
            {
                ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Talk"));
            }
            else
            {
                ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Inspect"));
            }

            FSlateColor NewColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f)); 
            
            ActionMenu->ExitText->SetColorAndOpacity(NewColor);
            ActionMenu->ExitButton->SetIsEnabled(true);

            ActionMenu->HoldText->SetColorAndOpacity(NewColor);
            ActionMenu->HoldButton->SetIsEnabled(true);

            if (!HitGameItem->IsNPC)
            {
                ActionMenu->AddText->SetColorAndOpacity(NewColor);
                ActionMenu->InventoryButton->SetIsEnabled(true);
            }
            else if (HitGameItem->IsNPC)
            {
                FSlateColor NewColor1 = FSlateColor(FLinearColor(0.652479f, 0.662771f, 0.697917f)); 
                //ActionMenu->AddText->SetColorAndOpacity(NewColor1);
                ActionMenu->InventoryButton->SetIsEnabled(false);
            }

            ActionMenu->AddText->SetColorAndOpacity(NewColor);
            ActionMenu->InventoryButton->SetIsEnabled(true);

            ActionMenu->ActionText->SetColorAndOpacity(NewColor);
            ActionMenu->ActionButton->SetIsEnabled(true);

            for (int i = 0; i <= ActionMenu->ActionButtons.Num() - 1; i++)
            {
                if (i > 0 && ActionMenu->ActionButtons[i] && ActionMenu->ActionButtons[i]->HasRuleLinked)
                {
                    ActionMenu->ActionButtons[i]->ActionText->SetColorAndOpacity(NewColor);
                    ActionMenu->ActionButtons[i]->SetIsEnabled(true);
                }
            }
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
        if (!HitGameItem->DbItem)
        {
            UE_LOG(LogTemp, Display, TEXT("DBItem not valid for %s"), *HitGameItem->Name);
            return;
        }
        if (HitGameItem->DbItem->IsStationary || HitGameItem->IsNPC)
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
        if (HitGameItem->IsNPC || NPCIsHit)
        {
            ActionMenu->ChangeButtonText(ActionMenu->InspectText, TEXT("Talk"));
        }
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
        for (UPuzzlePoint* PP : PMInstance->AccessiblePPs)
        {
            if (PP)
            {
                if (PP->MainGoal)
                {
                    UE_LOG(LogTemp, Display, TEXT("MainGoal is %s"), *PP->MainGoal->GoalDialogue);
                }
                
            }
        }
    UE_LOG(LogTemp, Display, TEXT("OpenInventory finished"));
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
            UE_LOG(LogTemp, Display, TEXT("ActionMenu is valid"));
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
    UE_LOG(LogTemp, Display, TEXT("SpriteButton clicked"));
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