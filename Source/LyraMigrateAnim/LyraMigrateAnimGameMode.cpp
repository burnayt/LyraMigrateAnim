// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraMigrateAnimGameMode.h"
#include "LyraMigrateAnimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALyraMigrateAnimGameMode::ALyraMigrateAnimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
