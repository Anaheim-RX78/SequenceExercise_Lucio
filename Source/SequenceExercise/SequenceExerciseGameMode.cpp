// Copyright Epic Games, Inc. All Rights Reserved.

#include "SequenceExerciseGameMode.h"
#include "SequenceExerciseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASequenceExerciseGameMode::ASequenceExerciseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
