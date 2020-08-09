// Copyright Epic Games, Inc. All Rights Reserved.

#include "UsefulExamplesGameMode.h"
#include "UsefulExamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUsefulExamplesGameMode::AUsefulExamplesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
