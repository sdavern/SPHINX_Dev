// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionMenu.h"
#include "SPHINX_DevPlayerController.h"

void UActionMenu::NativeConstruct()
{
    Super::NativeConstruct();
    
}

void UActionMenu::ChangeButtonText(UTextBlock* ButtonText, const FString& NewText)
{
    if (ButtonText)
    {
        ButtonText->SetText(FText::FromString(NewText));
    }
}

