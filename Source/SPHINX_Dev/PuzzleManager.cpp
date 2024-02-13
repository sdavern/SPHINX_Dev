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
    return;
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
    return true;
}

void APuzzleManager::AddPuzzle(UArea* Area, FString Puzzle)
{
    return;
}

bool APuzzleManager::HasItemOfType(UTerm Term, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    return true;
}

TArray<UItem*> APuzzleManager::GetItemsOfType(FString ItemName, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> Items;
    return Items;
}

TArray<UItem*> APuzzleManager::FindDBItemsFor(UTerm*, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
    TArray<UItem*> Items;
    return Items;
}

TArray<URule*> APuzzleManager::GetRulesWithInput(UItem* DbItem)
{
    TArray<URule*> Items;
    return Items;
}

TArray<URule*> APuzzleManager::GetRulesWithOutput(UTerm* Term)
{
    TArray<URule*> Items;
    return Items;
}

TArray<UItem*> APuzzleManager::GetAllItems()
{
    TArray<UItem*> Objects;
    for (UItem* Asset : ItemAssets)
    {
        UItem* NewItem = NewObject<UItem>(this, UItem::StaticClass());
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

