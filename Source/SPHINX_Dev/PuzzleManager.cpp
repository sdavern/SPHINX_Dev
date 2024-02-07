// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"
#include "GameItem.h"
#include "PlayerPawn.h"

UPuzzleManager* UPuzzleManager::Instance = nullptr;

UPuzzleManager::UPuzzleManager()
{

}

UPuzzleManager* UPuzzleManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<UPuzzleManager>();
        Instance->AddToRoot(); 
    }
    return Instance;
}

UItem* UPuzzleManager::GetObject(FString ItemName)
{
    return nullptr;
}

TArray<URule*> UPuzzleManager::RulesFor(UGameItem* GameItem, UArea* Area)
{
    TArray<URule*> Rules;
    return Rules;
}

void  UPuzzleManager::UpdatePlayerProperties(UItemProperty* Property)
{
    return;
}


APlayerPawn* UPuzzleManager::GetPlayer()
{
    return Player;
}

UArea* UPuzzleManager::GetCurrentArea()
{
    return CurrentArea;
}