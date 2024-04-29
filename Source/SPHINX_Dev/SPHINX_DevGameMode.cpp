// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPHINX_DevGameMode.h"
#include "UObject/ConstructorHelpers.h"

ASPHINX_DevGameMode::ASPHINX_DevGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
