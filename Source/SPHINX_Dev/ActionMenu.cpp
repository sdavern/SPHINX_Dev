// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionMenu.h"
#include "SPHINX_DevPlayerController.h"

void UActionMenu::NativeConstruct()
{
    Super::NativeConstruct();

    ActionButtons.SetNum(4);

    ActionButtons[0] = ActionButton;
    ActionButtons[1] = ActionButton_1;
    ActionButtons[2] = ActionButton_2;
    ActionButtons[3] = ActionButton_3;

    ActionButtons[0]->ActionText = ActionText;
    ActionButtons[1]->ActionText = ActionText_1;
    ActionButtons[2]->ActionText = ActionText_2;
    ActionButtons[3]->ActionText = ActionText_3;

    
    
}

void UActionMenu::ChangeButtonText(UTextBlock* ButtonText, const FString& NewText)
{
    UE_LOG(LogTemp, Display, TEXT("ChangeButtonText called, trying to change text to %s"), *NewText);
    if (ButtonText)
    {
        ButtonText->SetText(FText::FromString(NewText));
    }
}

