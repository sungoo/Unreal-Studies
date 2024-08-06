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
#include "MyJumpButton.h"
#include "MyAIController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/Button.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
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

	//컨트롤러에 따른 회전 막음
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//움직임에 따라 회전하게 변경
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate


	//�ڽ� ����
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	//��Ӱ��� ����
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	//��ġ �ʱ�ȭ
	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));

	//카메라에 따라선 돌아가지 않게
	_springArm->bUsePawnControlRotation = true;
	_camera->bUsePawnControlRotation = false;

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
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	_aiController = Cast<AMyAIController>(GetController());

	Init();


	auto invenUI = Cast<UMyGameInstance>(GetGameInstance())->GetUIManager()->GetInvenUI();

	if (invenUI)
	{
		_inventoryCom->_itemAddedEvent.AddUObject(invenUI, &UMyInventoryUI::SetItem);
		invenUI->DropBtn->OnClicked.AddDynamic(_inventoryCom, &UMyInventoryComponent::DropItem);
	}
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

	_statCom->SetLevelAndInit(_level);

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

	if (_aiController && GetController() == nullptr)
	{
		_aiController->Possess(this);
	}
}

void AMyCharacter::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;

	GetController()->UnPossess();
	UnPossessed();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

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
		
		// DropItem
		EnhancedInputComponent->BindAction(_dropItemAction, ETriggerEvent::Started, this, &AMyCharacter::DropItem);
	
		// OpenUI
		EnhancedInputComponent->BindAction(_InventoryAction, ETriggerEvent::Started, this, &AMyCharacter::OpenUI);
	}
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
		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		//UGameplayStatics::ApplyDamage(hitResult.GetActor(), _atk, GetController(), this, nullptr);
	}

	DrawDebugSphere(
		GetWorld(), center, attackRadius, 12, drawColor, false, 2.0f
	);
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

void AMyCharacter::TurnOffInvenUI()
{
	UIManager->GetInvenUI()->SetVisibility(ESlateVisibility::Hidden);
}

void AMyCharacter::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr&&!isAttacked)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		//_vertical = MovementVector.Y;
		//_horizontal = MovementVector.X;

		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMyCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
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

void AMyCharacter::DropItem(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		_inventoryCom->DropItem();
	}
}

void AMyCharacter::OpenUI(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		if (GetController())
		{
			auto pController = Cast<AMyPlayerController>(GetController());

			if (!InventoryOpen)
			{
				InventoryOpen = true;
				//UIManager->GetInvenUI()->SetVisibility(ESlateVisibility::Visible);
				pController->ShowUI();
			}
			else
			{
				InventoryOpen = false;
				//UIManager->GetInvenUI()->SetVisibility(ESlateVisibility::Hidden);
				pController->HideUI();
			}
		}
	}
}

void AMyCharacter::Attack_AI()
{
	if (isAttacked == false && _animInstance != nullptr)
	{
		isAttacked = true;
		_animInstance->PlayAttackMontage();

		_curAttackSection %= 3;
		_curAttackSection++;

		_animInstance->JumpToSection(_curAttackSection);
	}
}

bool AMyCharacter::GetAttacked()
{
	return isAttacked;
}

