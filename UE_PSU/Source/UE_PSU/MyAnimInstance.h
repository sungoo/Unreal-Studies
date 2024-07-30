// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(AttackDelegate);
DECLARE_MULTICAST_DELEGATE(DeathDelegate);

UCLASS()
class UE_PSU_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMyAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	void PlayAttackMontage();
	void PlayDamagedMontage();
	void PlayDeathMontage();

	void JumpToSection(int32 sectionIndex);

	UFUNCTION()
	void AnimNotify_AttackHit();
	UFUNCTION()
	void AnimNotify_DeathEnd();

	AttackDelegate _attackDelegate;
	DeathDelegate _deathDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	float _speed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	bool _isfalling;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	bool _isdead;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	int32 _hp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	float _vertical;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	float _horizontal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = true))
	bool _isattacking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage, meta = (AllowPrivateAccess = true))
	class UAnimMontage* _myAttackMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage, meta = (AllowPrivateAccess = true))
	class UAnimMontage* _myDamagedMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage, meta = (AllowPrivateAccess = true))
	class UAnimMontage* _myDeathMontage;

};
