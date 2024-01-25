#include "Area.h"

UArea::UArea()
{
    Name = TEXT("New Area");
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
    IsFinalScene = Final;
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


