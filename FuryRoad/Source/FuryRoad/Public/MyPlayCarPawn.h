// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyPlayCarPawn.generated.h"


/**
 * 
 */
UCLASS()
class FURYROAD_API AMyPlayCarPawn : public AWheeledVehiclePawn
{
	GENERATED_BODY()

public:
	AMyPlayCarPawn();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	USpringArmComponent* pSpringArm;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	UCameraComponent* pCamera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UMaterial*> pMaterials;
};
