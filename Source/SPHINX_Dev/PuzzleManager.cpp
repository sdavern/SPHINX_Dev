// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"
#include "GameItem.h"
#include "PlayerPawn.h"
#include "Generator.h"

APuzzleManager* APuzzleManager::Instance = nullptr;

APuzzleManager::APuzzleManager()
{

}

void APuzzleManager::BeginPlay()
{
    Super::BeginPlay();

    //Load in databases
    //Area
    AreaAssets = LoadAreaBPs();
    //Item
    ItemAssets = LoadItemBPs();
    UE_LOG(LogTemp, Display, TEXT("LoadItemBPs called"));
    //GetObject("Book");
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
   

    GenerateForArea(StartArea);

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

void APuzzleManager::GenerateForArea(UArea* Area)
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

    for (AConditionalObject* CO : ConditionalObjects)
    {
        if (CO != nullptr && CO->Area->Name == Area->Name)
        {
            FRulesStruct* FoundRulesStruct = PuzzleRules.Find(Area);
            for (URule* Rule : FoundRulesStruct->RulesArray)
            {
                if (Rule != nullptr && PuzzleContains(CO->Condition, Rule))
                {
                    CO->AffectedItem->SetActorHiddenInGame(false);
                    CO->AffectedItem->SetActorEnableCollision(true);
                    CO->AffectedItem->SetActorTickEnabled(true);
                }
            }
        }
    }
}

TArray<URule*> APuzzleManager::RulesFor(UGameItem* GameItem, UArea* Area)
{
    TArray<URule*> Rules;

    FRulesStruct* FoundLeavesRules = Leaves.Find(Area);
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

void APuzzleManager::ExecuteRule(URule* Rule, UArea* Area)
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
}

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
            TArray<UArea*> AreaArray;
            TArray<UItem*> ItemArray;
            TArray<UItem*> PossibleItems = FindDbItemsFor(Output, AreaArray, ItemArray);
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

void APuzzleManager::AddPuzzle(UArea* Area, FString Puzzle)
{
    PuzzlesGenerated.Add(Area, Puzzle);
}

bool APuzzleManager::HasItemOfType(UTerm* Term, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    for (TSubclassOf<UItem> DbItem : ItemAssets)
    {
        if (DbItem != nullptr)
        {
            UItem* DbItemPtr = NewObject<UItem>(this, DbItem);
            if (DbItemPtr && (DbItemPtr->Name == Term->Name || DbItemPtr->GetSuperTypes().Contains(Term->Name)) && DbItemPtr->IsAccessible(NewAccessibleAreas, ItemsInLevel))
            {
                return true;
            }
        }
    }
    return false;
}

TArray<UItem*> APuzzleManager::GetItemsOfType(FString ItemName, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
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

TArray<UItem*> APuzzleManager::FindDbItemsFor(UTerm* Term, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
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

TArray<UArea*> APuzzleManager::GetAllAreas()
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

TArray<TSubclassOf<UArea>> APuzzleManager::LoadAreaBPs()
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

