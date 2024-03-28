// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FuryRoadPawn.h"
#include "FuryRoadSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class FURYROAD_API AFuryRoadSportsCar : public AFuryRoadPawn
{
	GENERATED_BODY()
	
public:

	AFuryRoadSportsCar();
};
