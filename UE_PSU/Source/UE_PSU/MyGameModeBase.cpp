// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyCharacter.h"
#include "MyItem.h"

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

	static ConstructorHelpers::FClassFinder<AMyItem> item(
		TEXT("/Script/CoreUObject.Class'/Script/UE_PSU.MyItem'")
	);
	if (item.Succeeded())
	{
		_ItemClass = item.Class;
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
		AMyItem* ammo = GetWorld()->SpawnActor<AMyItem>(
			_ItemClass,
			location,
			rotator
		);

		ammo->SetItemAndInit(1);
		monster->ItemGetter(ammo);
		ammo->SetItemHaver(monster);

		_monsters.Add(monster);
		_items.Add(ammo);
	}
}
