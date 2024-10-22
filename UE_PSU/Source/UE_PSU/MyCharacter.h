// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

//generated는 가장 아래에만 쓴다.
#include "MyCharacter.generated.h"

class UCameraComponent;
class UInputAction;
class UInputMappingContext;
class AMyUIManager;
struct FInputActionValue;

DECLARE_DELEGATE(DelegateTest1);
DECLARE_DELEGATE_OneParam(DelegateTestOneParam, int32);
DECLARE_DELEGATE_TwoParams(DelegateTestTwoParam, int32, int32);
DECLARE_MULTICAST_DELEGATE(Delegate_AttackEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_AttackHitEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_Death);

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

	virtual void Init();
	UFUNCTION()
	virtual void Disable();

	UFUNCTION()
	void Unpossess();

public:	
	//Attack function
	UFUNCTION()
	void OnAttackEnded(class UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	virtual void AttackHit();
	bool GetAttacked();
	virtual float TakeDamage(
		float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser
	) override;
	int32 GetcurHP();

	/*UFUNCTION()
	void PlayHitNiagara(float num);
	UFUNCTION()
	void PlayDeathNiagara();*/

	//Item function
	bool ItemGetter(class AMyItem* item);
	void DropAllItems();

	Delegate_AttackEnded _attackEndedDelegate;
	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = Event, meta = (AllowPrivateAccess = "true"))
	FDelegate_AttackHitEvent _attackHitEvent;
	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = Event, meta = (AllowPrivateAccess = "true"))
	FDelegate_Death _deathEvent;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool isAttacked = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _vertical = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _horizontal = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	int _curAttackSection = 0;
	
	//AttackHitPoint
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AttackHit, meta = (AllowPrivateAccess = "true"))
	FVector _hitPoint;

	//Animation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	class UMyAnimInstance* _animInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	bool _isActive = true;

	//Componenets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	class UMyStatComponent* _statCom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item, meta = (AllowPrivateAccess = "true"))
	class UMyInventoryComponent* _inventoryCom;

	//클래스를 담을 수 있는 자료형
	//TSubclassOf<class UMyInventoryUI>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = UI, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpBarWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	class AAIController* _aiController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AMyProjectile> _projectileClass;
};
