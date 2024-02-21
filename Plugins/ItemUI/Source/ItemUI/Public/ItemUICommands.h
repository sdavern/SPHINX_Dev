// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ItemUIStyle.h"

class FItemUICommands : public TCommands<FItemUICommands>
{
public:

	FItemUICommands()
		: TCommands<FItemUICommands>(TEXT("ItemUI"), NSLOCTEXT("Contexts", "ItemUI", "ItemUI Plugin"), NAME_None, FItemUIStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};