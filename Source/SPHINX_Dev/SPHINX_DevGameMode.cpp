// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPHINX_DevGameMode.h"
#include "UObject/ConstructorHelpers.h"

ASPHINX_DevGameMode::ASPHINX_DevGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<AAvatar> PlayerPawnClassFinder(TEXT("/Game/Characters/BP_Avatar"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
