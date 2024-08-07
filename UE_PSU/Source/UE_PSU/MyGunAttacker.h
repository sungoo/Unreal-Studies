// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPlayer.h"
#include "MyGunAttacker.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API AMyGunAttacker : public AMyPlayer
{
	GENERATED_BODY()
	
public:
	AMyGunAttacker();

protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	virtual void Init() override;
	virtual void Disable() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//input func
	void Focus(const FInputActionValue& value);
	void Release();
	void Shoot(const FInputActionValue& value);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _focusAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _shootAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool _focusing = false;
};
