// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "DaBooHag.h"
#include "DaBooHagGameMode.h"
#include "DaBooHagHUD.h"
#include "DaBooHagCharacter.h"

ADaBooHagGameMode::ADaBooHagGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADaBooHagHUD::StaticClass();
}
