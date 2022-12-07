// Copyright Epic Games, Inc. All Rights Reserved.

#include "SLN_Gemini_NSEGameMode.h"
#include "SLN_Gemini_NSECharacter.h"
#include "UObject/ConstructorHelpers.h"

ASLN_Gemini_NSEGameMode::ASLN_Gemini_NSEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
