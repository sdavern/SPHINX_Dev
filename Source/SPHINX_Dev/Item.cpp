#include "Item.h"
#include "Term.h"
#include "Area.h"
#include "PuzzlePoint.h"
#include "SpawnPoint.h"

UItem::UItem()
{
    Name = TEXT("NewItem");
    this->ToPropPtrs();
    
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
    if (!PropertyToCheck)
    {
        return false;
    }
    for (UItemProperty* Prop : Properties)
    {
        if (Prop && Prop->Name == PropertyToCheck->Name)
        {
            return true;
        }
    }
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
    TArray<FString> Types;
    Types.Add(Name);

    TArray<UItemProperty*> IsaProperties = GetPropertiesWithName("isa");
    for (UItemProperty* Prop : IsaProperties)
    {
        Types.Add(Prop->Value);
    }
    return Types;
}

bool UItem::Matches(UTerm* Term)
{
    if (Term->Name != Name)
    {
        bool Found = false;
        for (FString Type : GetSuperTypes())
        {
            //UE_LOG(LogTemp, Warning, TEXT("%s type in SuperTypes of %s"), *Type, *Name);
            if (Type == Term->Name)
            {
                Found = true;
            }
        }
        if (!Found) return false;
    }
    for (UItemProperty* Property : Term->Properties)
    {
        if (!HasProperty(Property))
        {
            return false;
        }
    }
    return true;
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
    if (GetPropertyWithName("spawnable") == nullptr)
    {
        return true;
    }

    if (GetPropertyWithName("spawnable")->Value =="True")
    {
        return true;
    }
    return false;
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
    for (TSubclassOf<UItemProperty> AssetClass : PropertiesBP)
    {
        if (AssetClass != nullptr)
        {
            UItemProperty* NewProp = NewObject<UItemProperty>(this, AssetClass);
            if (NewProp)
            {
                Properties.Add(NewProp);
            }
        }
    }
}