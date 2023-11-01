// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "starcelue4GameMode.h"
#include "starcelue4Character.h"
#include "UObject/ConstructorHelpers.h"

Astarcelue4GameMode::Astarcelue4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
