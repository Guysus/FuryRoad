// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRaceManager.generated.h"

UCLASS()
class FURYROAD_API AMyRaceManager : public AActor
{
	GENERATED_BODY()

public:
	static AMyRaceManager* instance;

private:
	int lapCount;
	
public:	
	// Sets default values for this actor's properties
	AMyRaceManager();

	//UFUNCTION(BlueprintCallable)
	AMyRaceManager* Instance();

	UFUNCTION(BlueprintCallable)
	static AMyRaceManager* GetInstance();

	UFUNCTION(BlueprintCallable)
	void AddLap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
