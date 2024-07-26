// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyAnimInstance.h"

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
	
	auto animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	//��Ÿ�ְ� ���� ��, _isAttacked�� false�� �ٲٱ�
	animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
	animInstance->_attackDelegate.AddUObject(this, &AMyCharacter::AttackHit);
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//_myDelegate1.ExecuteIfBound();
	//HP : 50, MP : 30
	//_myDelegate3.ExecuteIfBound(50, 30);

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

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Log, TEXT("Attack Ended!"));
	isAttacked = false;
}

void AMyCharacter::AttackHit()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Hit!!"));
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

	if (isPressed&&isAttacked == false)
	{
		isAttacked = true;
		auto myAnimI = GetMesh()->GetAnimInstance();
		Cast<UMyAnimInstance>(myAnimI)->PlayAttackMontage();

		_curAttackSection %= 3;
		_curAttackSection++;

		Cast<UMyAnimInstance>(myAnimI)->JumpToSection(_curAttackSection);
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

