// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "MyGameInstance.h"

#include "MyUIManager.h"
#include "MyInventoryUI.h"

#include "MyAnimInstance.h"
#include "MyPlayerController.h"
#include "MyItem.h"
#include "MyStatComponent.h"
#include "MyInventoryComponent.h"
#include "MyHpBar.h"

#include "MyAIController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/Button.h"

#include "GameFramework/Controller.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"
//particle


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//TODO
	//Skeletal Mesh
	// /Script/Engine.SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC'
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> sm(
		TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonRevenant/Characters/Heroes/Revenant/Meshes/Revenant.Revenant'")
	);

	if (sm.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(sm.Object);
	}

	GetMesh()->SetRelativeLocationAndRotation(
		FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f)
	);

	//Stat
	_statCom = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
	//Inventory
	_inventoryCom = CreateDefaultSubobject<UMyInventoryComponent>(TEXT("Inventory"));
	
	/*Widget*/
	//hpbar
	_hpBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	_hpBarWidget->SetupAttachment(GetMesh());
	_hpBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	_hpBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 230.0f));

	static ConstructorHelpers::FClassFinder<UUserWidget> hpBar(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyHpBar_BP.MyHpBar_BP_C'")
	);
	if (hpBar.Succeeded())
	{
		_hpBarWidget->SetWidgetClass(hpBar.Class);
	}

	APawn::AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	/*static ConstructorHelpers::FObjectFinder<> pt(
		TEXT("/Script/Niagara.NiagaraSystem'/Game/MegaMagicVFXBundle/VFX/MagicalExplosionsVFX/VFX/MagicalExplosion/Systems/N_MagicalExplosion.N_MagicalExplosion'")
	);
	if (pt.Succeeded())
	{
		_vfx = pt.Object;
	}*/
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	Init();
}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (_animInstance->IsValidLowLevel())
	{
		_animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
		_animInstance->_attackDelegate.AddUObject(this, &AMyCharacter::AttackHit);
		_animInstance->_deathDelegate.AddUObject(this, &AMyCharacter::Disable);
	}

	_statCom->SetLevelAndInit(1);

	_hpBarWidget->InitWidget();
	auto hpBar = Cast<UMyHpBar>(_hpBarWidget->GetUserWidgetObject());
	if (hpBar)
	{
		_statCom->_hpChangedDelegate.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	}
}

void AMyCharacter::Init()
{
	_statCom->Reset();

	_isActive = true;
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = true;

	_statCom->_deathDelegate.AddUObject(this, &AMyCharacter::Unpossess);

	if (_aiController && GetController() == nullptr)
	{
		auto ai_Controller = Cast<AMyAIController>(_aiController);
		if(ai_Controller)
			ai_Controller->Possess(this);
	}
}

void AMyCharacter::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;

	Unpossess();
}

void AMyCharacter::Unpossess()
{
	if (GetController() == nullptr)
		return;

	GetController()->UnPossess();
}

float AMyCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	//TODO
	//1. hp -= damage
	//2. 공격자 이름 출력
	float damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	float damaged = -_statCom->AddCurHP(-Damage);

	if (_animInstance != nullptr && _statCom->GetCurHP() > 0)
	{
		_animInstance->PlayDamagedMontage();
	}

	if (_animInstance != nullptr && _statCom->GetCurHP() <= 0)
	{
		_statCom->AddCurHP(-999);// _hp = 0
		_isActive = false;
		_animInstance->PlayDeathMontage();
		DropAllItems();
	}
	return damage;
}

int32 AMyCharacter::GetcurHP()
{
	return _statCom->GetCurHP();
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Log, TEXT("Attack Ended!"));
	isAttacked = false;

	_attackEndedDelegate.Broadcast();
}

void AMyCharacter::AttackHit()
{
	//하고싶으면 하기
	// 1. 히트스캔으로 공격하기. AttackRange는 본인 마음대로.
	// DebugDraw 까지
	//UE_LOG(LogTemp, Warning, TEXT("Attack Hit!!"));
	//충돌처리
	FHitResult hitResult;
	//본인은 무시..
	FCollisionQueryParams params(NAME_None, false, this);
	
	float attackRange = 1000.0f;
	float attackRadius = 80.0f;
	float harfheight = attackRange * 0.5f;
	FVector foward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector::UpVector, foward);
	FVector center = GetActorLocation() + foward * harfheight;

	FVector start = GetActorLocation();
	FVector end = start + foward * harfheight;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		start,
		end,
		quat,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(attackRadius, harfheight),
		params
	);

	FQuat rot = (FQuat)(GetActorRotation());

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		UE_LOG(LogTemp, Log, TEXT("HitActor : %s"), *hitResult.GetActor()->GetName());
	
		//Todo : Takedamage
		FDamageEvent damageEvent;
		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		//UGameplayStatics::ApplyDamage(hitResult.GetActor(), _atk, GetController(), this, nullptr);
	}

	DrawDebugCapsule(
		GetWorld(), center, harfheight, attackRadius, quat, drawColor, false, 2.0f
	);
	/*DrawDebugSphere(
		GetWorld(), center, attackRadius, 12, drawColor, false, 2.0f
	);*/
}

bool AMyCharacter::ItemGetter(AMyItem* item)
{
	return _inventoryCom->PutItem(item);
}

void AMyCharacter::DropAllItems()
{
	while (!_inventoryCom->isInventoryEmpty())
	{
		_inventoryCom->DropItem();
	}
}

bool AMyCharacter::GetAttacked()
{
	return isAttacked;
}

