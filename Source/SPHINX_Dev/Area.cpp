#include "Area.h"
#include "GameArea.h"

UArea::UArea()
{
    Name = TEXT("New Area");
    this->ToGoalsPtr();
}

void UArea::AddGoal()
{   
    UTerm* NewGoal = NewObject<UTerm>(this, UTerm::StaticClass());
    if (NewGoal)
    {
        Goals.Add(NewGoal);
    }

}

void UArea::DeleteGoal(int32 Index)
{
    if (Goals.IsValidIndex(Index))
    {
        Goals.RemoveAt(Index);
    }
}

void UArea::AddConnectedArea()
{
        ConnectedTo.Add(nullptr);
}

void UArea::DeleteConnectedArea(int32 Index)
{
    if (ConnectedTo.IsValidIndex(Index))
    {
        ConnectedTo.RemoveAt(Index);
    }
}

void UArea::SetCurrentGoal(UTerm* Goal)
{
    if (Goal != nullptr)
    {
        CurrentGoal = Goal;
    }
  
}

UTerm* UArea::GetCurrentGoal()
{
    if (CurrentGoal != nullptr)
    {
        return CurrentGoal;
    }
    else
    {
        return nullptr;
    }
}

FString UArea::GetHint()
{
    if (CurrentGoal != nullptr)
    {
        return CurrentGoal->Hint;
    }
    else
    {
        return FString(TEXT("No current goal set."));
    }
    
}

FString UArea::GetObjective()
{
    UE_LOG(LogTemp, Display, TEXT("Getting objective. "));
    UE_LOG(LogTemp, Display, TEXT("Current Goal: %s"), *CurrentGoal->Name);
    return CurrentGoal->Description;
}

void UArea::SetFinal(bool Final)
{
    if (Final)
    {
        IsFinalScene = Final;
    }
}

bool UArea::IsFinal()
{
    return IsFinalScene;
}

FString UArea::ToString() const
{
    FString S = Name + TEXT(" Terms: ");

    for (UTerm* G : Goals)
    {
        S += G->GetTermAsString();
    }

    S += TEXT(" Connected Areas: ");

    for (UArea* C : ConnectedTo)
    {
        S += C->Name;
    }

    return S;
}

UArea* UArea::Clone()
{
    UArea* ClonedArea = NewObject<UArea>(GetOuter(), GetClass());

    ClonedArea->OwningGameArea = this->OwningGameArea;
    ClonedArea->Name = this->Name;
    ClonedArea->Goals = this->Goals;
    ClonedArea->ConnectedTo = this->ConnectedTo;
    ClonedArea->InGameArea = this->InGameArea;
    ClonedArea->MaxDepth = this->MaxDepth;
    ClonedArea->IsFinalScene = this->IsFinalScene;
    ClonedArea->CurrentGoal = this->CurrentGoal;
    ClonedArea->AreaObject = this->AreaObject;

    return ClonedArea;
   
}

void UArea::ToGoalsPtr()
{
    for (TSubclassOf<UTerm> AssetClass : GoalsBP)
    {
        if (AssetClass != nullptr)
        {
            UTerm* TermPtr = NewObject<UTerm>(this, AssetClass);
            if (TermPtr != nullptr)
            {
                Goals.Add(TermPtr);
            }
        }
    }
}