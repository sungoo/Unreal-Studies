// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"

UMyAnimInstance::UMyAnimInstance()
{
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
		if (_isattacking)
			UE_LOG(LogTemp, Log, TEXT("attack true"));
	}
}

void UMyAnimInstance::OnAnimationEnded(UAnimMontage* Montage, bool bInterrupted)
{
	AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	if (Montage->GetName() == "Cast")
	{
		// �ִϸ��̼��� ����Ǿ��� �� ������ �ڵ带 ���⿡ �ۼ��մϴ�.
		// ���� ���, �÷��̾��� ��� ������ �����ϴ� �ڵ带 �ۼ��� �� �ֽ��ϴ�.
		myCharacter->AttackEnd();
	}
}
