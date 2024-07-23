// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

struct FInputActionValue;

UCLASS()
class UE_PSU_API AMyPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _sm;

	UPROPERTY(VisibleAnywhere, Category = "Input")
	class UFloatingPawnMovement* _movement;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* _lookAction;

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Look(const FInputActionValue& value);

	void UpDown(float value);
	void RightLeft(float value);
};
