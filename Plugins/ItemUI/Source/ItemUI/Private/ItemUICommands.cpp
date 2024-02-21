// Copyright Epic Games, Inc. All Rights Reserved.

#include "ItemUICommands.h"

#define LOCTEXT_NAMESPACE "FItemUIModule"

void FItemUICommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "ItemUI", "Bring up ItemUI window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
