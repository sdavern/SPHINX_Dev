// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueBox.h"
#include "SPHINX_DevPlayerController.h"

void UDialogueBox::NativeConstruct()
{
    Super::NativeConstruct();
    
}

void UDialogueBox::ChangeInspectText(UTextBlock* InspectBlock, const FString& NewText)
{
    if (InspectBlock)
    {
        InspectBlock->SetText(FText::FromString(NewText));
    }
}