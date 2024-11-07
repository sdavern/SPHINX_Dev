#include "Item.h"
#include "Term.h"
#include "Area.h"
#include "PuzzlePoint.h"
#include "SpawnPoint.h"

UItem::UItem()
{
    Name = TEXT("NewItem");
    //ToPropPtrs();
    
}

bool UItem::Equals(const UObject* Other) const
{
    // Safely cast the UObject to UItem
    const UItem* OtherItem = Cast<UItem>(Other);

    // If the cast is successful and the names are equal, return true
    return OtherItem != nullptr && OtherItem->Name == Name;
}

bool UItem::PropertyExists(const FString& PropertyName) const
{
    for (const UItemProperty* Prop : Properties)
    {
        if (Prop && Prop->Name.Equals(PropertyName, ESearchCase::IgnoreCase))
        {
            return true;
        }
    }
    return false;
}

TArray<UItemProperty*> UItem::GetPropertiesWithName(const FString& PropertyName) const
{
    //UE_LOG(LogTemp, Display, TEXT("GetPropertiesWithName(isa) called for %s"), *Name);
    TArray<UItemProperty*> PropertiesToReturn;

    for (UItemProperty* Property : Properties)
    {
        if (Property && !PropertyName.IsEmpty() && Property->Name.Equals(PropertyName, ESearchCase::IgnoreCase))
        {
            //UE_LOG(LogTemp, Display, TEXT("Property %s %s added in GetPropertiesWithName for %s"), *Property->Name, *Property->Value, *Name);
            PropertiesToReturn.Add(Property);
        }
        else
        {
            //UE_LOG(LogTemp, Display, TEXT("Property %s %s found  but NOT ADDED in GetPropertiesWithName for %s"), *Property->Name, *Property->Value, *Name);
        }
        
    }

    return PropertiesToReturn;
}

UItemProperty* UItem::GetPropertyWithName(const FString& PropertyName) const
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

bool UItem::HasProperty(UItemProperty* PropertyToCheck)
{
    //UE_LOG(LogTemp, Display, TEXT("Checking HasProperty for %s %s in Item %s"), *PropertyToCheck->Name, *PropertyToCheck->Value, *Name);
    if (!PropertyToCheck)
    {
        //UE_LOG(LogTemp, Display, TEXT("PropertyToCheck in HasProperty is null"));
        return false;
    }
    for (UItemProperty* Prop : Properties)
    {
        //UE_LOG(LogTemp, Display, TEXT("Property in HasPropertyLoop is %s %s"), *PropertyToCheck->Name, *PropertyToCheck->Value);
        if (Prop && Prop->Name == PropertyToCheck->Name && Prop->Value == PropertyToCheck->Value)
        {
            //UE_LOG(LogTemp, Error, TEXT("HasProperty for %s and %s %s is true"), *Name, *PropertyToCheck->Name, *PropertyToCheck->Value);
            return true;
        }
    }
    //UE_LOG(LogTemp, Display, TEXT("%s does not contain property %s %s"), *Name, *PropertyToCheck->Name, *PropertyToCheck->Value);
    return false;
}

void UItem::AddPropertyOfType(EItemProperty Type)
{
    UItemProperty* NewProperty = NewObject<UItemProperty>(this, UItemProperty::StaticClass());
    if (NewProperty)
    {
        NewProperty->Type = Type;
        Properties.Add(NewProperty);
    }
}

void UItem::DeleteProperty(int32 Index)
{
    if (Properties.IsValidIndex(Index))
    {
        Properties.RemoveAt(Index);
    }

}

TArray<FString> UItem::GetSuperTypes()
{
    //UE_LOG(LogTemp, Error, TEXT("GetSuperTypes Called for %s"), *Name);
    TArray<FString> Types;
    Types.Add(Name);

    TArray<UItemProperty*> IsaProperties = GetPropertiesWithName("isa");
    for (UItemProperty* Prop : IsaProperties)
    {
        //UE_LOG(LogTemp, Error, TEXT("%s %s is in GetSuperTypes for %s"), *Prop->Name, *Prop->Value, *Name);
        if (Prop && !Prop->Value.IsEmpty())
        {
            Types.Add(Prop->Value);
        }
    }
    return Types;
}

bool UItem::Matches(UTerm* Term)
{
    //UE_LOG(LogTemp, Display, TEXT("Term in Matches() is %s"), *Term->Name);
    Term->ToPropPtrs();
    if (Term->Name != Name)
    {
        for (FString Type : GetSuperTypes())
        {
            //UE_LOG(LogTemp, Warning, TEXT("%s type in SuperTypes of %s"), *Type, *Name);
            if (Type == Term->Name)
            {
                return true;
            }
        }
    }
    else
    {
        return true;
    }

    //UE_LOG(LogTemp, Display, TEXT("Starting property loop check, Term %s has %d properties"), *Term->Name, Term->Properties.Num());
    for (UItemProperty* Property : Term->Properties)
    {
        if (Property)
        {
            //UE_LOG(LogTemp, Display, TEXT("Property in Matches() is %s %s"), *Property->Name, *Property->Value);

            if (HasProperty(Property))
            {

                //UE_LOG(LogTemp, Display, TEXT("HasProperty is true for %s"), *Name);
                return true;
            }
        }
    }
    return false;
}

bool UItem::IsOfType(UTerm* Term)
{
    if (Term->Name != this->Name)
    {
        bool Found = false;
        for (FString Type : this->GetSuperTypes())
        {
            if(Type == Term->Name)
            {
                Found = true;
            }
        }
        if (!Found)
        {
            return false;
        }
    }
    return true;
}

bool UItem::IsAccessible(TArray<UPuzzlePoint*> PPs, TArray<UItem*> ItemsInScene)
{
    if (Name == TEXT("Player"))
    {
        return true;
    }

    TArray<UItemProperty*> PointProperties = this->GetPropertiesWithName("PuzzlePoint");

    if (PointProperties.Num() == 0)
    {
        if(IsSpawnable() || ItemsInScene.Contains(this))
        {
            return true;
        }
        else if (GetPropertyWithName("InInventory") != nullptr && GetPropertyWithName("InInventory")->Value == TEXT("True"))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    for (UItemProperty* PointProp : PointProperties)
    {
        for (UPuzzlePoint* PP : PPs)
        {
            if (PointProp->Value == PP->Name && (IsSpawnable() || ItemsInScene.Contains(this)))
            {
                return true;
            }
        }
    }
    return false;
}

bool UItem::IsCarryable()
{
    UItemProperty* Carryable = GetPropertyWithName("carryable");
    if (Carryable == nullptr)
    {
        return false;
    }
    if (Carryable->Value == "False")
    {
        return false;
    }
    return true;
}

bool UItem::IsCopyable()
{
    UItemProperty* Copyable = GetPropertyWithName("copyable");
    if (Copyable == nullptr)
    {
        return false;
    }
    if (Copyable->Value == "False")
    {
        return false;
    }
    return true;
}

bool UItem::IsSpawnable()
{
    /* if (GetPropertyWithName("spawnable") == nullptr)
    {
        return true;
    }

    if (GetPropertyWithName("spawnable")->Value =="True")
    {
        return true;
    } */
    return true;
}

bool UItem::IsInspectable()
{
    TArray<UItemProperty*> InspectableProperties = GetPropertiesWithName("inspectable");
    if (InspectableProperties.Num() > 0 && InspectableProperties[0]->Value == "True")
    {
        return true;
    }
    else
    {
        return false;
    }
}

FString UItem::ToString() const
{
    return Name;
}


FVector UItem::GetNextSpawnPt()
{
    if (SpawnPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Item: %s - No spawn points."), *Name);
        return FVector::ZeroVector; // Return a default FVector if no spawn points are available
    }
    else 
    {
        int32 Random = FMath::RandRange(0, SpawnPoints.Num());
        TArray<AActor*> SpawnPtrs;
        for (TSubclassOf<AActor> SpawnPoint : SpawnPoints)
        {
            if (SpawnPoint)
            {
                AActor* SpawnPtr = NewObject<AActor>(this, SpawnPoint);
                SpawnPtrs.Add(SpawnPtr);
            }
        }

        if (SpawnPtrs[0] != nullptr)
        {
            FVector NextSpawnPt = SpawnPtrs[Random]->GetActorLocation();
            return NextSpawnPt;
        }
    }
    return FVector::ZeroVector;
}



//Overriden function from UObject, called after object (item) has been constructed and properties (from Item.h) of item have been initialised. 
//Done as UE5 doesn't allow a UObject to create a new UObject if first UObject has not yet been initialised because the ability to create the 
//new UObject can only be used once the original UObject has been initialised. Using the method below createss the new UObject after.
//Item and ItemProperty initialized first then new ItemProperty can be created within Item.

void UItem::PostInitProperties()
{
    Super::PostInitProperties();
    
    if (!HasAnyFlags(RF_ClassDefaultObject | RF_NeedLoad))
    {
        //ToPropPtrs();
        UItemProperty* Inspectable = NewObject<UItemProperty>(this, UItemProperty::StaticClass());
        if (Inspectable)
        {
            Properties.Add(Inspectable);
        }
    }
}

UItem* UItem::Clone()
{
    UItem* ClonedItem = NewObject<UItem>(GetOuter(), GetClass());

    ClonedItem->Name = this->Name;
    ClonedItem->Properties = this->Properties;
    ClonedItem->ItemPrefab = this->ItemPrefab;
    ClonedItem->Description = this->Description;
    ClonedItem->LongDescription = this->LongDescription;
    ClonedItem->SpawnPoints = this->SpawnPoints;
    ClonedItem->SpecificSpawnPoints = this->SpecificSpawnPoints;
    ClonedItem->SpawnLength = this->SpawnLength;
    ClonedItem->_index = this->_index;

    return ClonedItem;
}

void UItem::ToPropPtrs()
{
    Properties.Empty();
    for (TSubclassOf<UItemProperty> AssetClass : PropertiesBP)
    {
        if (AssetClass != nullptr)
        {
            UItemProperty* NewProp = NewObject<UItemProperty>(this, AssetClass);
            if (NewProp)
            {
                //UE_LOG(LogTemp, Warning, TEXT("For Item %s, prop %s %s added THIS IS FROM THE ITEM SCRIPT"), *Name, *NewProp->Name, *NewProp->Value);
                Properties.Add(NewProp);
            }
        }
    }
}