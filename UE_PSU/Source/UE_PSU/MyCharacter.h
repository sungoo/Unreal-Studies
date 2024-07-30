// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_DELEGATE(DelegateTest1);
DECLARE_DELEGATE_OneParam(DelegateTestOneParam, int32);
DECLARE_DELEGATE_TwoParams(DelegateTestTwoParam, int32, int32);

UCLASS()
class UE_PSU_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	void Init();
	UFUNCTION()
	void Disable();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(
		float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser
	) override;

	UFUNCTION()
	void OnAttackEnded(class UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void AttackHit();

protected:
	void Move(const FInputActionValue& value);
	void Look(const FInputActionValue& value);
	void JumpAct(const FInputActionValue& value);
	void AttackA(const FInputActionValue& value);
	void Focus(const FInputActionValue& value);
	
public:
	bool GetAttacked();

public:

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _lookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* _attackAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool isAttacked = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _vertical = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _horizontal = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	int _curAttackSection = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _curhp = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _maxhp = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _atk = 30.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	bool _isActive = true;

	//Animation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	class UMyAnimInstance* _animInstance;

	//Camera
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* _springArm;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* _camera;

	DelegateTest1 _myDelegate1;
	DelegateTestOneParam _myDelegate2;
	DelegateTestTwoParam _myDelegate3;

};
