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
    return OtherProperty->Name == Name && OtherProperty->Value == Value;
}

void UItemProperty::RemoveProperty()
{
    Name = TEXT("");
    Value = TEXT("");
}