// Copyright Epic Games, Inc. All Rights Reserved.

#include "FuryRoadGameMode.h"
#include "FuryRoadPlayerController.h"

AFuryRoadGameMode::AFuryRoadGameMode()
{
	PlayerControllerClass = AFuryRoadPlayerController::StaticClass();
}
