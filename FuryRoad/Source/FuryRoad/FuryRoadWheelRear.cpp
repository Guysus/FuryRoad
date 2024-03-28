// Copyright Epic Games, Inc. All Rights Reserved.

#include "FuryRoadWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UFuryRoadWheelRear::UFuryRoadWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}