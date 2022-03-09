// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnknownSteampunkGameMode.h"
#include "UnknownSteampunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnknownSteampunkGameMode::AUnknownSteampunkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
