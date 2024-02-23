// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePoint.h"


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
   return MainGoal = PuzzleGoalsPtrs[FMath::RandRange(0, PuzzleGoalsPtrs.Num() - 1)];
}

void UPuzzlePoint::SetInitType()
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
