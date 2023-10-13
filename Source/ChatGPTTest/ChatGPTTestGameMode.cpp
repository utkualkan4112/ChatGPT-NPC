// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChatGPTTestGameMode.h"
#include "ChatGPTTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChatGPTTestGameMode::AChatGPTTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
