// Fill out your copyright notice in the Description page of Project Settings.


#include "Term.h"
#include "Item.h"
#include "GameItem.h"
#include "PuzzleManager.h"

UTerm::UTerm()
{
    this->ToPropPtrs();
}

UTerm::UTerm(const FString& Name)
{
    this->Name = Name;
}

UTerm::UTerm(const UTerm& Term, const FString& Name)
{
    Properties = Term.Properties;
    this->Name = Name;
}

void UTerm::AddPropertyOfType(EItemProperty Type)
{
    UItemProperty* Property = NewObject<UItemProperty>(this, UItemProperty::StaticClass());
    if (Property)
    {
        Property->Type = Type;

        Properties.Add(Property);
    }
}

void UTerm::DeleteProperty(int32 Index)
{
    if (Properties.IsValidIndex(Index))
    {
        Properties.RemoveAt(Index);
    }

}

TArray<UItemProperty*> UTerm::GetPropertiesWithName(const FString& PropertyName) const
{
    TArray<UItemProperty*> PropertiesToReturn;

    for (UItemProperty* Property : Properties)
    {
        if (Property && Property->Name.Equals(PropertyName, ESearchCase::IgnoreCase))
        {
            PropertiesToReturn.Add(Property);
        }
    }

    return PropertiesToReturn;
}

UItemProperty* UTerm::GetPropertyWithName(const FString& PropertyName) const
{
    for (UItemProperty* Property : Properties)
    {
        if (Property && Property->Name.Equals(PropertyName, ESearchCase::IgnoreCase))
        {
            return Property;
        }
    }
    return nullptr;
}

TArray<FString> UTerm::GetSuperTypes() //needs to be finished once PuzzleManager is done.
{
    TArray<FString> Types;
    APuzzleManager* PMInstance = APuzzleManager::GetInstance();
    if (PMInstance)
    {
        UE_LOG(LogTemp, Display, TEXT("Getting SuperTypes"));
        UItem* DbItemMatch = PMInstance->GetObject(Name); //may not need to create new object?
        if (DbItemMatch)
        {
            UE_LOG(LogTemp, Display, TEXT("DbItemMatch is %s"), *DbItemMatch->Name);
            DbItem = DbItemMatch;
            return DbItemMatch->GetSuperTypes();
        }
    }
    //Types.Add("Item");
    return Types;
    
}

FString UTerm::GetTermAsString()
{
    FString TermAsString;
    TermAsString += Name;

    if (Properties.Num() > 0)
    {
        TermAsString += TEXT("[");
        for (int32 i = 0; i < Properties.Num(); ++i)
        {
            TermAsString += Properties[i]->Name + TEXT(":");
            TermAsString += Properties[i]->Value; 
            if (i < Properties.Num() - 1)
            {
                TermAsString += TEXT(", ");
            }
        }
        TermAsString += TEXT("] ");
    }

    if (DbItem != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("Dbitem valid, adding to term string"));
        TermAsString += DbItem->ToString();
    }
    else
    {
        TermAsString += TEXT(" null db item ");
    }

    return TermAsString;
}

FString UTerm::ToString()
{
    return this->GetTermAsString();
}

void UTerm::ToPropPtrs()
{
    Properties.Empty();
    //UE_LOG(LogTemp, Display, TEXT("ToPropPtrs called on Term %s and PropertiesBP has %d BPs"), *Name, PropertiesBP.Num());
    for (TSubclassOf<UItemProperty> AssetClass : PropertiesBP)
    {
        if (AssetClass != nullptr)
        {
            UItemProperty* NewProp = NewObject<UItemProperty>(this, AssetClass);
            if (NewProp)
            {
                //UE_LOG(LogTemp, Display, TEXT("Adding property ptr to Term %s"), *Name);
                Properties.Add(NewProp);
            }
        }
    }
}