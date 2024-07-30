// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> am(
		TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyAttackMontage.MyAttackMontage'")
	);
	
	if (am.Succeeded())
	{
		_myAttackMontage = am.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> dmg(
		TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyDamagedMontage.MyDamagedMontage'")
	);
	if (dmg.Succeeded())
	{
		_myDamagedMontage = dmg.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> death(
		TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyDeathMontage.MyDeathMontage'")
	);
	if (death.Succeeded())
	{
		_myDeathMontage = death.Object;
	}
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//��¥ �߿�!!				//Dynamic_cast
	AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	if (myCharacter != nullptr)
	{
		_speed = myCharacter->GetVelocity().Size();
		_isfalling = myCharacter->GetMovementComponent()->IsFalling();
		_hp = myCharacter->_curhp;
		_isdead = (myCharacter->_curhp <= 0);
		_isattacking = myCharacter->GetAttacked();
		_vertical = _vertical + (myCharacter->_vertical - _vertical) * DeltaSeconds;
		_horizontal = _horizontal + (myCharacter->_horizontal - _horizontal) * DeltaSeconds;
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(_myAttackMontage))
	{
		Montage_Play(_myAttackMontage);

		//AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());

		//���� ��û�� �Ѵ�.
		//myCharacter->_myDelegate1.BindUObject(this, &UMyAnimInstance::DelegateTest);
		//myCharacter->_myDelegate3.BindUObject(this, &UMyAnimInstance::DelegateTest2);
	}
}

void UMyAnimInstance::PlayDamagedMontage()
{
	if (!Montage_IsPlaying(_myDamagedMontage))
	{
		Montage_Play(_myDamagedMontage);
	}
}

void UMyAnimInstance::PlayDeathMontage()
{
	if (!Montage_IsPlaying(_myDeathMontage))
	{
		Montage_Play(_myDeathMontage);
	}
}



void UMyAnimInstance::JumpToSection(int32 sectionIndex)
{
	FName sectionName = FName(*FString::Printf(TEXT("Attack%d"), sectionIndex));
	Montage_JumpToSection(sectionName);
}

void UMyAnimInstance::AnimNotify_AttackHit()
{
	_attackDelegate.Broadcast();
	UE_LOG(LogTemp, Warning, TEXT("Attack Hit!"));
}

void UMyAnimInstance::AnimNotify_DeathEnd()
{
	_deathDelegate.Broadcast();
	UE_LOG(LogTemp, Error, TEXT("Death!"));
}
