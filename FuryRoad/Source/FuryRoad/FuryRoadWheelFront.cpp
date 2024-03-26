// Copyright Epic Games, Inc. All Rights Reserved.

#include "FuryRoadWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UFuryRoadWheelFront::UFuryRoadWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}