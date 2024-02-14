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

    GetInstance();

    Everything->SetActorHiddenInGame(false);
    Everything->SetActorEnableCollision(true);
    Everything->SetActorTickEnabled(true);

    Player->SetActorHiddenInGame(false);
    Player->SetActorEnableCollision(true);
    Player->SetActorTickEnabled(true);

    Generator->SetActorHiddenInGame(false);
    Generator->SetActorEnableCollision(true);
    Generator->SetActorTickEnabled(true);

    StartingInventory->SetActorHiddenInGame(false);
    StartingInventory->SetActorEnableCollision(true);
    StartingInventory->SetActorTickEnabled(true);

    GenerateForArea(StartArea);

}

APuzzleManager* APuzzleManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<APuzzleManager>();
    }
    return Instance;
}

void APuzzleManager::GenerateForArea(UArea* Area)
{
    Area->AreaObject->SetActorHiddenInGame(false);
    Area->AreaObject->SetActorEnableCollision(true);
    Area->AreaObject->SetActorTickEnabled(true);

    URule* Root = Generator->GeneratePuzzleStartingFrom(Area, AccessibleAreas);


    FRulesStruct NewRules;
    Leaves.Add(Area, NewRules);
    PuzzleRules.Add(Area, NewRules);
    FindLeaves(Root, Area);
    CurrentArea = Area;

    for (AConditionalObject* CO : ConditionalObjects)
    {
        if (CO->Area->Name == Area->Name)
        {
            FRulesStruct* FoundRulesStruct = PuzzleRules.Find(Area);
            for (URule* Rule : FoundRulesStruct->RulesArray)
            {
                if (PuzzleContains(CO->Condition, Rule))
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
        AddApplicableRule(Rule, GameItem, Rules);
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
    for (UItem* Item : ItemAssets)
    {
        if (Item->Name == ItemName)
        {
            UItem* NewItem = NewObject<UItem>(this, UItem::StaticClass());
            NewItem = Item;
            return NewItem;
        }
    }
    return nullptr;
}

void APuzzleManager::AddApplicableRule(URule* Rule, UGameItem* GameItem, TArray<URule*> Rules)
{
    if (Rule->Inputs[0]->DbItem != nullptr)
    {
        if (Rule->Inputs[0]->DbItem->Name == GameItem->DbItem->Name)
        {
            if (!Rules.Contains(Rule))
            {
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
                    GenerateForArea(ConnectedArea);
                }
            }
        }
    }
}

void APuzzleManager::FindLeaves(URule* Parent, UArea* Area)
{
    if (Parent->Children.Num() == 0)
    {
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
            FindLeaves(Child, Area);
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
            if (Output->Name == Input->Name)
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
    for (UItem* DbItem : ItemAssets)
    {
        if ((DbItem->Name == Term->Name || DbItem->GetSuperTypes().Contains(Term->Name)) && DbItem->IsAccessible(NewAccessibleAreas, ItemsInLevel))
        {
            return true;
        }
    }
    return false;
}

TArray<UItem*> APuzzleManager::GetItemsOfType(FString ItemName, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> MatchingItems;
    for (UItem* DbItem : ItemAssets)
    {
        if (DbItem->Name == ItemName || DbItem->GetSuperTypes().Contains(ItemName))
        {
            MatchingItems.Add(DbItem);
        }
    }
    return MatchingItems;
}

TArray<UItem*> APuzzleManager::FindDbItemsFor(UTerm* Term, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> MatchingItems;
    for (UItem* DbItem : ItemAssets)
    {
        if (DbItem->Matches(Term) && DbItem->IsAccessible(AccessibleAreas, ItemsInLevel))
        {
            UItem* NewItem = NewObject<UItem>(this, UItem::StaticClass());
            NewItem = DbItem;
            MatchingItems.Add(NewItem);
        }
    }
    return MatchingItems;
}

TArray<URule*> APuzzleManager::GetRulesWithInput(UItem* DbItem)
{
    TArray<URule*> Rules;
    for (int32 i = 0; i < RuleAssets.Num(); i++)
    {
        if (RuleAssets[i]->Inputs[0]->Name == DbItem->Name || DbItem->GetSuperTypes().Contains(RuleAssets[i]->Inputs[0]->Name))
        {
            URule* RuleToAdd = NewObject<URule>(this, URule::StaticClass());
            RuleToAdd = RuleAssets[i];
            Rules.Add(RuleToAdd);
        }
    }
    return Rules;
}

TArray<URule*> APuzzleManager::GetRulesWithOutput(UTerm* Term)
{
    TArray<URule*> Rules;
    for (int32 i = 0; i < RuleAssets.Num(); i++)
    {
        if (RuleAssets[i]->Outputs[0]->Name == Term->Name)
        {
            URule* RuleToAdd = NewObject<URule>(this, URule::StaticClass());
            RuleToAdd = RuleAssets[i];
            Rules.Add(RuleToAdd);
        }
    }
    return Rules;
}

TArray<UItem*> APuzzleManager::GetAllItems()
{
    TArray<UItem*> Objects;
    for (UItem* Asset : ItemAssets)
    {
        UItem* NewItem = NewObject<UItem>(this, UItem::StaticClass());
        NewItem = Asset;
        Objects.Add(NewItem);
    }
    return Objects;
}

TArray<URule*> APuzzleManager::GetAllRules()
{
    TArray<URule*> Objects;
    for (URule* Asset : RuleAssets)
    {
        URule* NewRule = NewObject<URule>(this, URule::StaticClass());
        NewRule = Asset;
        Objects.Add(NewRule);
    }
    return Objects;
}

TArray<UArea*> APuzzleManager::GetAllAreas()
{
    TArray<UArea*> Objects;
    for (UArea* Asset : AreaAssets)
    {
        UArea* NewArea = NewObject<UArea>(this, UArea::StaticClass());
        NewArea = Asset;
        Objects.Add(NewArea);
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
    return Player->GameItem;
}

bool APuzzleManager::PuzzleContains(UItem* Item, URule* Parent)
{
    return true;
}

FString APuzzleManager::GetHint()
{
    return CurrentArea->GetHint();
}

FString APuzzleManager::GetObjective()
{
    return CurrentArea->GetObjective();
}

FString APuzzleManager::GetCurrentAreaName()
{
    return CurrentArea->Name;
}

UArea* APuzzleManager::GetCurrentArea()
{
    return CurrentArea;
}

void APuzzleManager::TriggerEnd()
{
    FinalFade->SetActorHiddenInGame(false);
    FinalFade->SetActorEnableCollision(true);
    FinalFade->SetActorTickEnabled(true);
}

