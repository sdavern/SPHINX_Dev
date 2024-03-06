// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePoint.h"
#include "GamePuzzlePoint.h"


UPuzzlePoint::UPuzzlePoint()
{
    this->ToPuzzleGoalPtrs();
}

void UPuzzlePoint::ToPuzzleGoalPtrs()
{
    for (TSubclassOf<UTerm> Goal : PuzzleGoals)
    {
        if (Goal)
        {
            UTerm* GoalPtr = NewObject<UTerm>(this, Goal);
            PuzzleGoalsPtrs.Add(GoalPtr);
        }
    }
}

UTerm* UPuzzlePoint::PickGoal()
{
   MainGoal = PuzzleGoalsPtrs[FMath::RandRange(0, PuzzleGoalsPtrs.Num())];
   this->SetInitType();
   return MainGoal;
}

void UPuzzlePoint::SetInitType()
{
    if (MainGoal->InitPointType != "")
    {
        if (MainGoal->InitPointType == "NPC")
        {
            IsNPC = true;
        }

        if (MainGoal->InitPointType == "Text")
        {
            IsText = true;
        }

        if (MainGoal->InitPointType == "Object")
        {
            IsObject = true;
        }
    }
    
}

UTerm* UPuzzlePoint::GetCurrentGoal()
{
    if (MainGoal != nullptr)
    {
        return MainGoal;
    }
    else
    {
        return nullptr;
    }
}

FString UPuzzlePoint::GetHint()
{
    if (MainGoal != nullptr)
    {
        return MainGoal->Hint;
    }
    else
    {
        return FString(TEXT("No current goal set."));
    }
}

FString UPuzzlePoint::GetObjective()
{
    UE_LOG(LogTemp, Display, TEXT("Getting objective. "));
    UE_LOG(LogTemp, Display, TEXT("Current Goal: %s"), *MainGoal->Name);
    return MainGoal->Description;
}

void UPuzzlePoint::AddGoal()
{
    UTerm* Goal = NewObject<UTerm>(this, UTerm::StaticClass());
    TSubclassOf<UTerm> NewGoal = Goal->GetClass();
    if (NewGoal)
    {
        PuzzleGoals.Add(NewGoal);
    }
}

void UPuzzlePoint::DeleteGoal(int32 Index)
{
    if (PuzzleGoals.IsValidIndex(Index))
    {
        PuzzleGoals.RemoveAt(Index);
    }
}