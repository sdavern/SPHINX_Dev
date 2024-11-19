// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "GameItem.h"
#include "Avatar.h"
#include "Generator.h"
#include "InventoryManager.h"
#include "GamePuzzlePoint.h"
#include "PuzzlePoint.h"
#include "SpawnPoint.h"
#include "SPHINX_DevPlayerController.h"

APuzzleManager* APuzzleManager::Instance = nullptr;

APuzzleManager::APuzzleManager()
{
    PrimaryActorTick.bCanEverTick = true;
    
    
}

void APuzzleManager::BeginPlay()
{
    Super::BeginPlay();
    Instance = GetInstance();

    PuzzlesGeneratedStrings.Empty();
    ItemAssets = LoadItemBPs();
    RuleAssets = LoadRuleBPs();
    PPAssets = LoadPuzzlePointBPs();
    
    ActivateMaxPuzzlePoints();
    ActivateProperties();

    PlayerController = ReturnPC();

    if (Everything != nullptr)
    {
        Everything->SetActorHiddenInGame(false);
        Everything->SetActorEnableCollision(true);
        Everything->SetActorTickEnabled(true);
        //UE_LOG(LogTemp, Display, TEXT("Everything set to Active"));
    }
    
    if (Player != nullptr)
    {
        Player->SetActorHiddenInGame(false);
        Player->SetActorEnableCollision(true);
        Player->SetActorTickEnabled(true);
        //UE_LOG(LogTemp, Display, TEXT("Player set to Active"));
    }
    
    if (Generator != nullptr)
    {
        Generator->SetActorHiddenInGame(false);
        Generator->SetActorEnableCollision(true);
        Generator->SetActorTickEnabled(true);
        //UE_LOG(LogTemp, Display, TEXT("Generator set to Active"));

    }

    if (InventoryManager != nullptr)
    {
        InventoryManager->SetActorHiddenInGame(false);
        InventoryManager->SetActorEnableCollision(true);
        InventoryManager->SetActorTickEnabled(true);
        //UE_LOG(LogTemp, Display, TEXT("Generator set to Active"));

    }
    
    if (StartingInventory != nullptr)
    {
        StartingInventory->SetActorHiddenInGame(false);
        StartingInventory->SetActorEnableCollision(true);
        StartingInventory->SetActorTickEnabled(true);
        //UE_LOG(LogTemp, Display, TEXT("Starting Inventory set to Active"));
    }
   
    AssignPlayer();
    UE_LOG(LogTemp, Warning, TEXT("ItemAssets has %d items on BeginPlay"), ItemAssets.Num());
    InitialisePPPtrs();
    PopulateRulePointers();
    SetupDbItemsOnStart();
}

void APuzzleManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    ActivateMaxPuzzlePoints();
    GenerateForActivePuzzlePoints();
}

void APuzzleManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    Instance = nullptr;  
}

void APuzzleManager::ReturnLeaves()
{
    UE_LOG(LogTemp, Display, TEXT("Leaves is %d"), Leaves.Num());
}

void APuzzleManager::AssignPlayer()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Player"), FoundActors);
    if (FoundActors.Num() > 0)
    {
        AActor* FoundActor = FoundActors[0];
        AAvatar* Avatar = Cast<AAvatar>(FoundActor);
        if (Avatar)
        {
            Player = Avatar;
        }
    }
}

void APuzzleManager::ActivateMaxPuzzlePoints()
{
    int SafetyCounter = 0;
    while (ActivePPs < MaxActivePuzzles)
    {
        TArray<AGamePuzzlePoint*> PPsInWorld = GetPPsInWorld();
        for (AGamePuzzlePoint* GPP : PPsInWorld)
        {
            if (!GPP->IsActive)
            {
                UE_LOG(LogTemp, Warning, TEXT("PP %s is in world and is not active"), *GPP->Name);
            }
        }
        int32 RandomInt = FMath::RandRange(0, PPsInWorld.Num() - 1);
        AGamePuzzlePoint* RandPP = PPsInWorld[RandomInt];
        RandPP->PuzzlePointPtr = RandPP->PPToPtr();
        if (RandPP->PuzzlePointPtr)
        {
            UE_LOG(LogTemp, Error, TEXT("PuzzlePointPtr is valid for %s and %s"), *RandPP->Name, *RandPP->PuzzlePointPtr->Name);
        }
        if (RandPP != nullptr && !RandPP->IsActive && !RandPP->InitSpawned && RandPP->PuzzlePointPtr)
        {
            ActivatePuzzlePoint(RandPP);
            ActivePuzzlePoints.Add(RandPP);
            AccessiblePPs.Add(RandPP->PuzzlePointPtr);
            ++ActivePPs;
            UE_LOG(LogTemp, Error, TEXT("MAX PUZZLEPOINTS ACTIVATED"));
        }
        SafetyCounter++;
        if (SafetyCounter > MaxActivePuzzles)
        {
            UE_LOG(LogTemp, Display, TEXT("Safety Counter for PuzzlePoint Activation triggered"));
            RandPP = nullptr;
            PPsInWorld.Empty();
            break;
        }
    }
}

void APuzzleManager::DeactivatePuzzlePoint(AGamePuzzlePoint* PP)
{
    if (PP != nullptr)
    {
        PP->IsActive = false;
        PP->DespawnInit();
        PP->InitSpawned = false;
        PP->HasPuzzle = false;
        --ActivePPs;
        ActivePuzzlePoints.Remove(PP);
        AccessiblePPs.Remove(PP->PuzzlePointPtr);
        PP->PuzzlePointPtr->GoalDialogue.Empty();
        UE_LOG(LogTemp, Display, TEXT("PuzzlePoint deactivated"));
        //may need to remove rule and pp from tmap
    }
    
}

APuzzleManager* APuzzleManager::GetInstance()
{
    if (!Instance)
    {
        // Iterate over all world contexts to find the game world
        for (const FWorldContext& Context : GEngine->GetWorldContexts())
        {
            if (Context.World() != nullptr)
            {
                for (TActorIterator<APuzzleManager> It(Context.World()); It; ++It)
                {
                    Instance = *It;
                    break;
                }
            }
        }

        if (!Instance)
        {
            UE_LOG(LogTemp, Error, TEXT("PuzzleManager instance not found in GetInstance."));
        }
    }
    UE_LOG(LogTemp, Display, TEXT("Puzzle Manager instance found."));
    return Instance;
    
}

void APuzzleManager::GenerateForActivePuzzlePoints()
{
    //need to delay this
    int SafetyCounter = 0;

    while (ActiveGeneratedPuzzles < MaxActivePuzzles)
    {
        UE_LOG(LogTemp, Error, TEXT("ATTEMPTING TO GENERATE PUZZLES, PuzzlePointPtrs has %d ptrs"), PuzzlePointPtrs.Num());

        for (UPuzzlePoint* PP : PuzzlePointPtrs)
        {
            //UE_LOG(LogTemp, Error, TEXT("CHECKING IF PP IS NOT NULL"));
            AGamePuzzlePoint* OwningGPP = nullptr;
            for (TActorIterator<AGamePuzzlePoint> It(PP->GetWorld()); It; ++It)
            {
                //UE_LOG(LogTemp, Display, TEXT("Iterating through GamePuzzlePoints"));
                AGamePuzzlePoint* GPP = *It;
                //UE_LOG(LogTemp, Display, TEXT("PP name: %s, GPP name: %s"), *PP->Name, *GPP->Name);
                if (GPP && GPP->Name == PP->Name)  
                {
                    GPP->PuzzlePointPtr = nullptr;
                    GPP->PuzzlePointPtr = PP;
                    OwningGPP = GPP;
                    //UE_LOG(LogTemp, Display, TEXT("OwningGPP = GPP"));
                    break;
                }
            }       
       

            if (PP && OwningGPP && OwningGPP->IsActive && AccessiblePPs[0] && !OwningGPP->HasPuzzle) //need to add && OwningGPP->IsActive !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            {
                URule* Root = Generator->GeneratePuzzleStartingFrom(PP, AccessiblePPs, 0);
                if (Root)
                {
                    //UE_LOG(LogTemp, Error, TEXT("Root is VALID"));
                    UE_LOG(LogTemp, Error, TEXT("ROOT is %s"), *Root->Action);	
                    UE_LOG(LogTemp, Display, TEXT("PP is %s"), *PP->Name);
                    FRulesStruct NewRules;
                    Leaves.Add(PP, NewRules);
                    //PuzzleRules.Add(PP, NewRules);
                    FindLeaves(Root, PP);
                    UE_LOG(LogTemp, Error, TEXT("RULES ADDED"));

                    FRulesStruct* LeavesRulesStruct = Leaves.Find(PP);
                    if (LeavesRulesStruct != nullptr)
                    {
                        for (URule* Rule : LeavesRulesStruct->RulesArray)
                        {
                            if (Rule)
                            {
                                //Rule->ToInputsPtr();
	                            //Rule->ToOutputsPtr();
	                            //Rule->GetDbItems();
                                RulePPs.Add(Rule->ToPMString(), PP);
                                Rule->OwningPP = PP;
                                UE_LOG(LogTemp, Error, TEXT("RULE %s ASSIGNED TO PP %s"), *Rule->Action, *PP->Name);
                                UE_LOG(LogTemp, Error, TEXT("Leaves size is %d"), Leaves.Num());
                            }
                        }
                    }
            

                    /* FRulesStruct* PuzzleRulesStruct = PuzzleRules.Find(PP);
                    if (PuzzleRulesStruct != nullptr)
                    {
                        for (URule* Rule : PuzzleRulesStruct->RulesArray)
                        {
                            if (Rule)
                            {
                                //Rule->ToInputsPtr();
	                            //Rule->ToOutputsPtr();
	                            //Rule->GetDbItems();
                                RulePPs.Add(Rule->ToPMString(), PP);
                                Rule->OwningPP = PP;
                            }
                        }
                    } */

                   
                    OwningGPP->HasPuzzle = true; 
                    if (OwningGPP->InitNPC != nullptr)
                    {
                        OwningGPP->InitNPC->OwningPP = PP;
                        UE_LOG(LogTemp, Error, TEXT("OwningGPP has set OwningPP for InitNPC"));
                        OwningGPP->InitialiseInitNPC();
                    }
                    else
                    {
                        UE_LOG(LogTemp, Display, TEXT("PM: OwningGPP->InitNPC is not valid"));
                    }

                    ++ActiveGeneratedPuzzles;
                    if (ActiveGeneratedPuzzles >= MaxActivePuzzles)
                    {
                        return;
                    }
                }
                else 
                {
                    UE_LOG(LogTemp, Error, TEXT("Root is null"));
                }
            
            
            }
            
        }
        SafetyCounter++;
        if (SafetyCounter > 1)
        {
            UE_LOG(LogTemp, Display, TEXT("Safety Counter triggered, there are %d active puzzle points in ActivePPs but there are %d in ActivePuzzlePoints"), ActivePPs, ActivePuzzlePoints.Num());
            for (AGamePuzzlePoint* GPP : ActivePuzzlePoints)
            {
                UE_LOG(LogTemp, Display, TEXT("PP %s is Active"), *GPP->Name);
            }
            break;
        }
    }
}

TArray<URule*> APuzzleManager::RulesFor(UGameItem* GameItem)
{
    TArray<URule*> Rules;
    TArray<URule*> DbRules;
    UE_LOG(LogTemp, Warning, TEXT("Total Puzzle Points in Leaves: %d"), Leaves.Num());

    if (Leaves.Num() == 0) 
    {
        UE_LOG(LogTemp, Error, TEXT("Leaves map is empty."));
        return Rules;
    }

    /* for (TPair<UPuzzlePoint*, FRulesStruct>& Pair : Leaves)
    {
        FRulesStruct* FoundLeavesRules = &Pair.Value;
        UE_LOG(LogTemp, Warning, TEXT("RulesArray size for PP %p is %d"), Pair.Key, FoundLeavesRules->RulesArray.Num());
        UPuzzlePoint* PP = Pair.Key;
        if (PP)
        {
            UE_LOG(LogTemp, Warning, TEXT("PP in RulesFor is valid"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PP in RulesFor is null"));
            continue;
        } */
    for (TPair<UPuzzlePoint*, FRulesStruct>& Pair : Leaves)
    {
        FRulesStruct* FoundLeavesRules = &Pair.Value;
        //UE_LOG(LogTemp, Warning, TEXT("RulesArray size for PP %p is %d"), Pair.Key, FoundLeavesRules->RulesArray.Num());
        UPuzzlePoint* PP = Pair.Key;
        if (PP)
        {
            //UE_LOG(LogTemp, Warning, TEXT("PP in RulesFor is valid"));
        }
        else
        {
            //UE_LOG(LogTemp, Warning, TEXT("PP in RulesFor is null"));
            continue;
        }


        
        if (FoundLeavesRules)
        {
            if (FoundLeavesRules->RulesArray.Num() > 0)
            {
                for (URule* Rule: FoundLeavesRules->RulesArray) 
                {
                    if (IsValid(Rule) && Rule && Rule->Inputs.Num() > 0)
                    {
                        UE_LOG(LogTemp, Warning, TEXT("Rule %s passed to AddApplicableRule from RulesFor"), *Rule->Action);
                        AddApplicableRule(Rule, GameItem, Rules);
                        Rules.Add(Rule);
                        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Rule added from RulesFor: %s"), *Rule->Action));
                    }    
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("RulesFor called but no rules found"));
                    } 
                }
            }
            else
            {
                UE_LOG(LogTemp, Display, TEXT("FoundLeavesRules->RulesArray.Num() is 0"));
            }
            
            //UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in RulesFor is valid and is %s"), *FoundLeavesRules->RulesArray[1]->Action);
           
        }    
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in RulesFor is null"));
            //RulesFor(GameItem);
            continue;
        }
        
    }
    
    /* if (GameItem && GameItem->DbItem)
    {
        DbRules = GetRulesWithInput(GameItem->DbItem);
    }
     
    if (DbRules.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("DbRules in RulesFor is 0"));
        return DbRules;
    }

    for (int i  = DbRules.Num() - 1; i >= 0; i--)
    {
        if (DbRules.IsValidIndex(i) && DbRules[i]->Inputs.Num() > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("DbRules[%d]->Inputs[0] is %s, GameItem is %s"), i, *DbRules[i]->Inputs[0]->Name, *GameItem->Name);
            DbRules[i]->Inputs[0]->GameItem = GameItem; //Incorrect GameItem is being set here
            if (FindItemsForOutputs(DbRules[i]) && !Rules.Contains(DbRules[i]))
            {
                UE_LOG(LogTemp, Display, TEXT("%s added to Rules in RulesFor"), *DbRules[i]->ToString());
                Rules.Add(DbRules[i]);
            }
        }
    }   */
    if (Rules.Num() > 0)
    {
        UE_LOG(LogTemp, Display, TEXT("Returning Rules with %s"), *Rules[0]->Action);
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("No rules found for the given GameItem"));
    }
    
    return Rules;
}

UItem* APuzzleManager::GetObject(FString ItemName)
{
    //UE_LOG(LogTemp, Display, TEXT("Searching for DbItem with name: %s"), *ItemName);
    for (TSubclassOf<UItem> ItemClass : ItemAssets)
    {
        UItem* NewItem = NewObject<UItem>(this, ItemClass);
        if (NewItem && NewItem->Name == ItemName)
        {
            //UE_LOG(LogTemp, Error, TEXT("NewItem that has been created has the name: %s"), *NewItem->Name);
            return NewItem; // Return the newly created item if it matches the requested name.
        }

    }

    UE_LOG(LogTemp, Error, TEXT("GetObject called with Name: %s. No Item found."), *ItemName);
    return nullptr; // Return nullptr if no matching item is found.
}

void APuzzleManager::AddApplicableRule(URule* Rule, UGameItem* GameItem, TArray<URule*> Rules)
{
    //UE_LOG(LogTemp, Display, TEXT("AddApplicableRule: %s is Rule. %s is GameItem. Rule has %d inputs"), *Rule->ToString(), *GameItem->Name, Rule->Inputs.Num());
    if (Rule && Rule->Inputs.Num() > 0 && Rule->Inputs[0] != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("Rule->Inputs[0] is %s and GameItem is %s"), *Rule->Inputs[0]->Name, *GameItem->Name);
        if (Rule->Inputs[0]->Name == GameItem->Name)
        {
            if (!Rules.Contains(Rule))
            {
                //UE_LOG(LogTemp, Display, TEXT("Found: %s %s"), *GameItem->Name, *Rule->Action);
                Rule->Inputs[0]->GameItem = GameItem;
                //UE_LOG(LogTemp, Error, TEXT("GameItem is %s"), *GameItem->Name);

                Rules.Add(Rule);
                UE_LOG(LogTemp, Display, TEXT("Rule %s should be added to Rules in AddApplicableRule, Rules has %d rules in it"), *Rule->ToString(), Rules.Num());
            }
            else
            {
                UE_LOG(LogTemp, Display, TEXT("Input[0] in AddApplicableRule !Contain Rule"));
            }
        }
        else
        {
            //UE_LOG(LogTemp, Display, TEXT("Rule->Inputs[0] %s does not equal GameItem %s"), *Rule->Inputs[0]->Name, *GameItem->Name);
            //UE_LOG(LogTemp, Display, TEXT("Rules in AddApplicableRule has %d rules"), Rules.Num());
        }
    }
    else if (Rule->Inputs[1] && Rule->Inputs[1]->Name == GameItem->Name)
    {
        UE_LOG(LogTemp, Display, TEXT("Rule->Inputs[1] is %s and GameItem is %s"), *Rule->Inputs[1]->Name, *GameItem->Name);
        if (!Rules.Contains(Rule))
        {
            UE_LOG(LogTemp, Display, TEXT("Found: %s %s"), *GameItem->Name, *Rule->Action);
            Rule->Inputs[1]->GameItem = GameItem;
            UE_LOG(LogTemp, Error, TEXT("GameItem is %s"), *GameItem->Name);

            Rules.Add(Rule);
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("Input[1] in AddApplicableRule !Contain Rule"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("Inputs in AddApplicableRule are null"));
    }
}

void APuzzleManager::ExecuteRule(URule* Rule)
{
    UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: PMInstance->ExecuteRule called"));
    UWorld* World = GetWorld();
    UPuzzlePoint* FoundPP = nullptr;
    UPuzzlePoint** FoundPuzzlePoint = RulePPs.Find(Rule->ToPMString()); 
    if (FoundPuzzlePoint)
    {
        FoundPP = *FoundPuzzlePoint;
    }

    AGamePuzzlePoint* OwningGPP = nullptr;
    if (FoundPP)
    {
        UE_LOG(LogTemp, Error, TEXT("EXECUTERULE: FoundPP %s is valid for Rule %s"), *FoundPP->Name, *Rule->Action);
    }
    for (TActorIterator<AGamePuzzlePoint> It(World); It; ++It)
    {
        AGamePuzzlePoint* GPP = *It;
        if (GPP && FoundPP)
        {
            if (GPP && GPP->Name == FoundPP->Name)  
            {
                OwningGPP = GPP;
                UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: OwningGPP = GPP"));
                break;
            }
        }
        
    } 

    FRulesStruct* FoundLeavesRules = Leaves.Find(FoundPP);
    if (FoundLeavesRules)
    {
        UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: Main Rule is %s"), *Rule->Action);
        for (URule* FRule : FoundLeavesRules->RulesArray)
        {
            UE_LOG(LogTemp, Error, TEXT("EXECUTERULE: Rule %s is in RulesArray"), *FRule->Action);
        }
    }
    
    FString RuleString = Rule->ToPMString();

    UE_LOG(LogTemp, Display, TEXT("%s"), *RuleString);

    for (URule* SRule : FoundLeavesRules->RulesArray)
    {
        if (SRule)
        {
            UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: %s has %d inputs and %d outputs"), *SRule->ToPMString(), SRule->Inputs.Num(), SRule->Outputs.Num());
            if (RuleString == SRule->ToPMString())
            {
                Rule = SRule;
                TArray<URule*> RulesToRemove;
                for (URule* ARule : FoundLeavesRules->RulesArray)
                {
                    if (Rule->ToPMString() == ARule->ToPMString())
                    {
                        RulesToRemove.Add(ARule);
                    } 
                }

                for (URule* BRule : RulesToRemove)
                {
                    if (BRule)
                    {
                        FoundLeavesRules->RulesArray.Remove(BRule);
                    }
                }

                if (FoundLeavesRules->RulesArray.Num() <= 1)
                {
                    UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: Puzzle for PP: %s completed!"), *FoundPP->Name);
                    ++CompletedPuzzles;
                    if (PuzzleTracker)
                    {
                        PuzzleTracker->UpdateText(CompletedPuzzles); //need to expose to BPs
                    }
                    if (SolvedSoundCue)
                    {
                        FVector Location = FVector(0.0f, 0.0f, 0.0f);
                        UGameplayStatics::PlaySoundAtLocation(this, SolvedSoundCue, Location);
                    }
                    if (PlayerController)
                    {
                        if (Player->IsHoldingItem)
                        {
                            if (Player->HeldGameItem)
                            {
                                PlayerController->DropGameItem(Player->HeldGameItem);
                            }
                            if (PlayerController->ActionMenu)
                            {
                                PlayerController->OnExitButtonClicked();
                            }
                        }
                        else
                        {
                            PlayerController->OnExitButtonClicked();
                        }
                    }    
                    if (OwningGPP) //implement thanks dialogue and NPC despawning here
                    {
                        GPPToFind = OwningGPP;
                        RuleToFind = Rule;

                        PlayerController->DialogueBox = CreateWidget<UDialogueBox>(PlayerController, PlayerController->DialogueBoxClass);
                        if (PlayerController->DialogueBox)
                        {
                            PlayerController->DialogueBox->AddToViewport(0);
                            PlayerController->DialogueBox->SetVisibility(ESlateVisibility::Visible);
                            PlayerController->DialogueBox->ChangeInspectText(PlayerController->DialogueBox->InspectText, OwningGPP->PuzzlePointPtr->MainGoal->ThanksDialogue);
                            FTimerDelegate TimerDel;
			                TimerDel.BindUFunction(this, FName("DestroyDialogue"), PlayerController->DialogueBox);
			                FTimerHandle TimerHandle;
			                GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, 5.0f, false);
                        }

                        if (!IsGPPInViewport())
                        {
                            UE_LOG(LogTemp, Display, TEXT("OwningGPP is valid"));
                            DeactivatePuzzlePoint(OwningGPP);
                            RulePPs.Remove(Rule->ToPMString());
                            --ActiveGeneratedPuzzles;
                            GPPToFind = nullptr;
                            RuleToFind = nullptr;
                            UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: ActiveGeneratedPuzzles is %d"), ActiveGeneratedPuzzles);
                        }
                        else
                        {
                            FTimerDelegate TimerDel;
			                TimerDel.BindUFunction(this, FName("RetryIsGPPInViewPort"), OwningGPP);
			                FTimerHandle TimerHandle;
			                GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, 5.0f, false);
                        }
                    }
                    break;
                }
                else
                {
                    if (SolvedSoundCue)
                    {
                        FVector Location = FVector(0.0f, 0.0f, 0.0f);
                        UGameplayStatics::PlaySoundAtLocation(this, SolvedSoundCue, Location);
                    }
                    if (PlayerController)
                    {
                        if (Player->IsHoldingItem)
                        {
                            if (Player->HeldGameItem)
                            {
                                PlayerController->DropGameItem(Player->HeldGameItem);
                            }
                            if (PlayerController->ActionMenu)
                            {
                                PlayerController->OnExitButtonClicked();
                            }
                        }
                        else
                        {
                            PlayerController->OnExitButtonClicked();
                        }
                    }
                    UE_LOG(LogTemp, Display, TEXT("EXECUTERULE: PUZZLE STILL HAS RULES LEFT!!!"));
                }
            }
        }       
    } 
}

void APuzzleManager::DestroyDialogue()
{
    if (PlayerController->DialogueBox)
    {
        PlayerController->DialogueBox->RemoveFromParent();
        PlayerController->DialogueBox = nullptr;
    }
}

void APuzzleManager::FindLeaves(URule* Parent, UPuzzlePoint* PP)
{
    if (Parent->Children.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Rule %s has no children"), *Parent->ToString());
        Leaves.FindOrAdd(PP).RulesArray.Add(Parent);
        UE_LOG(LogTemp, Display, TEXT("Rule added to RulesArray %s"), *Parent->Action);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Rule %s has %d children"), *Parent->ToString(), Parent->Children.Num());
        for (URule* Child : Parent->Children)
        {
            if (Child)
            {
                UE_LOG(LogTemp, Display, TEXT("%s is a child of %s"), *Child->ToString(), *Parent->ToString());
            }
        }
        FRulesStruct* FoundRulesStruct = Leaves.Find(PP);
        if (FoundRulesStruct && !FoundRulesStruct->RulesArray.Contains(Parent))
        {
            FoundRulesStruct->RulesArray.Add(Parent);
            UE_LOG(LogTemp, Display, TEXT("Rule added to RulesArray %s"), *Parent->Action);
        }
        for (URule* Child : Parent->Children)
        {
            if (Child != nullptr)
            {
                FindLeaves(Child, PP);
            }
        }
    }
}

bool APuzzleManager::FindItemsForOutputs(URule* Rule)
{
    for (UTerm* Output : Rule->Outputs)
    {
        bool Found = false;
        for (UTerm* Input : Rule->Inputs)
        {
            if (Input != nullptr && Output->Name == Input->Name)
            {
                Found = true;
            }
        }
        if (!Found)
        {
            TArray<UPuzzlePoint*> PPArray;
            TArray<UItem*> ItemArray;
            TArray<UItem*> PossibleItems = FindDbItemsFor(Output, PPArray, ItemArray);
            if (PossibleItems.Num() > 0)
            {
                int32 RandomIndex = FMath::RandRange(0, PossibleItems.Num() - 1);
                Output->DbItem = PossibleItems[RandomIndex];
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

void APuzzleManager::AddPuzzle(UPuzzlePoint* PP, FString Puzzle)
{
    PuzzlesGenerated.Add(PP, Puzzle);
    PuzzlesGeneratedStrings.Add(Puzzle);
    UE_LOG(LogTemp, Error, TEXT("Puzzle added to PuzzlesGenerated: %s"), *Puzzle);
}

bool APuzzleManager::HasItemOfType(UTerm* Term, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel)
{
    for (TSubclassOf<UItem> DbItem : ItemAssets)
    {
        if (DbItem != nullptr)
        {
            UItem* DbItemPtr = NewObject<UItem>(this, DbItem);
            if (DbItemPtr && (DbItemPtr->Name == Term->Name || DbItemPtr->GetSuperTypes().Contains(Term->Name)) && DbItemPtr->IsAccessible(NewAccessiblePPs, ItemsInLevel))
            {
                return true;
            }
        }
    }
    return false;
}

TArray<UItem*> APuzzleManager::GetItemsOfType(FString ItemName, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> MatchingItems;
    for (TSubclassOf<UItem> DbItem : ItemAssets)
    {
        if (DbItem != nullptr)
        {
            UItem* DbItemPtr = NewObject<UItem>(this, DbItem);

            if (DbItemPtr && DbItemPtr->Name == ItemName || DbItemPtr->GetSuperTypes().Contains(ItemName))
            {
                MatchingItems.Add(DbItemPtr);
            }
        }
    }
    return MatchingItems;
}

TArray<UItem*> APuzzleManager::FindDbItemsFor(UTerm* Term, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel)
{
    UE_LOG(LogTemp, Warning, TEXT("FindDbItemsFor called and AllItems has %d items"), AllItems.Num());
    //UE_LOG(LogTemp, Display, TEXT("AllItems[0] is %s and has %d properties: %s %s"), *AllItems[0]->Name, AllItems[0]->Properties.Num(), *AllItems[0]->Properties[0]->Name, *AllItems[0]->Properties[0]->Value);
    
    TArray<UItem*> MatchingItems;
    for (UItem* DbItem : AllItems)
    {
        if (DbItem && DbItem->Matches(Term))
        {
            UE_LOG(LogTemp, Display, TEXT("DbItem: '%s' matches term '%s'"), *DbItem->Name, *Term->Name);
        }
        else
        {
            //UE_LOG(LogTemp, Display, TEXT("DbItem: '%s'  does not match term '%s'"), *DbItem->Name, *Term->Name);
        }
        
        if (DbItem && DbItem->Matches(Term) && DbItem->IsAccessible(AccessiblePPs, ItemsInLevel))
        {
            MatchingItems.Add(DbItem);
            UE_LOG(LogTemp, Warning, TEXT("DbItem %s is valid and matches so it should work!!!!!!!!!!!!!!!!!!!!!!!!!!!"), *DbItem->Name);
        }
    }
    
    /* TArray<UItem*> NAllItems = GetAllItems();

    for (UItem* DbItem : NAllItems)
    {
        if (DbItem && DbItem->Matches(Term) && DbItem->IsAccessible(AccessiblePPs, ItemsInLevel))
        {
            MatchingItems.Add(DbItem);
            UE_LOG(LogTemp, Warning, TEXT("DbItem %s added to MatchingItems"), *DbItem->Name);
        }
    } */
    return MatchingItems;
}

TArray<URule*> APuzzleManager::GetRulesWithInput(UItem* DbItem)
{
    TArray<URule*> Rules;
    if (!DbItem)
    {
        UE_LOG(LogTemp, Display, TEXT("DbItem in GetRulesWithInput is null"));
        return Rules;
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("DbItem in GetRulesWithInput is not null and is %s"), *DbItem->Name);
        DbItem->ToPropPtrs();
    }

    for (URule* RuleToCheck : RulePointers)
    {
        if (RuleToCheck && RuleToCheck->Inputs.Num() > 0 && DbItem)
        {
            for (UTerm* Input : RuleToCheck->Inputs)
            {
                if (Input != nullptr && DbItem != nullptr) 
                {
                    const TArray<FString>& SuperTypes = DbItem->GetSuperTypes();
                    if (Input->Name == DbItem->Name || (SuperTypes.Num() > 0 && SuperTypes.Contains(Input->Name)))
                    {
                        Rules.Add(RuleToCheck);
                        break;
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Display, TEXT("Input in GetRulesWithInput is null"));
                }

                for (UItemProperty* DbItemProp : DbItem->Properties)
                {
                    if (DbItemProp && Input)
                    {
                        UE_LOG(LogTemp, Display, TEXT("DbItem: %s has prop %s %s"), *DbItem->Name, *DbItemProp->Name, *DbItemProp->Value);
                        for (UItemProperty* InputProp : Input->Properties)
                        {
                            if (InputProp)
                            {
                                UE_LOG(LogTemp, Display, TEXT("Input: %s has prop %s %s"), *Input->Name, *InputProp->Name, *InputProp->Value);
                                if (DbItemProp->Name == InputProp->Name && DbItemProp->Value == InputProp->Value)
                                {
                                    UE_LOG(LogTemp, Display, TEXT("Adding rule %s to Rules in GetRulesWithInput"), *RuleToCheck->ToString());
                                    Rules.Add(RuleToCheck);
                                    break;
                                }
                            }
                        }
                    }
                } 
            }
            
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("Something, probs DbItem is wrong"));
        } 
    }
    return Rules;
}

TArray<URule*> APuzzleManager::GetRulesWithOutput(UTerm* Term)
{
    TArray<URule*> Rules;
    UE_LOG(LogTemp, Display, TEXT("GetRulesWithOutput - term: %s"), *Term->GetTermAsString());
    for (int32 i = 0; i < RuleAssets.Num(); i++)
    {
        if (RuleAssets[i] != nullptr)
        {
            URule* RuleToAdd = NewObject<URule>(this, RuleAssets[i]);
            RuleToAdd->ToOutputsPtr();

            if (RuleToAdd && RuleToAdd->Outputs.Num() > 0 && RuleToAdd->Outputs[0]->Name == Term->Name && RuleToAdd->Outputs[0] != nullptr)
            {
                Rules.Add(RuleToAdd);
            }
        }
    }
    return Rules;
}

TArray<UItem*> APuzzleManager::GetAllItems()
{
    TArray<UItem*> Objects;
    for (TSubclassOf<UItem> AssetClass : ItemAssets)
    {
        if (AssetClass != nullptr)
        {
            UItem* NewItem = NewObject<UItem>(this, AssetClass);
            if (NewItem)
            {
                Objects.Add(NewItem);
            }
        }
    }
    return Objects;
}

TArray<URule*> APuzzleManager::GetAllRules()
{
    TArray<URule*> Objects;
    for (TSubclassOf<URule> AssetClass : RuleAssets)
    {
        if (AssetClass != nullptr)
        {
            URule* NewRule = NewObject<URule>(this, AssetClass);
            if (NewRule)
            {
                Objects.Add(NewRule);
            }
        }
    }
    return Objects;
}



TArray<UPuzzlePoint*> APuzzleManager::GetAllPPs()
{
    TArray<UPuzzlePoint*> Objects;
    for (TSubclassOf<UPuzzlePoint> AssetClass : PPAssets)
    {
        if (AssetClass != nullptr)
        {
            UPuzzlePoint* NewPP = NewObject<UPuzzlePoint>(this, AssetClass);
            if (NewPP)
            {
                Objects.Add(NewPP);
            }
        }
    }
    return Objects;
}


void APuzzleManager::UpdatePlayerProperties(UItemProperty* Property)
{
    if (GetPlayer()->GetProperty(Property->Name) != nullptr)
    {
        GetPlayer()->GetProperty(Property->Name)->Value = Property->Value;
    }
    else
    {
        GetPlayer()->Properties.Add(Property);
    }
}


UGameItem* APuzzleManager::GetPlayer()
{
    if (Player != nullptr)
    {

        return Player->GameItem;
    }
    return nullptr;
}

bool APuzzleManager::PuzzleContains(UItem* Item, URule* Parent)
{
    if (Parent->ContainsItem(Item))
    {
        return true;
    }
    if (Parent->Children.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("Rule %s has no children."), *Parent->ToString());
        return false;
    }
    else
    {
        for (URule* Child : Parent->Children)
        {
            if (PuzzleContains(Item, Child))
            {
                return true;
            }
        }
    }
    return false;
}

FString APuzzleManager::GetHint()
{
    if (CurrentArea != nullptr)
    {
        return CurrentArea->GetHint();
    }
    return FString();
}

FString APuzzleManager::GetObjective()
{
    if (CurrentArea != nullptr)
    {
        return CurrentArea->GetObjective();
    }
    return FString();
}

FString APuzzleManager::GetCurrentAreaName()
{
    if (CurrentArea != nullptr)
    {
        return CurrentArea->Name;
    }
    return FString();
}

UArea* APuzzleManager::GetCurrentArea()
{
    if (CurrentArea != nullptr)
    {
        return CurrentArea;
    }   
    return nullptr;
}

void APuzzleManager::TriggerEnd()
{
    if (FinalFade != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("Final Fade Triggered"));
        FinalFade->SetActorHiddenInGame(false);
        FinalFade->SetActorEnableCollision(true);
        FinalFade->SetActorTickEnabled(true);
    }    
}




TArray<TSubclassOf<UPuzzlePoint>> APuzzleManager::LoadPuzzlePointBPs()
{
    TArray<TSubclassOf<UPuzzlePoint>> LoadedPPClasses;

    // Initialize the Asset Registry Module
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    FARFilter Filter;
    Filter.bRecursivePaths = true;
    Filter.PackagePaths.Add("/Game/Resources/PuzzlePoints/PuzzlePointsBPs");
    Filter.ClassPaths.Add(UBlueprint::StaticClass()->GetClassPathName());

    // Query the Asset Registry
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);
    UE_LOG(LogTemp, Warning, TEXT("Found %d PP assets."), AssetData.Num());

    // Load each asset class
    for (const FAssetData& Asset : AssetData)
    {
        UE_LOG(LogTemp, Display, TEXT("PPAssets has %d assets in for loop"), AssetData.Num());
        // Get the generated class from the blueprint asset
        const FString GeneratedClassPath = Asset.GetTagValueRef<FString>(FName("GeneratedClass"));
        if (!GeneratedClassPath.IsEmpty())
        {
            UClass* AssetClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *GeneratedClassPath));
            if (AssetClass && AssetClass->IsChildOf(UPuzzlePoint::StaticClass()))
            {
                LoadedPPClasses.Add(AssetClass);
                UE_LOG(LogTemp, Display, TEXT("PuzzlePoint '%s' loaded from database and added to PPAssets."), *AssetClass->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Display, TEXT("PuzzlePoint not added to PPAssets"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("Generated Class path is empty"));
        }
    }

    PPLoaded = true;
    return LoadedPPClasses;
    
}

TArray<TSubclassOf<UItem>> APuzzleManager::LoadItemBPs()
{
    TArray<TSubclassOf<UItem>> LoadedItemClasses;

    // Initialize the Asset Registry Module
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    FARFilter Filter;
    Filter.bRecursivePaths = true;
    Filter.PackagePaths.Add("/Game/Resources/Items");

    // Query the Asset Registry
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);
    UE_LOG(LogTemp, Warning, TEXT("Found %d ITEM assets."), AssetData.Num());

    // Load each asset class
    for (const FAssetData& Asset : AssetData)
    {
        // Get the generated class from the blueprint asset
        const FString GeneratedClassPath = Asset.GetTagValueRef<FString>(FName("GeneratedClass"));
        if (!GeneratedClassPath.IsEmpty())
        {
            UClass* AssetClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *GeneratedClassPath));
            if (AssetClass && AssetClass->IsChildOf(UItem::StaticClass()))
            {
                LoadedItemClasses.Add(AssetClass);
                if (LoadedItemClasses.Contains(AssetClass))   
                {
                    UE_LOG(LogTemp, Display, TEXT("Item '%s' loaded from database."), *AssetClass->GetName());
                }
            }
        }
    }
  /*   UE_LOG(LogTemp, Display, TEXT("Broadcasting OnDatabaseLoaded."));
    OnDatabaseLoaded.Broadcast(); */
    ItemsLoaded = true;
    

    return LoadedItemClasses;
    
}

TArray<TSubclassOf<URule>> APuzzleManager::LoadRuleBPs()
{
    TArray<TSubclassOf<URule>> LoadedRuleClasses;

    // Initialize the Asset Registry Module
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    FARFilter Filter;
    Filter.bRecursivePaths = true;
    Filter.PackagePaths.Add("/Game/Resources/Rules");

    // Query the Asset Registry
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);
    UE_LOG(LogTemp, Warning, TEXT("Found %d RULE assets."), AssetData.Num());

    // Load each asset class
    for (const FAssetData& Asset : AssetData)
    {
        // Get the generated class from the blueprint asset
        const FString GeneratedClassPath = Asset.GetTagValueRef<FString>(FName("GeneratedClass"));
        if (!GeneratedClassPath.IsEmpty())
        {
            UClass* AssetClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *GeneratedClassPath));
            if (AssetClass && AssetClass->IsChildOf(URule::StaticClass()))
            {
                LoadedRuleClasses.Add(AssetClass);
                UE_LOG(LogTemp, Display, TEXT("Rule '%s' loaded from database."), *AssetClass->GetName());
            }
        }
    }

    RulesLoaded = true;
    return LoadedRuleClasses;
    
}

TArray<UItem*> APuzzleManager::GetItemsInWorld()
{
    UWorld* World = GetWorld();
    TArray<UItem*> ItemsInWorld;

    if (World != nullptr)
    {
        for (TActorIterator<AActor> It(World); It; ++It)
        {
            AActor* Actor = *It;
            UGameItem* GameItem = Actor->FindComponentByClass<UGameItem>();
            if (GameItem != nullptr && GameItem->DbItem != nullptr)
            {
                ItemsInWorld.Add(GameItem->DbItem);
            }
        }
    }
    return ItemsInWorld;
}

TArray<UGameItem*> APuzzleManager::GetGameItemsInWorld()
{
    UWorld* World = GetWorld();
    TArray<UGameItem*> GameItemsInWorld;
    if (World != nullptr)
    {
        for (TActorIterator<AActor> It(World); It; ++It)
        {
            AActor* Actor = *It;
            UGameItem* GameItem = Actor->FindComponentByClass<UGameItem>();
            if (GameItem != nullptr)
            {
                GameItemsInWorld.Add(GameItem);
            }
        }
    }
    return GameItemsInWorld;
}

bool APuzzleManager::CheckIfPuzzleToBeGenerated()
{
    if (ActivePPs >= MaxActivePuzzles + 1)
    {
        return false;
    }

    //For demo only
    else if (CompletedPuzzles >= MaxPuzzles)
    {
        return false;
    }

    else
    {
        return true;
    }
}

void APuzzleManager::ActivatePuzzlePoint(AGamePuzzlePoint* PP)
{
    PP->IsActive = true;
    if (PP->IsActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s activated"), *PP->Name);
    }
    
}

TArray<AGamePuzzlePoint*> APuzzleManager::GetPPsInWorld()
{
    UWorld* World = GetWorld();
    TArray<AGamePuzzlePoint*> PPsInWorld;
    for (TActorIterator<AGamePuzzlePoint> It(World); It; ++It)
    {
        AGamePuzzlePoint* GPP = *It;
        if (GPP != nullptr)
        {
            PPsInWorld.Add(GPP);
        }
    }
    return PPsInWorld;
}

void APuzzleManager::ActivateProperties()
{
    AllItems = GetAllItems();
    for (UItem* Item : AllItems)
    {
        Item->ToPropPtrs();
    }
}

ASPHINX_DevPlayerController* APuzzleManager::ReturnPC()
{
    ASPHINX_DevPlayerController* SDPC = Cast<ASPHINX_DevPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

    if (SDPC)
    {
        return SDPC;
    }

    return nullptr;
}

void APuzzleManager::PrintLeaves()
{
    for (TPair<UPuzzlePoint*, FRulesStruct>& Pair : Leaves)
    {
        FRulesStruct* FoundLeavesRules = &Pair.Value;
        UE_LOG(LogTemp, Warning, TEXT("RulesArray size for PP %p is %d"), Pair.Key, FoundLeavesRules->RulesArray.Num());
        UPuzzlePoint* PP = Pair.Key;
        if (PP)
        {
            UE_LOG(LogTemp, Warning, TEXT("PP in PrintLeaves is valid"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PP in PrintLeaves is null"));
            continue;
        }


        
        if (FoundLeavesRules)
        {
            //UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in RulesFor is valid and is %s"), *FoundLeavesRules->RulesArray[1]->Action);
            for (URule* Rule: FoundLeavesRules->RulesArray) 
            {
                if (Rule && Rule->Inputs.Num() > 0)
                {
                    //AddApplicableRule(Rule, GameItem, Rules);
                    UE_LOG(LogTemp, Warning, TEXT("Rule %s in PrintLeaves found and added to RulesArray"), *Rule->Action);
                }    
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("PrintLeaves called but no rules found"));
                } 
            }
        }    
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in PrintLeaves is null"));
            //RulesFor(GameItem);
            continue;
        }
        
    }
}

void APuzzleManager::PopulateRulePointers()
{
    for (TSubclassOf<URule> Rule : RuleAssets)
    {
        if (Rule)
        {
            URule* RulePtr = NewObject<URule>(this, Rule);
            if (RulePtr)
            {
                RulePtr->InitialiseRule();
                RulePointers.Add(RulePtr);
                UE_LOG(LogTemp, Display, TEXT("Rule %s added to RulesPointers"), *RulePtr->ToPMString());
            }
        }
        
    }
}

void APuzzleManager::PrintAllRules()
{
    for (URule* Rule : RulePointers)
    {
        UE_LOG(LogTemp, Display, TEXT("%s"), *Rule->ToPMString());
        //UKismetSystemLibrary::PrintString(GEngine->GetWorld(), *Rule->ToPMString());
    }
}

void APuzzleManager::InitialisePPPtrs()
{
    UE_LOG(LogTemp, Display, TEXT("InitialisePPPtrs PPAssets has %d assets"), PPAssets.Num());
    for (TSubclassOf<UPuzzlePoint> PP : PPAssets)
    {
        if (PP)
        {
            UPuzzlePoint* Pointer = NewObject<UPuzzlePoint>(this, PP);
            if (Pointer)
            {
                PuzzlePointPtrs.Add(Pointer);
                UE_LOG(LogTemp, Display, TEXT("PP pointer %s initialised, has %d goals"), *Pointer->Name, Pointer->PuzzleGoalsPtrs.Num());
            }
            else
            {
                UE_LOG(LogTemp, Display, TEXT("PuzzlePointPtr not initialised"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("PP from assets is not valid"));
        } 
    }
}

void APuzzleManager::SetupDbItemsOnStart()
{
    UE_LOG(LogTemp, Warning, TEXT("SetupDbItemsOnStart called"));
    UWorld* World = GetWorld();
    if (World != nullptr)
    {
        for (TActorIterator<AActor> It(World); It; ++It)
        {
            AActor* Actor = *It;
            UGameItem* GameItem = Actor->FindComponentByClass<UGameItem>();
            if (GameItem)
            {
                UE_LOG(LogTemp, Warning, TEXT("GameItem %s found by SetupDbItemsOnStart"), *GameItem->Name);
                GameItem->SetupDbItem();
            }
        }
    }
    
}

TArray<URule*> APuzzleManager::GetRulePointers()
{
    return RulePointers;
}


TArray<AGamePuzzlePoint*> APuzzleManager::GetGPPsInViewport()
{
    TArray<AGamePuzzlePoint*> FoundGPPs;
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World is null"));
        return FoundGPPs;
    }

    APlayerController* NPlayerController = World->GetFirstPlayerController();
    if (!NPlayerController)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerController is null"));
        return FoundGPPs;
    }

    FVector CameraLocation;
    FRotator CameraRotation;
    NPlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    int32 ViewportSizeX, ViewportSizeY;
    NPlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);

    FSceneViewFamily::ConstructionValues ViewFamilyInit(
        NPlayerController->GetLocalPlayer()->ViewportClient->Viewport,
        World->Scene,
        NPlayerController->GetLocalPlayer()->ViewportClient->EngineShowFlags);

    FSceneViewFamilyContext ViewFamily(ViewFamilyInit);

    FSceneViewInitOptions ViewInitOptions;
    ViewInitOptions.SetViewRectangle(FIntRect(0, 0, ViewportSizeX, ViewportSizeY));
    ViewInitOptions.ViewFamily = &ViewFamily;
    ViewInitOptions.ViewOrigin = CameraLocation;
    ViewInitOptions.ViewRotationMatrix = FInverseRotationMatrix(CameraRotation) * FMatrix(FPlane(0, 0, 1, 0), FPlane(1, 0, 0, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));
    ViewInitOptions.ProjectionMatrix = FReversedZPerspectiveMatrix(
        FMath::Max(0.001f, NPlayerController->PlayerCameraManager->GetFOVAngle()),
        1.0f,
        GNearClippingPlane,
        GNearClippingPlane);

    FSceneView* View = new FSceneView(ViewInitOptions);

    FConvexVolume ViewFrustum;
    GetViewFrustumBounds(ViewFrustum, View->ViewMatrices.GetViewProjectionMatrix(), true);

    for (TActorIterator<AGamePuzzlePoint> ActorItr(World); ActorItr; ++ActorItr)
    {
        AGamePuzzlePoint* Actor = *ActorItr;
        if (IsValid(Actor))
        {
            const FBoxSphereBounds Bounds = Actor->GetComponentsBoundingBox();
            if (ViewFrustum.IntersectBox(Bounds.Origin, Bounds.BoxExtent))
            {
                FHitResult HitResult;
                FCollisionQueryParams Params;
                Params.AddIgnoredActor(PlayerController->GetPawn());
                Params.AddIgnoredActor(Actor);

                World->LineTraceSingleByChannel(
                    HitResult,
                    CameraLocation,
                    Actor->GetActorLocation(),
                    ECC_Visibility,
                    Params
                );

                if (!HitResult.bBlockingHit || HitResult.GetActor() == Actor)
                {
                    FoundGPPs.Add(Actor);
                }
            }
        }
    }
	UE_LOG(LogTemp, Warning, TEXT("%d SPAWN POINTS ARE VISIBLE IN THE VIEWPORT"), FoundGPPs.Num());
    return FoundGPPs;
}

bool APuzzleManager::IsGPPInViewport()
{
    TArray<AGamePuzzlePoint*> FoundGPPs;
    FoundGPPs = GetGPPsInViewport();
    for (AGamePuzzlePoint* GPP : FoundGPPs)
    {
        if (GPP && GPPToFind)
        {
            if (GPP->Name == GPPToFind->Name)
            return true;
        }
    }
    return false;
}

void APuzzleManager::RetryIsGPPInViewport()
{
    if (!IsGPPInViewport())
    {
        UE_LOG(LogTemp, Display, TEXT("GPPToFind is valid"));
        DeactivatePuzzlePoint(GPPToFind);
        RulePPs.Remove(RuleToFind->ToPMString());
        --ActiveGeneratedPuzzles;
        UE_LOG(LogTemp, Display, TEXT("ActiveGeneratedPuzzles is %d"), ActiveGeneratedPuzzles);
        GPPToFind = nullptr;
        RuleToFind = nullptr;
    }
    else
    {
        FTimerDelegate TimerDel;
		TimerDel.BindUFunction(this, FName("RetryIsGPPInViewport"), GPPToFind);
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, 5.0f, false);
    }
    
}



/* TArray<UItem*> APuzzleManager::FindDbItemsFor(UTerm* Term, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> MatchingItems;
    for (TSubclassOf<UItem> DbItem : ItemAssets)
    {
        if (DbItem != nullptr)
        {
            UItem* DbItemPtr = NewObject<UItem>(this, DbItem);
            if (DbItemPtr && DbItemPtr->Matches(Term) && DbItemPtr->IsAccessible(AccessibleAreas, ItemsInLevel))
            {
                MatchingItems.Add(DbItemPtr);
            }
        }
    }
    return MatchingItems;
} */



/* TArray<TSubclassOf<UArea>> APuzzleManager::LoadAreaBPs()
{
    TArray<TSubclassOf<UArea>> LoadedAreaClasses;

    // Initialize the Asset Registry Module
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    FARFilter Filter;
    Filter.bRecursivePaths = true;
    Filter.PackagePaths.Add("/Game/Resources/Areas");

    // Query the Asset Registry
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);
    UE_LOG(LogTemp, Warning, TEXT("Found %d AREA assets."), AssetData.Num());

    // Load each asset class
    for (const FAssetData& Asset : AssetData)
    {
        // Get the generated class from the blueprint asset
        const FString GeneratedClassPath = Asset.GetTagValueRef<FString>(FName("GeneratedClass"));
        if (!GeneratedClassPath.IsEmpty())
        {
            UClass* AssetClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *GeneratedClassPath));
            if (AssetClass && AssetClass->IsChildOf(UArea::StaticClass()))
            {
                LoadedAreaClasses.Add(AssetClass);
                UE_LOG(LogTemp, Display, TEXT("Area '%s' loaded from database."), *AssetClass->GetName());
            }

        }
    }

    return LoadedAreaClasses;
} */

/* 
void APuzzleManager::FindLeaves(URule* Parent, UArea* Area)
{
    if (Parent->Children.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("Rule %s has no children"), *Parent->ToString());
        Leaves.FindOrAdd(Area).RulesArray.Add(Parent);
    }
    else
    {
        FRulesStruct* FoundRulesStruct = Leaves.Find(Area);
        if (FoundRulesStruct && !FoundRulesStruct->RulesArray.Contains(Parent))
        {
            FoundRulesStruct->RulesArray.Add(Parent);
        }
        for (URule* Child : Parent->Children)
        {
            if (Child != nullptr)
            {
                FindLeaves(Child, Area);
            }
        }
    }
} */

/* void APuzzleManager::GenerateForArea(UArea* Area)
{
    if (Area != nullptr)
    {
        Area->AreaObject->SetActorHiddenInGame(false);
        Area->AreaObject->SetActorEnableCollision(true);
        Area->AreaObject->SetActorTickEnabled(true);
        UE_LOG(LogTemp, Display, TEXT("%s area set to Active"), *Area->Name);
    }
    

    URule* Root = Generator->GeneratePuzzleStartingFrom(Area, AccessibleAreas);
    FRulesStruct NewRules;
    Leaves.Add(Area, NewRules);
    PuzzleRules.Add(Area, NewRules);
    FindLeaves(Root, Area);
    CurrentArea = Area;
    
} */


/* TArray<UArea*> APuzzleManager::GetAllAreas()
{
    TArray<UArea*> Objects;
    for (TSubclassOf<UArea> AssetClass : AreaAssets)
    {
        if (AssetClass != nullptr)
        {
            UArea* NewArea = NewObject<UArea>(this, AssetClass);
            if (NewArea)
            {
                Objects.Add(NewArea);
            }
        }
    }
    return Objects;
} */

  //Area
    //AreaAssets = LoadAreaBPs();

        //GenerateForArea(StartArea);


/* void APuzzleManager::ExecuteRule(URule* Rule, UArea* Area)
{
    FRulesStruct* FoundLeavesRules = Leaves.Find(Area);
    if (FoundLeavesRules->RulesArray.Contains(Rule))
    {
        UE_LOG(LogTemp, Display, TEXT("Execute: %s"), *Rule->Parent->Outputs[0]->Name);
        FoundLeavesRules->RulesArray.Remove(Rule);
        if (Rule->Parent->Parent != nullptr)
        {
            URule* Parent = Rule->Parent;
            Parent->Children.Remove(Rule);
            if (Parent->Children.Num() == 0)
            {
                FoundLeavesRules->RulesArray.Add(Parent);
                if (Parent->bAutomatic)
                {
                    UWorld* World = GetWorld();
                    UGameItem::ExecuteRule(World, Parent, true, Parent->Inputs[0]->GameItem);
                }
            }
        }
        else
        {
            if (Area->IsFinal())
            {
                TriggerEnd();
            }
            else
            {
                for (UArea* ConnectedArea : Area->ConnectedTo)
                {
                    if (ConnectedArea != nullptr)
                    {
                            UE_LOG(LogTemp, Display, TEXT("Attempting to generate puzzle for: %s"), *ConnectedArea->Name);
                            GenerateForArea(ConnectedArea);
                    }
                }
            }
        }
    }
} */