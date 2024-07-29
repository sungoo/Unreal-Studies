// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyAnimInstance.h"
#include "Engine/DamageEvents.h"

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
		FVector(0.0f, 0.0f, 88.0f), FRotator(0.0f, -90.0f, 0.0f)
	);

	//�ڽ� ����
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	//��Ӱ��� ����
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	//��ġ �ʱ�ȭ
	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));
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
	//��Ÿ�ְ� ���� ��, _isAttacked�� false�� �ٲٱ�
	_animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
	_animInstance->_attackDelegate.AddUObject(this, &AMyCharacter::AttackHit);
}

void AMyCharacter::Init()
{
	_curhp = _maxhp;
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!_isActive)
	{
		GetMesh()->SetVisibility(false);
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);

		// Jumpping
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyCharacter::JumpAct);
	
		// Attacking
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Triggered, this, &AMyCharacter::AttackA);
		

	}
}

float AMyCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	//TODO
	//1. hp -= damage
	//2. 공격자 이름 출력
	float damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	_curhp -= damage;

	UE_LOG(LogTemp, Warning, TEXT("Damaged by %s : %f   hp : %d"),*DamageCauser->GetName(), damage, _curhp);

	if (_curhp <= 0)
	{
		_curhp = 0;
		_isActive = false;
	}
	return damage;
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Log, TEXT("Attack Ended!"));
	isAttacked = false;
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
	
	float attackRange = 500.0f;
	float attackRadius = 80.0f;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * attackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(attackRadius),
		params
	);

	FVector vec = GetActorForwardVector() * attackRange;
	FVector center = GetActorLocation() + vec * 0.5f;

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		UE_LOG(LogTemp, Log, TEXT("HitActor : %s"), *hitResult.GetActor()->GetName());
	
		//Todo : Takedamage
		FDamageEvent damageEvent;
		hitResult.GetActor()->TakeDamage(_atk, damageEvent, GetController(), this);
		//UGameplayStatics::ApplyDamage(hitResult.GetActor(), _atk, nullptr, this, nullptr);
	}

	DrawDebugSphere(
		GetWorld(), center, attackRadius, 12, drawColor, false, 2.0f
	);
}

void AMyCharacter::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr&&!isAttacked)
	{
		_vertical = MovementVector.Y;
		_horizontal = MovementVector.X;

		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AMyCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
	}
}

void AMyCharacter::JumpAct(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed&&!isAttacked)
	{
		ACharacter::Jump();
		UE_LOG(LogTemp, Log, TEXT("jumped"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("notjumped"));
	}
}

void AMyCharacter::AttackA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed && isAttacked == false && _animInstance != nullptr)
	{
		isAttacked = true;
		_animInstance->PlayAttackMontage();

		_curAttackSection %= 3;
		_curAttackSection++;

		_animInstance->JumpToSection(_curAttackSection);
	}
}

void AMyCharacter::Focus(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		UE_LOG(LogTemp, Log, TEXT("Focus..."));
	}
}

bool AMyCharacter::GetAttacked()
{
	return isAttacked;
}

