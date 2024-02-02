// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionBtn.h"
#include "GameItem.h"


FString UActionBtn::AddSpacesBeforeCaps(const FString& InString)
{
    FString Result;
    for (int32 i = 0; i < InString.Len(); ++i)
    {
        if (FChar::IsUpper(InString[i]) && i > 0)
        {
            Result += TEXT(" ");
        }
        Result += InString[i];
    }
    return Result;
}


void UActionBtn::InitializeButton(UGameItem* GameItem, URule* Rule)
{
    LinkedGameItem = GameItem;
    LinkedRule = Rule;

    if (ActionText && Rule)
    {
        // Set the button's text
        FString FormattedActionText = AddSpacesBeforeCaps(Rule->Action);
        ActionText->SetText(FText::FromString(FormattedActionText));
    }

    if (ActionButton)
    {
        // Bind the OnButtonClicked function to the button's OnClicked event
        ActionButton->OnClicked.AddDynamic(this, &UActionBtn::OnButtonClicked);
    }
}

void UActionBtn::OnButtonClicked()
{
    if (LinkedGameItem && LinkedRule)
    {
        // Execute the rule associated with the button
        LinkedGameItem->ExecuteRule(LinkedRule);
    }
}