// Copyright Epic Games, Inc. All Rights Reserved.

#include "EgoVerseGameMode.h"
#include "EgoVerseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEgoVerseGameMode::AEgoVerseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
