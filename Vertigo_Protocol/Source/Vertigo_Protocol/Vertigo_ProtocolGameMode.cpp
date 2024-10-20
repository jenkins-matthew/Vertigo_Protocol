// Copyright Epic Games, Inc. All Rights Reserved.

#include "Vertigo_ProtocolGameMode.h"
#include "Vertigo_ProtocolHUD.h"
#include "Vertigo_ProtocolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVertigo_ProtocolGameMode::AVertigo_ProtocolGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVertigo_ProtocolHUD::StaticClass();
}
