// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionBtn.h"
#include "GameItem.h"

UActionBtn::UActionBtn()
{

}

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
    SetIsEnabled(true);
    LinkedGameItem = GameItem;
    LinkedRule = Rule;
    UE_LOG(LogTemp, Warning, TEXT("ActionButton LinkedGameItem is %s and LinkedRule is %s"), *LinkedGameItem->Name, *LinkedRule->Action);

    this->SetRenderOpacity(1.0f);

    if (ActionText)
    {
        FSlateColor TextColor = FSlateColor(FLinearColor(0.0f, 0.011612f, 0.051269f));
        ActionText->SetColorAndOpacity(TextColor);
    }
    

   /*  if (ActionText && Rule)
    {
        // Set the button's text
        FString FormattedActionText = AddSpacesBeforeCaps(Rule->Action);
        ActionText->SetText(FText::FromString(FormattedActionText));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ActionText is null"));
    } */
    

    OnClicked.AddDynamic(this, &UActionBtn::OnButtonClicked);
    
}

void UActionBtn::OnButtonClicked()
{
    if (LinkedGameItem && LinkedRule)
    {
        UE_LOG(LogTemp, Display, TEXT("LinkedGameItem is %s and LinkedRule is %s"), *LinkedGameItem->Name, *LinkedRule->Name);
        UE_LOG(LogTemp, Error, TEXT("ActionButton clicked"));
        // Execute the rule associated with the button
        LinkedGameItem->ExecuteRule(LinkedRule);
    }
}