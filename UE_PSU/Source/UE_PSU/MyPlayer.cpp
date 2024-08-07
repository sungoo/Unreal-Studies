// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "MyGameInstance.h"
#include "MyUIManager.h"
#include "MyInventoryUI.h"
#include "MyAnimInstance.h"
#include "MyPlayerController.h"
#include "MyInventoryComponent.h"

#include "Camera/CameraComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/Button.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

AMyPlayer::AMyPlayer()
{
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
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	Init();

	auto invenUI = Cast<UMyGameInstance>(GetGameInstance())->GetUIManager()->GetInvenUI();

	if (invenUI)
	{
		_inventoryCom->_itemAddedEvent.AddUObject(invenUI, &UMyInventoryUI::SetItem);
		invenUI->DropBtn->OnClicked.AddDynamic(_inventoryCom, &UMyInventoryComponent::DropItem);
	}
}

void AMyPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AMyPlayer::Init()
{
	Super::Init();
}

void AMyPlayer::Disable()
{
	Super::Disable();
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
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
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyPlayer::Look);

		// Jumpping
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyPlayer::JumpAct);

		// Attacking
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Triggered, this, &AMyPlayer::AttackA);

		// DropItem
		EnhancedInputComponent->BindAction(_dropItemAction, ETriggerEvent::Started, this, &AMyPlayer::DropItem);

		// OpenUI
		EnhancedInputComponent->BindAction(_InventoryAction, ETriggerEvent::Started, this, &AMyPlayer::OpenUI);
	}
}

void AMyPlayer::TurnOffInvenUI()
{
	UIManager->GetInvenUI()->SetVisibility(ESlateVisibility::Hidden);
}


void AMyPlayer::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr && !isAttacked)
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

void AMyPlayer::Look(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMyPlayer::JumpAct(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed && !isAttacked)
	{
		ACharacter::Jump();
		UE_LOG(LogTemp, Log, TEXT("jumped"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("notjumped"));
	}
}

void AMyPlayer::AttackA(const FInputActionValue& value)
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

void AMyPlayer::DropItem(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		Super::_inventoryCom->DropItem();
	}
}

void AMyPlayer::OpenUI(const FInputActionValue& value)
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