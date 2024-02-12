// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"
#include "GameItem.h"
#include "PlayerPawn.h"

APuzzleManager* APuzzleManager::Instance = nullptr;

APuzzleManager::APuzzleManager()
{

}

APuzzleManager* APuzzleManager::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<APuzzleManager>();
        Instance->AddToRoot(); 
    }
    return Instance;
}

UItem* APuzzleManager::GetObject(FString ItemName)
{
    return nullptr;
}

TArray<URule*> APuzzleManager::RulesFor(UGameItem* GameItem, UArea* Area)
{
    TArray<URule*> Rules;
    return Rules;
}

void  APuzzleManager::UpdatePlayerProperties(UItemProperty* Property)
{
    return;
}


APlayerPawn* APuzzleManager::GetPlayer()
{
    return Player;
}

UArea* APuzzleManager::GetCurrentArea()
{
    return CurrentArea;
}