// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleTracker.h"
#include "PuzzleManager.h"

void UPuzzleTracker::UpdateText(int PuzzleNumber)
{
    UE_LOG(LogTemp, Display, TEXT("Update text called on PuzzleTracker, PuzzleNumber = %d"), PuzzleNumber);
    if (PuzzleNumber == 1)
    {
        TrackerText->SetText(FText::FromString(TEXT("Completed Puzzles: 1")));
    }
    else if (PuzzleNumber == 2)
    {
        TrackerText->SetText(FText::FromString(TEXT("Completed Puzzles: 2")));
    }
    else if (PuzzleNumber == 3)
    {
        TrackerText->SetText(FText::FromString(TEXT("Completed Puzzles: 3")));
    }
    else if (PuzzleNumber == 4)
    {
        TrackerText->SetText(FText::FromString(TEXT("Completed Puzzles: 4")));
    }
    else if (PuzzleNumber == 5)
    {
        TrackerText->SetText(FText::FromString(TEXT("Go talk to the Sphinx")));
    }
}

