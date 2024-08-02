// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyCharacter.h"
#include "MyItem.h"
#include "MyJumpButton.h"
#include "Components/WidgetComponent.h"

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

	/*_jumpButton = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	_jumpButton->SetupAttachment(RootComponent);
	_jumpButton->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> jumpButton(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyJumpButton_BP.MyJumpButton_BP_C'")
	);
	if (jumpButton.Succeeded())
	{
		_jumpUIClass = jumpButton.Class;
	}

	_inventoryUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("Inventory"));
	_inventoryUI->SetupAttachment(RootComponent);
	_inventoryUI->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> inventory(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInventoryUI_BP.MyInventoryUI_BP_C'")
	);
	if (inventory.Succeeded())
	{
		_inventoryUIClass = inventory.Class;
	}*/
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

		AMyCharacter* monster = GetWorld()->SpawnActor<AMyCharacter>(
			_monsterClass,
			location,
			rotator
		);

		//monster->ItemGetter(ammo);
		//ammo->SetItemHaver(monster);

		_monsters.Add(monster);
		_items.Add(ammo);
	}


	/*if (_jumpButton)
	{
		_jumpButton->SetWidgetClass(_jumpUIClass);
		_jumpButton->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		_jumpButton->SetDrawSize(FVector2D(1920, 1080));
		_jumpButton->SetVisibility(true);
		
	}
	if (_inventoryUI)
	{
		_inventoryUI->SetWidgetClass(_inventoryUIClass);
		_inventoryUI->SetRelativeLocation(FVector(0, 0, 0));
		_inventoryUI->SetDrawSize(FVector2D(1920, 1080));
		_inventoryUI->SetVisibility(true);
	}*/

}
