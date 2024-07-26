// Fill out your copyright notice in the Description page of Project Settings.


#include "DatabaseBuilder.h"

UDatabaseBuilder::UDatabaseBuilder()
{

}

void UDatabaseBuilder::RefreshDatabase()
{
    UE_LOG(LogTemp, Error, TEXT("RefreshDatabase called!!!"));
}

void UDatabaseBuilder::LoadBaseItems(const FString& FilePath)
{
    UE_LOG(LogTemp, Display, TEXT("File path is %s"), *FilePath);
}

void UDatabaseBuilder::AppendProperties(TArray<FString> BaseProps, TArray<FString> AppProps)
{

}