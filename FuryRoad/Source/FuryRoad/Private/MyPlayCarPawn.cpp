// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayCarPawn.h"

AMyPlayCarPawn::AMyPlayCarPawn()
{
	pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	pSpringArm->SetupAttachment(GetMesh());
	pSpringArm->TargetArmLength = 650.0f;

	pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	pCamera->SetupAttachment(pSpringArm);

	GetMesh()->SetSimulatePhysics(true);
}
