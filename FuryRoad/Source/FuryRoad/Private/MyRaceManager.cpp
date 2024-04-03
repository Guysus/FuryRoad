// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRaceManager.h"

AMyRaceManager* AMyRaceManager::instance = nullptr;

// Sets default values
AMyRaceManager::AMyRaceManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Instance();
}

AMyRaceManager* AMyRaceManager::Instance()
{
	if (instance == nullptr /*&& instance != this*/)
	{
		//Destroy(this);
	/*}
	else
	{*/
		instance = this;
	}

	return instance;
}

AMyRaceManager* AMyRaceManager::GetInstance()
{
	return instance;
}

void AMyRaceManager::AddLap()
{
	UE_LOG(LogTemp, Warning, TEXT("LAP"));
}

// Called when the game starts or when spawned
void AMyRaceManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyRaceManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

