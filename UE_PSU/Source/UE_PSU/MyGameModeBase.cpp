// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyCharacter.h"

AMyGameModeBase::AMyGameModeBase()
{
	//Pawn�� ���赵�� �޴´�.
	DefaultPawnClass = AMyPawn::StaticClass();

	static ConstructorHelpers::FClassFinder<AMyCharacter> player(
		TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyCharacter_BP.MyCharacter_BP_C'")
	);

	if (player.Succeeded())
	{
		DefaultPawnClass = player.Class;
	}

	static ConstructorHelpers::FClassFinder<AMyCharacter> enemy(
		TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyEnemy_BP.MyEnemy_BP_C'")
	);

	if (enemy.Succeeded())
	{
		_monsterClass = enemy.Class;
	}
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector location = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() + FVector(300, 0.0f, 0.0f);
	FRotator rotator = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorRotation();

	for (int i = 0; i < 3; i++)
	{
		location.X += 100.0f * i;
		AMyCharacter* monster = GetWorld()->SpawnActor<AMyCharacter>(
			_monsterClass,
			location,
			rotator
		);

		_monsters.Add(monster);
	}
}
