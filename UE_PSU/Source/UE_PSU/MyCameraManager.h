// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCameraManager.generated.h"

UCLASS()
class UE_PSU_API AMyCameraManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCameraManager();

protected:
	void SetCameraObject(FString name);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MoveToNextCam();
protected:
	TArray<class UCameraComponent*> _camArray;
	TArray<class USpringArmComponent*> _armArray;
};
