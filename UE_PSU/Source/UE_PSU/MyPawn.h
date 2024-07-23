// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class UE_PSU_API AMyPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _sm;

	UPROPERTY(VisibleAnywhere, Category = "Input")
	class UFloatingPawnMovement* _movement;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _moveAction;


public:
	// Sets default values for this pawn's properties
	AMyPawn();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* _lookAction;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void Move(const FInputActionValue& value);
	void Look(const FInputActionValue& value);

	void UpDown(float value);
	void RightLeft(float value);
};
