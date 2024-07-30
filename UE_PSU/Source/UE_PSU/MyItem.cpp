// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"
#include "MyCharacter.h"
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
	Init();
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnMyChararcterOverlap);
}

void AMyItem::Init()
{
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
	auto myCharacter = Cast<AMyCharacter>(OtherActor);
	if (myCharacter)
	{
		UE_LOG(LogTemp, Log, TEXT("%s Collision"), *myCharacter->GetName());
		//충돌시 atk 증가
		//아이템 사라짐
		//G를 누르면 획득한 아이템 버리기
		if(myCharacter->ItemGetter(this))
			Disable();
	}
}

void AMyItem::Release(FVector releasePOS)
{
	SetActorLocation(releasePOS);
	Init();
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

