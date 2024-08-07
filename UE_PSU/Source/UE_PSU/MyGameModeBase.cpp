// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyGameInstance.h"

#include "MyUIManager.h"
#include "MyInventoryUI.h"

#include "MyCharacter.h"
#include "MyPlayer.h"
#include "MyEnemy.h"
#include "MyItem.h"
#include "MyJumpButton.h"

#include "MyAIController.h"

#include "Components/WidgetComponent.h"

AMyGameModeBase::AMyGameModeBase()
{
	//Pawn�� ���赵�� �޴´�.
	DefaultPawnClass = AMyPlayer::StaticClass();

	static ConstructorHelpers::FClassFinder<AMyPlayer> player(
		TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyGunAttacker_BP.MyGunAttacker_BP_C'")
	);
	if (player.Succeeded())
	{
		DefaultPawnClass = player.Class;
	}

	static ConstructorHelpers::FClassFinder<AMyCharacter> enemy(
		TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyNewEnemy_BP.MyNewEnemy_BP_C'")
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
		AMyItem* ammo = GetWorld()->SpawnActor<AMyItem>(
			_ItemClass,
			location,
			rotator
		);
		ammo->SetItemAndInit(1);

		location.Y += 2000.0f * i - 2000.0f;

		AMyCharacter* monster = GetWorld()->SpawnActor<AMyCharacter>(
			_monsterClass,
			location,
			rotator
		);

		monster->AIControllerClass = AMyAIController::StaticClass();

		_monsters.Add(monster);
		_items.Add(ammo);
	}

}
