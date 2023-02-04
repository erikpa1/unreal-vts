// Copyright Epic Games, Inc. All Rights Reserved.

#include "unreal_vtsGameMode.h"
#include "unreal_vtsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aunreal_vtsGameMode::Aunreal_vtsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
