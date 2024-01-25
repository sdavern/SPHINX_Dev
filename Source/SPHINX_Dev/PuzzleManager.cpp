// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleManager.h"

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