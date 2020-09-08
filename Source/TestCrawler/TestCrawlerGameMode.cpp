// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestCrawlerGameMode.h"
#include "TestCrawlerPlayerController.h"
#include "TestCrawlerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestCrawlerGameMode::ATestCrawlerGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestCrawlerPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}