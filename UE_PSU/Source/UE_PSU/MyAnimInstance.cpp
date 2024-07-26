// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> am(
		TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyAnimMontage.MyAnimMontage'")
	);
	
	if (am.Succeeded())
	{
		_myAnimMontage = am.Object;
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
		_isattacking = myCharacter->GetAttacked();
		_vertical = _vertical + (myCharacter->_vertical - _vertical) * DeltaSeconds;
		_horizontal = _horizontal + (myCharacter->_horizontal - _horizontal) * DeltaSeconds;
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(_myAnimMontage))
	{
		Montage_Play(_myAnimMontage);

		AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());

		//���� ��û�� �Ѵ�.
		//myCharacter->_myDelegate1.BindUObject(this, &UMyAnimInstance::DelegateTest);
		//myCharacter->_myDelegate3.BindUObject(this, &UMyAnimInstance::DelegateTest2);
	}
}

void UMyAnimInstance::DelegateTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Delegate Test"));
}

void UMyAnimInstance::DelegateTest2(int32 hp, int32 mp)
{
	UE_LOG(LogTemp, Warning, TEXT("HP : %d , MP : %d"), hp, mp);
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
