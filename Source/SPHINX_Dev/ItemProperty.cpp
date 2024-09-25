#include "ItemProperty.h"

UItemProperty::UItemProperty()
{
    Type = EItemProperty::StringProperty; // Default type
    Name = TEXT("");
    Value = TEXT("");
}

UItemProperty::UItemProperty(EItemProperty NewType, const FString& NewName, const FString& NewValue)
{
    Type = NewType;
    Name = NewName;
    Value = NewValue;

    if (Type == EItemProperty::IntProperty)
        Value = TEXT("0");
}

bool UItemProperty::Equals(UItemProperty* OtherProperty)
{
    if (OtherProperty->Name == this->Name && OtherProperty->Value == this->Value)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s %s equals %s %s"), *OtherProperty->Name, *this->Name, *OtherProperty->Value, *this->Value);
        return true;
    }

    UE_LOG(LogTemp, Warning, TEXT("%s %s does not equal %s %s"), *OtherProperty->Name, *this->Name, *OtherProperty->Value, *this->Value);
    return false;
}

void UItemProperty::RemoveProperty()
{
    Name = TEXT("");
    Value = TEXT("");
}