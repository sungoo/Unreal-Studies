// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectile.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AMyProjectile::AMyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	_collider->InitCapsuleSize(70, 20);

	_meshCom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	RootComponent = _meshCom;
	_collider->SetupAttachment(_meshCom);

	_moveCom = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));

}

// Called when the game starts or when spawned
void AMyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator cuRotation = GetActorRotation();

	cuRotation.Yaw += DeltaTime * 100.0f;
	cuRotation.Pitch += DeltaTime * 100.0f;

	SetActorRotation(cuRotation);
}

void AMyProjectile::FireInDirection(const FVector& ShootDirection)
{
	_moveCom->Velocity = ShootDirection * _moveCom->InitialSpeed;
}

