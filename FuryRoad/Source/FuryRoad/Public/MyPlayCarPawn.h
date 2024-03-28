// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
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

	TObjectPtr<UChaosVehicleMovementComponent> pChaosVehicleMovement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* pInputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* pThrottleAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* pHandbrakeAction;

private:
	void Throttle(const FInputActionValue& value);
	void Handbrake(const FInputActionValue& value);

protected:
	void SetupPlayerInputComponent(UInputComponent* playerInputComponent) override;
};
