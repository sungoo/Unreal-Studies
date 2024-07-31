// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"
#include "MyCharacter.h"
#include "MyStatComponent.h"
#include "MyGameInstance.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	_meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(
		TEXT("/Script/Engine.StaticMesh'/Game/Weapon_Pack/Mesh/Weapons/Weapons_Kit/SM_Axe.SM_Axe'")
	);
	if (sm.Succeeded())
	{
		_meshComponent->SetStaticMesh(sm.Object);
	}

	_meshComponent->SetupAttachment(RootComponent);
	_trigger->SetupAttachment(_meshComponent);

	_meshComponent->SetCollisionProfileName(TEXT("MyItem"));
	_trigger->SetCollisionProfileName(TEXT("MyItem"));
	_trigger->SetSphereRadius(60.0f);
}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();
	SetItemAndInit();
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnMyChararcterOverlap);
}

void AMyItem::Init()
{
	_itemHaver = nullptr;
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = false;
}

void AMyItem::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;
}

void AMyItem::OnMyChararcterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromWeep, const FHitResult& SweepResult)
{
	_itemHaver = Cast<AMyCharacter>(OtherActor);
	if (_itemHaver)
	{
		UE_LOG(LogTemp, Log, TEXT("%s Collision"), *_itemHaver->GetName());
		
		if (_itemHaver->ItemGetter(this))
		{
			ItemEffect(true);
			Disable();
		}
	}
}

void AMyItem::Release(FVector releasePOS, FRotator rotator)
{
	ItemEffect(false);
	SetActorLocation(releasePOS);
	SetActorRotation(rotator);
	Init();
}

void AMyItem::SetItemAndInit(int32 itemcode)
{
	auto myGameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());

	if (myGameInstance)
	{
		FMyItemData* data = myGameInstance->GetItemDataByCode(itemcode);

		_itemType = data->itemType;
		_statAddValue = data->statAddValue;

		Init();
	}
}

void AMyItem::ItemEffect(bool isGain)
{
	switch (_itemType)
	{
	case TYPE::NONE:
		break;
	case TYPE::ATK:
		if(isGain)
			_itemHaver->_statCom->AddAttackDamage(_statAddValue);
		else
			_itemHaver->_statCom->AddAttackDamage(-_statAddValue);
		break;
	case TYPE::HP:
		if(isGain)
			_itemHaver->_statCom->AddCurHP(_statAddValue);
		else
			_itemHaver->_statCom->AddCurHP(-_statAddValue);
		break;
	default:
		break;
	}
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

