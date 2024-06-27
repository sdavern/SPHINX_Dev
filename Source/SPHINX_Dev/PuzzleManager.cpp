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

APuzzleManager* APuzzleManager::Instance = nullptr;

APuzzleManager::APuzzleManager()
{
    PrimaryActorTick.bCanEverTick = true;
    PPAssets = LoadPuzzlePointBPs();
    ItemAssets = LoadItemBPs();
    UE_LOG(LogTemp, Error, TEXT("ItemAssets has %d items"), ItemAssets.Num());
    RuleAssets = LoadRuleBPs();
    ActivateMaxPuzzlePoints();
}

void APuzzleManager::BeginPlay()
{
    Super::BeginPlay();
    Instance = GetInstance();

    ActivateProperties();

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
            UE_LOG(LogTemp, Error, TEXT("PuzzlePointPtr is valid"));
        }
        if (RandPP != nullptr && !RandPP->IsActive && !RandPP->InitSpawned && RandPP->PuzzlePointPtr)
        {
            ActivatePuzzlePoint(RandPP);
            ActivePuzzlePoints.Add(RandPP);
            AccessiblePPs.Add(RandPP->PuzzlePointPtr);
            ++ActivePPs;
            UE_LOG(LogTemp, Error, TEXT("MAX PUZZLEPOINTS ACTIVATED"));
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
        ActivePuzzlePoints.Remove(PP);
        AccessiblePPs.Remove(PP->PuzzlePointPtr);
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
    float DelayTime = 5.0f;
    FTimerDelegate TimerDel;
    TimerDel.BindUFunction(this, FName("GenerateForActivePuzzlePoints"));
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, DelayTime, false);
    if (ActiveGeneratedPuzzles < MaxActivePuzzles)
    {
        UE_LOG(LogTemp, Error, TEXT("ATTEMPTING TO GENERATE PUZZLES"));
        TArray<UPuzzlePoint*> PPPtrs;
        for (TSubclassOf<UPuzzlePoint> PP : PPAssets)
        {
            if (PP)
            {
                UPuzzlePoint* PPPtr = NewObject<UPuzzlePoint>(this, PP);
                PPPtrs.Add(PPPtr);
                UE_LOG(LogTemp, Error, TEXT("PPPtr added"));
            }
        } 

        for (UPuzzlePoint* PP : PPPtrs)
        {
            //UE_LOG(LogTemp, Error, TEXT("CHECKING IF PP IS NOT NULL"));
            AGamePuzzlePoint* OwningGPP = nullptr;
            for (TActorIterator<AGamePuzzlePoint> It(PP->GetWorld()); It; ++It)
            {
                AGamePuzzlePoint* GPP = *It;
                if (GPP && GPP->Name == PP->Name)  
                {
                    OwningGPP = GPP;
                    break;
                }
            }       
       

            if (PP && OwningGPP && OwningGPP->IsActive && AccessiblePPs[0] && !OwningGPP->HasPuzzle) //need to add && OwningGPP->IsActive !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            {
                URule* Root = Generator->GeneratePuzzleStartingFrom(PP, AccessiblePPs, 0);
                if (Root)
                {
                    UE_LOG(LogTemp, Error, TEXT("Root is VALID"));
                    UE_LOG(LogTemp, Error, TEXT("ROOT is %s"), *Root->Action);	
                    UE_LOG(LogTemp, Display, TEXT("PP is %s"), *PP->Name);
                    FRulesStruct NewRules;
                    Leaves.Add(PP, NewRules);
                    PuzzleRules.Add(PP, NewRules);
                    FindLeaves(Root, PP);
                    UE_LOG(LogTemp, Error, TEXT("RULES ADDED"));

                    FRulesStruct* LeavesRulesStruct = Leaves.Find(PP);
                    if (LeavesRulesStruct != nullptr)
                    {
                        for (URule* Rule : LeavesRulesStruct->RulesArray)
                        {
                            if (Rule)
                            {
                                RulePPs.Add(Rule->ToPMString(), PP);
                                Rule->OwningPP = PP;
                                UE_LOG(LogTemp, Error, TEXT("RULE %s ASSIGNED TO PP %s"), *Rule->Action, *PP->Name);
                                UE_LOG(LogTemp, Error, TEXT("Leaves size is %d"), Leaves.Num());
                            }
                        }
                    }
            

                    FRulesStruct* PuzzleRulesStruct = PuzzleRules.Find(PP);
                    if (PuzzleRulesStruct != nullptr)
                    {
                        for (URule* Rule : PuzzleRulesStruct->RulesArray)
                        {
                            if (Rule)
                            {
                                RulePPs.Add(Rule->ToPMString(), PP);
                                Rule->OwningPP = PP;
                            }
                        }
                    }
                    OwningGPP->HasPuzzle = true; 
                    ++ActiveGeneratedPuzzles;
                    

                }
                else 
                {
                    UE_LOG(LogTemp, Error, TEXT("Root is null"));
                }
            
            
            }
            else
            {
                //UE_LOG(LogTemp, Error, TEXT("PP IS NULL"));
            } 
        }
    }
}

TArray<URule*> APuzzleManager::RulesFor(UGameItem* GameItem)
{
    TArray<URule*> Rules;
    UE_LOG(LogTemp, Warning, TEXT("Total Puzzle Points in Leaves: %d"), Leaves.Num());

    if (Leaves.Num() == 0) 
    {
        UE_LOG(LogTemp, Error, TEXT("Leaves map is empty."));
        return Rules;
    }

    for (TPair<UPuzzlePoint*, FRulesStruct>& Pair : Leaves)
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
        }


        
        if (FoundLeavesRules)
        {
            //UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in RulesFor is valid and is %s"), *FoundLeavesRules->RulesArray[1]->Action);
            for (URule* Rule: FoundLeavesRules->RulesArray) 
            {
                if (Rule && Rule->Inputs.Num() > 0)
                {
                    AddApplicableRule(Rule, GameItem, Rules);
                    UE_LOG(LogTemp, Warning, TEXT("Rule %s in RulesFor found and added to RulesArray"), *Rule->Action);
                }    
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("RulesFor called but no rules found"));
                } 
            }
        }    
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FoundLeavesRules in RulesFor is null"));
            //RulesFor(GameItem);
            continue;
        }
        
    }
    
    
    TArray<URule*> DbRules = GetRulesWithInput(GameItem->DbItem);
    for (int i  = DbRules.Num() - 1; i >= 0; i--)
    {
        if (DbRules.IsValidIndex(i) && DbRules[i]->Inputs.Num() > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("DbRules[%d]->Inputs[0] is %s, GameItem is %s"), i, *DbRules[i]->Inputs[0]->Name, *GameItem->Name);
            DbRules[i]->Inputs[0]->GameItem = GameItem; //Incorrect GameItem is being set here
            if (FindItemsForOutputs(DbRules[i]) && !Rules.Contains(DbRules[i]))
            {
                Rules.Add(DbRules[i]);
            }
        }
    }
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
    if (Rule->Inputs[0]->DbItem != nullptr)
    {
        if (Rule->Inputs[0]->DbItem->Name == GameItem->DbItem->Name)
        {
            if (!Rules.Contains(Rule))
            {
                UE_LOG(LogTemp, Display, TEXT("Found: %s %s"), *GameItem->DbItem->Name, *Rule->Action);
                Rule->Inputs[0]->GameItem = GameItem;
                UE_LOG(LogTemp, Error, TEXT("GameItem is %s"), *GameItem->Name);

                Rules.Add(Rule);
            }
        }
    }
}

void APuzzleManager::ExecuteRule(URule* Rule)
{
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
        UE_LOG(LogTemp, Error, TEXT("FoundPP %s is valid for Rule %s"), *FoundPP->Name, *Rule->Action);
    }
    for (TActorIterator<AGamePuzzlePoint> It(World); It; ++It)
    {
        AGamePuzzlePoint* GPP = *It;
        if (GPP && GPP->Name == FoundPP->Name)  
        {
            OwningGPP = GPP;
            UE_LOG(LogTemp, Display, TEXT("OwningGPP = GPP"));
            break;
        }
    } 

    FRulesStruct* FoundLeavesRules = Leaves.Find(FoundPP);
    if (FoundLeavesRules)
    {
        UE_LOG(LogTemp, Display, TEXT("Main Rule is %s"), *Rule->Action);
        for (URule* FRule : FoundLeavesRules->RulesArray)
        {
            UE_LOG(LogTemp, Error, TEXT("Rule %s is in RulesArray"), *FRule->Action);
        }
    }
    
    FString RuleString = Rule->ToPMString();

    UE_LOG(LogTemp, Display, TEXT("%s"), *RuleString);

    for (URule* SRule : FoundLeavesRules->RulesArray)
    {
        UE_LOG(LogTemp, Display, TEXT("%s has %d inputs and %d outputs"), *SRule->ToPMString(), SRule->Inputs.Num(), SRule->Outputs.Num());
        if (RuleString == SRule->ToPMString())
        {
            Rule = SRule;
            for (URule* ARule : FoundLeavesRules->RulesArray)
            {
                if (Rule->ToPMString() == ARule->ToPMString())
                {
                    FoundLeavesRules->RulesArray.Remove(ARule);
                    break;
                } 
            }

            /* if (Rule->Parent->Parent)
            {
                UE_LOG(LogTemp, Display, TEXT("Rule->Parent is valid"));
                URule* Parent = Rule->Parent;
                Parent->Children.Remove(Rule);
                if (Parent->Children.Num() == 0)
                {
                    FoundLeavesRules->RulesArray.Add(Parent);
                    if (Parent->bAutomatic)
                    {
                        UGameItem::ExecuteRule(World, Parent, true, Parent->Inputs[0]->GameItem);
                    } 
                } 
            } */
            
            UE_LOG(LogTemp, Display, TEXT("Puzzle for PP: %s completed!"), *FoundPP->Name);
            if (OwningGPP)
            {
                UE_LOG(LogTemp, Display, TEXT("OwningGPP is valid"));
                DeactivatePuzzlePoint(OwningGPP);
                RulePPs.Remove(Rule->ToPMString());
                UE_LOG(LogTemp, Display, TEXT("ActiveGeneratedPuzzles is %d"), ActiveGeneratedPuzzles);
                --ActiveGeneratedPuzzles;
                //Activating next PP is handled in Tick()
            }
            break;
        } 
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
    UE_LOG(LogTemp, Display, TEXT("AllItems[0] is %s and has %d properties: %s %s"), *AllItems[0]->Name, AllItems[0]->Properties.Num(), *AllItems[0]->Properties[0]->Name, *AllItems[0]->Properties[0]->Value);
    
    TArray<UItem*> MatchingItems;
    for (UItem* DbItem : AllItems)
    {
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
    for (int32 i = 0; i < RuleAssets.Num(); i++)
    {
        if (RuleAssets[i] != nullptr)
        {
            URule* RuleToAdd = NewObject<URule>(this, RuleAssets[i]);
		    RuleToAdd->ToInputsPtr();
            if (RuleToAdd && RuleToAdd->Inputs.Num() > 0)
            {
                for (UTerm* Input : RuleToAdd->Inputs)
                {
                    if (Input->Name == DbItem->Name || DbItem->GetSuperTypes().Contains(Input->Name))
                    {
                        Rules.Add(RuleToAdd);
                    }
                }
            }
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
    Filter.PackagePaths.Add("/Game/Resources/PuzzlePoints");

    // Query the Asset Registry
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);
    UE_LOG(LogTemp, Warning, TEXT("Found %d PP assets."), AssetData.Num());

    // Load each asset class
    for (const FAssetData& Asset : AssetData)
    {
        // Get the generated class from the blueprint asset
        const FString GeneratedClassPath = Asset.GetTagValueRef<FString>(FName("GeneratedClass"));
        if (!GeneratedClassPath.IsEmpty())
        {
            UClass* AssetClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *GeneratedClassPath));
            if (AssetClass && AssetClass->IsChildOf(UPuzzlePoint::StaticClass()))
            {
                LoadedPPClasses.Add(AssetClass);
                UE_LOG(LogTemp, Display, TEXT("PuzzlePoint '%s' loaded from database."), *AssetClass->GetName());
            }

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