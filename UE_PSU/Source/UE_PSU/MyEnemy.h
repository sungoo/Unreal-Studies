// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacter.h"
#include "MyEnemy.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API AMyEnemy : public AMyCharacter
{
	GENERATED_BODY()

public:
	AMyEnemy();
	
protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void Attack_AI();
private:
	
};
