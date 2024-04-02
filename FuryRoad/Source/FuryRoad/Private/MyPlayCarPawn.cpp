// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayCarPawn.h"

AMyPlayCarPawn::AMyPlayCarPawn()
{
	pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	pSpringArm->SetupAttachment(GetMesh());
	pSpringArm->TargetArmLength = 650.0f;
	pSpringArm->SocketOffset.Z = 150.0f;
	pSpringArm->bDoCollisionTest = false;
	pSpringArm->bInheritPitch = false;
	pSpringArm->bInheritRoll = false;
	pSpringArm->bEnableCameraRotationLag = true;
	pSpringArm->CameraRotationLagSpeed = 2.0;
	pSpringArm->CameraLagMaxDistance = 50.0f;

	pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	pCamera->SetupAttachment(pSpringArm);

	GetMesh()->SetSimulatePhysics(true);

	pChaosVehicleMovement = CastChecked<UChaosWheeledVehicleMovementComponent>(GetVehicleMovement());
}

void AMyPlayCarPawn::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &AMyPlayCarPawn::OnCheckPointOverlap);
	//OnActorHit
}

void AMyPlayCarPawn::Tick(float delta)
{
	Super::Tick(delta);

	//float cameraYaw = pSpringArm->GetRelativeRotation().Yaw;
	//cameraYaw = FMath::FInterpTo(cameraYaw, 0.0f, delta, 1.0f);

	//pSpringArm->SetRelativeRotation(FRotator(0.0f, cameraYaw, 0.0f));
}

void AMyPlayCarPawn::Throttle(const FInputActionValue& value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Throttle"));
	//float throttleValue = value.Get<float>();

	pChaosVehicleMovement->SetThrottleInput(value.Get<float>());
}

void AMyPlayCarPawn::Handbrake(const FInputActionValue& value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Handbrake"));
	pChaosVehicleMovement->SetHandbrakeInput(value.Get<bool>());
}

void AMyPlayCarPawn::Steering(const FInputActionValue& value)
{
	pChaosVehicleMovement->SetSteeringInput(value.Get<float>());
}

void AMyPlayCarPawn::Reverse(const FInputActionValue& value)
{
	
}

void AMyPlayCarPawn::SetupPlayerInputComponent(UInputComponent* playerInputComponent)
{
	Super::SetupPlayerInputComponent(playerInputComponent);

	if (APlayerController* playerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
		{
			subsystem->ClearAllMappings();
			subsystem->AddMappingContext(pInputMappingContext, 0);
		}
	}
	
	if (UEnhancedInputComponent* inputComponent = Cast<UEnhancedInputComponent>(playerInputComponent))
	{
		inputComponent->BindAction(pThrottleAction, ETriggerEvent::Triggered, this, &AMyPlayCarPawn::Throttle);
		inputComponent->BindAction(pThrottleAction, ETriggerEvent::Completed, this, &AMyPlayCarPawn::Throttle);

		inputComponent->BindAction(pHandbrakeAction, ETriggerEvent::Triggered, this, &AMyPlayCarPawn::Handbrake);
		inputComponent->BindAction(pHandbrakeAction, ETriggerEvent::Completed, this, &AMyPlayCarPawn::Handbrake);

		inputComponent->BindAction(pSteeringAction, ETriggerEvent::Triggered, this, &AMyPlayCarPawn::Steering);
		
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input Error"));
	}
}

void AMyPlayCarPawn::OnCheckPointOverlap(AActor* overlapActor, AActor* otherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("overlappedActor is : %s"), *FString(otherActor->GetName()));
}
