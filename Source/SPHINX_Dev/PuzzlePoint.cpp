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

