// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionRPG_PracticeGameMode.h"
#include "ActionRPG_PracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActionRPG_PracticeGameMode::AActionRPG_PracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
