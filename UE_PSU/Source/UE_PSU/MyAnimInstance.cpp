// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"

UMyAnimInstance::UMyAnimInstance()
{
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//진짜 중요!!				//Dynamic_cast
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
		// 애니메이션이 종료되었을 때 실행할 코드를 여기에 작성합니다.
		// 예를 들어, 플레이어의 멤버 변수를 변경하는 코드를 작성할 수 있습니다.
		myCharacter->AttackEnd();
	}
}
