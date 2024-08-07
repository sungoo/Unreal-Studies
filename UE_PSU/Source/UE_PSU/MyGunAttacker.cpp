// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGunAttacker.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "DrawDebugHelpers.h"

AMyGunAttacker::AMyGunAttacker()
{
}

void AMyGunAttacker::BeginPlay()
{
	Super::BeginPlay();
}

void AMyGunAttacker::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AMyGunAttacker::Init()
{
	Super::Init();
}

void AMyGunAttacker::Disable()
{
	Super::Disable();
}

void AMyGunAttacker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyGunAttacker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Focus & release
		EnhancedInputComponent->BindAction(_focusAction, ETriggerEvent::Started, this, &AMyGunAttacker::Focus);
		EnhancedInputComponent->BindAction(_focusAction, ETriggerEvent::Completed, this, &AMyGunAttacker::Release);
	
		//Shoot
		EnhancedInputComponent->BindAction(_shootAction, ETriggerEvent::Started, this, &AMyGunAttacker::Shoot);

	}
}

void AMyGunAttacker::Focus(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed && !_focusing)
	{
		_focusing = true;
		UE_LOG(LogTemp, Log, TEXT("Focus..."));

		FVector Start = GetActorLocation();
		FVector End = Start + (GetActorForwardVector() * 1000.0f); // 1000 유닛 앞까지 레이캐스트

		DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 10.0f);
	}
}

void AMyGunAttacker::Release()
{
	_focusing = false;
}

void AMyGunAttacker::Shoot(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed && _focusing)
	{
		FVector Start = GetActorLocation();
		FVector End = Start + (GetActorForwardVector() * 1000.0f); // 1000 유닛 앞까지 레이캐스트

		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1.0f);
	}
}
