// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "GameItem.h"
#include "PlayerPawn.h"
#include "Generator.h"
#include "GamePuzzlePoint.h"
#include "PuzzlePoint.h"

APuzzleManager* APuzzleManager::Instance = nullptr;

APuzzleManager::APuzzleManager()
{

}

void APuzzleManager::BeginPlay()
{
    Super::BeginPlay();

    //Load in databases
  
    //PP
    PPAssets = LoadPuzzlePointBPs();
    //Item
    ItemAssets = LoadItemBPs();
    //Rule
    RuleAssets = LoadRuleBPs();


    if (Everything != nullptr)
    {
        Everything->SetActorHiddenInGame(false);
        Everything->SetActorEnableCollision(true);
        Everything->SetActorTickEnabled(true);
        UE_LOG(LogTemp, Display, TEXT("Everything set to Active"));
    }
    
    if (Player != nullptr)
    {
        Player->SetActorHiddenInGame(false);
        Player->SetActorEnableCollision(true);
        Player->SetActorTickEnabled(true);
        UE_LOG(LogTemp, Display, TEXT("Player set to Active"));
    }
    
    if (Generator != nullptr)
    {
        Generator->SetActorHiddenInGame(false);
        Generator->SetActorEnableCollision(true);
        Generator->SetActorTickEnabled(true);
        UE_LOG(LogTemp, Display, TEXT("Generator set to Active"));

    }
    
    if (StartingInventory != nullptr)
    {
        StartingInventory->SetActorHiddenInGame(false);
        StartingInventory->SetActorEnableCollision(true);
        StartingInventory->SetActorTickEnabled(true);
        UE_LOG(LogTemp, Display, TEXT("Starting Inventory set to Active"));
    }
   
    ActivateMaxPuzzlePoints();
    GenerateForActivePuzzlePoints();
    AssignPlayer();

}

void APuzzleManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    ActivateMaxPuzzlePoints();
    GenerateForActivePuzzlePoints();
}

void APuzzleManager::AssignPlayer()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Player"), FoundActors);
    if (FoundActors.Num() > 0)
    {
        AActor* FoundActor = FoundActors[0];
        APlayerPawn* PlayerPawn = Cast<APlayerPawn>(FoundActor);
        if (PlayerPawn)
        {
            Player = PlayerPawn;
        }
    }
}

void APuzzleManager::ActivateMaxPuzzlePoints()
{
    while (ActivePuzzles < MaxActivePuzzles)
    {
        TArray<AGamePuzzlePoint*> PPsInWorld = GetPPsInWorld();
        int32 RandomInt = FMath::RandRange(0, PPsInWorld.Num() - 1);
        AGamePuzzlePoint* RandPP = PPsInWorld[RandomInt];
        if (RandPP != nullptr && !RandPP->IsActive && !RandPP->InitSpawned)
        {
            ActivatePuzzlePoint(RandPP);
            ActivePuzzlePoints.Add(RandPP);
            ++ActivePuzzles;
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
    }
    
}

APuzzleManager* APuzzleManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<APuzzleManager>();
        UE_LOG(LogTemp, Warning, TEXT("Puzzle Manager instance created."));
        return Instance;
    }
    UE_LOG(LogTemp, Display, TEXT("Puzzle Manager instance found."));
    return Instance;
    
}

void APuzzleManager::GenerateForActivePuzzlePoints()
{
    TArray<UPuzzlePoint*> PPPtrs;
    for (TSubclassOf<UPuzzlePoint> PP : PPAssets)
    {
        if (PP)
        {
            UPuzzlePoint* PPPtr = NewObject<UPuzzlePoint>(this, PP);
            PPPtrs.Add(PPPtr);
        }
    }

    for (UPuzzlePoint* PP : PPPtrs)
    {
        if (PP != nullptr && PP->OwningGamePP != nullptr && PP->OwningGamePP->IsActive == true)
        {
            URule* Root = Generator->GeneratePuzzleStartingFrom(PP, AccessiblePPs);
            FRulesStruct NewRules;
            Leaves.Add(PP, NewRules);
            PuzzleRules.Add(PP, NewRules);
            FindLeaves(Root, PP);

            FRulesStruct* LeavesRulesStruct = Leaves.Find(PP);
            if (LeavesRulesStruct != nullptr)
            {
                for (URule* Rule : LeavesRulesStruct->RulesArray)
                {
                    if (Rule)
                    {
                        Rule->OwningPP = PP;
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
                        Rule->OwningPP = PP;
                    }
                }
            }
            
        }
    }
}

TArray<URule*> APuzzleManager::RulesFor(UGameItem* GameItem, UPuzzlePoint* PP)
{
    TArray<URule*> Rules;

    FRulesStruct* FoundLeavesRules = Leaves.Find(PP);
    for (URule* Rule: FoundLeavesRules->RulesArray)
    {
        if (Rule != nullptr)
        {
            AddApplicableRule(Rule, GameItem, Rules);
        }  
    }

    if (UseAllRules)
    {
        TArray<URule*> DbRules = GetRulesWithInput(GameItem->DbItem);
        for (int32 i  = DbRules.Num() - 1; i >= 0; i--)
        {
            DbRules[i]->Inputs[0]->GameItem = GameItem;
            if (FindItemsForOutputs(DbRules[i]) && !Rules.Contains(DbRules[i]))
            {
                Rules.Add(DbRules[i]);
            }
        }
    }
    return Rules;
}

UItem* APuzzleManager::GetObject(FString ItemName)
{
    UE_LOG(LogTemp, Error, TEXT("Checking ItemAssets, count: %d"), ItemAssets.Num());
    for (TSubclassOf<UItem> ItemClass : ItemAssets)
    {
        UItem* NewItem = NewObject<UItem>(this, ItemClass);
        if (NewItem && NewItem->Name == ItemName)
        {
            UE_LOG(LogTemp, Error, TEXT("NewItem that has been created has the name: %s"), *NewItem->Name);
            return NewItem; // Return the newly created item if it matches the requested name.
        }
    }

    UE_LOG(LogTemp, Error, TEXT("GetObject called with Name: %s"), *ItemName);
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
                Rules.Add(Rule);
            }
        }
    }
}

void APuzzleManager::ExecuteRule(URule* Rule)
{
    UPuzzlePoint* FoundPP = Rule->OwningPP;
    AGamePuzzlePoint* OwningGPP = FoundPP->OwningGamePP;
    FRulesStruct* FoundLeavesRules = Leaves.Find(FoundPP);
    UWorld* World = GetWorld();
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
                    UGameItem::ExecuteRule(World, Parent, true, Parent->Inputs[0]->GameItem);
                }
            }
        }
        else
        {
            UE_LOG(LogTemp, Display, TEXT("Puzzle for PP: %s completed!"), *FoundPP->Name);
            if (OwningGPP)
            {
                DeactivatePuzzlePoint(OwningGPP);
                //Activating next PP is handled in Tick()
            }
            
        }
    }
}

void APuzzleManager::FindLeaves(URule* Parent, UPuzzlePoint* PP)
{
    if (Parent->Children.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("Rule %s has no children"), *Parent->ToString());
        Leaves.FindOrAdd(PP).RulesArray.Add(Parent);
    }
    else
    {
        FRulesStruct* FoundRulesStruct = Leaves.Find(PP);
        if (FoundRulesStruct && !FoundRulesStruct->RulesArray.Contains(Parent))
        {
            FoundRulesStruct->RulesArray.Add(Parent);
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
    TArray<UItem*> MatchingItems;
    for (TSubclassOf<UItem> DbItem : ItemAssets)
    {
        if (DbItem != nullptr)
        {
            UItem* DbItemPtr = NewObject<UItem>(this, DbItem);
            if (DbItemPtr && DbItemPtr->Matches(Term) && DbItemPtr->IsAccessible(AccessiblePPs, ItemsInLevel))
            {
                MatchingItems.Add(DbItemPtr);
            }
        }
    }
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

            if (RuleToAdd && RuleToAdd->Inputs.Num() > 0 && (RuleToAdd->Inputs[0]->Name == DbItem->Name || DbItem->GetSuperTypes().Contains(RuleToAdd->Inputs[0]->Name)))
            {
                Rules.Add(RuleToAdd);
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
    if (ActivePuzzles >= MaxActivePuzzles + 1)
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