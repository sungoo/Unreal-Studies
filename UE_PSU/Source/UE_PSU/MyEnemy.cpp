// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEnemy.h"

#include "MyAIController.h"
#include "MyAnimInstance.h"
#include "MyStatComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AMyEnemy::AMyEnemy()
{
}

void AMyEnemy::BeginPlay()
{
	Super::BeginPlay();

	_aiController = Cast<AAIController>(GetController());
}

void AMyEnemy::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	GetCharacterMovement()->MaxWalkSpeedCrouched = 400.0f;
}

void AMyEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyEnemy::Attack_AI()
{
	if (_statCom->IsDead())
		return;
	if (isAttacked == false && _animInstance != nullptr)
	{
		isAttacked = true;
		_animInstance->PlayAttackMontage();

		_curAttackSection %= 3;
		_curAttackSection++;

		_animInstance->JumpToSection(_curAttackSection);
	}
}
