// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionMenu.h"
#include "SPHINX_DevPlayerController.h"


UActionMenu::UActionMenu(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    AllInventoryButtons.SetNum(16);
    AllInventoryImages.SetNum(16);
    
}

void UActionMenu::NativeConstruct()
{
    Super::NativeConstruct();
    SetupUI();
    ActionButtons.SetNum(4);

    ActionButtons[0] = ActionButton;
    ActionButtons[1] = ActionButton_1;
    ActionButtons[2] = ActionButton_2;
    ActionButtons[3] = ActionButton_3;

    ActionButtons[0]->ActionText = ActionText;
    ActionButtons[1]->ActionText = ActionText_1;
    ActionButtons[2]->ActionText = ActionText_2;
    ActionButtons[3]->ActionText = ActionText_3;

    DeactivateInventoryMenu();
    DeactivateActionMenu();

}

void UActionMenu::ChangeButtonText(UTextBlock* ButtonText, const FString& NewText)
{
    UE_LOG(LogTemp, Display, TEXT("ChangeButtonText called, trying to change text to %s"), *NewText);
    if (ButtonText)
    {
        ButtonText->SetText(FText::FromString(NewText));
    }
}

void UActionMenu::ChangeLowerText(const FString& NewText)
{
    if (LowerText)
    {
        LowerText->SetText(FText::FromString(NewText));
    }
}

void UActionMenu::ChangeUpperText(const FString& NewText)
{
    if (UpperText)
    {
        UpperText->SetText(FText::FromString(NewText));
    }
}

void UActionMenu::ActivateInventoryMenu()
{
    if (Background) Background->SetOpacity(1.0);
    if (UpperText) UpperText->SetOpacity(1.0);
    if (LowerText) LowerText->SetOpacity(1.0);

    for (UImage* Image : AllInventoryImages)
    {
        if (Image) Image->SetOpacity(1.0);
    }

    for (UInventoryButton* IB : AllInventoryButtons)
    {
        if (IB) IB->SetIsEnabled(true);
    }
}

void UActionMenu::DeactivateInventoryMenu()
{
    if (Background) Background->SetOpacity(0.0);
    if (UpperText) UpperText->SetOpacity(0.0);
    if (LowerText) LowerText->SetOpacity(0.0);

    for (UImage* Image : AllInventoryImages)
    {
        if (Image) Image->SetOpacity(0.0);
    }

    for (UInventoryButton* IB : AllInventoryButtons)
    {
        if (IB) IB->SetIsEnabled(false);
    }
}

void UActionMenu::SetupUI()
{
    AllInventoryButtons[0] = IB1;
    AllInventoryButtons[1] = IB2;
    AllInventoryButtons[2] = IB3;
    AllInventoryButtons[3] = IB4;
    AllInventoryButtons[4] = IB5;
    AllInventoryButtons[5] = IB6;
    AllInventoryButtons[6] = IB7;
    AllInventoryButtons[7] = IB8;
    AllInventoryButtons[8] = IB9;
    AllInventoryButtons[9] = IB10;
    AllInventoryButtons[10] = IB11;
    AllInventoryButtons[11] = IB12;
    AllInventoryButtons[12] = IB13;
    AllInventoryButtons[13] = IB14;
    AllInventoryButtons[14] = IB15;
    AllInventoryButtons[15] = IB16;
    
    AllInventoryImages[0] = IB1_Image;
    AllInventoryImages[1] = IB2_Image;
    AllInventoryImages[2] = IB3_Image;
    AllInventoryImages[3] = IB4_Image;
    AllInventoryImages[4] = IB5_Image;
    AllInventoryImages[5] = IB6_Image;
    AllInventoryImages[6] = IB7_Image;
    AllInventoryImages[7] = IB8_Image;
    AllInventoryImages[8] = IB9_Image;
    AllInventoryImages[9] = IB10_Image;
    AllInventoryImages[10] = IB11_Image;
    AllInventoryImages[11] = IB12_Image;
    AllInventoryImages[12] = IB13_Image;
    AllInventoryImages[13] = IB14_Image;
    AllInventoryImages[14] = IB15_Image;
    AllInventoryImages[15] = IB16_Image;
}

void UActionMenu::ActivateActionMenu()
{
    if (BackBottom) BackBottom->SetOpacity(1.0);
    if (BackMiddle) BackMiddle->SetOpacity(1.0);
    if (BackTop) BackTop->SetOpacity(1.0);
    if (Image_0) Image_0->SetOpacity(1.0);
    if (Image_2) Image_2->SetOpacity(1.0);

    if (HoldButton) HoldButton->SetIsEnabled(true);
    if (InspectButton) InspectButton->SetIsEnabled(true);
    if (InventoryButton) InventoryButton->SetIsEnabled(true);
    if (ExitButton) ExitButton->SetIsEnabled(true);

    if (InspectText) InspectText->SetOpacity(1.0);
    if (ExitText) ExitText->SetOpacity(1.0);
    if (NameText) NameText->SetOpacity(1.0);
    if (AddText) AddText->SetOpacity(1.0);
    if (HoldText) HoldText->SetOpacity(0.0);
    
    /* if (ActionButton) ActionButton->SetIsEnabled(true);
    if (ActionButton_1) ActionButton_1->SetIsEnabled(true);
    if (ActionButton_2) ActionButton_2->SetIsEnabled(true);
    if (ActionButton_3) ActionButton_3->SetIsEnabled(true);

    if (ActionText) ActionText->SetOpacity(1.0);
    if (ActionText_1) ActionText_1->SetOpacity(1.0);
    if (ActionText_2) ActionText_2->SetOpacity(1.0);
    if (ActionText_3) ActionText_3->SetOpacity(1.0); */
      
}

void UActionMenu::DeactivateActionMenu()
{
    if (BackBottom) BackBottom->SetOpacity(0.0);
    if (BackMiddle) BackMiddle->SetOpacity(0.0);
    if (BackTop) BackTop->SetOpacity(0.0);
    if (Image_0) Image_0->SetOpacity(0.0);
    if (Image_2) Image_2->SetOpacity(0.0);

    if (HoldButton) HoldButton->SetIsEnabled(false);
    if (InspectButton) InspectButton->SetIsEnabled(false);
    if (InventoryButton) InventoryButton->SetIsEnabled(false);
    if (ExitButton) ExitButton->SetIsEnabled(false);

    if (InspectText) InspectText->SetOpacity(0.0);
    if (ExitText) ExitText->SetOpacity(0.0);
    if (NameText) NameText->SetOpacity(0.0);
    if (AddText) AddText->SetOpacity(0.0);
    if (HoldText) HoldText->SetOpacity(0.0);
    
    if (ActionButton) ActionButton->SetIsEnabled(false);
    if (ActionButton_1) ActionButton_1->SetIsEnabled(false);
    if (ActionButton_2) ActionButton_2->SetIsEnabled(false);
    if (ActionButton_3) ActionButton_3->SetIsEnabled(false);

    if (ActionText) ActionText->SetOpacity(0.0);
    if (ActionText_1) ActionText_1->SetOpacity(0.0);
    if (ActionText_2) ActionText_2->SetOpacity(0.0);
    if (ActionText_3) ActionText_3->SetOpacity(0.0);
}