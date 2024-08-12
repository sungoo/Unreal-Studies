// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEffectManager.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AMyEffectManager::AMyEffectManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CreateParticle(
		"Shoot",
		"/Script/Engine.ParticleSystem'/Game/ParagonRevenant/FX/Particles/Revenant/Abilities/Mark/FX/P_Revenant_Mark_Hit.P_Revenant_Mark_Hit'"
	);
	CreateParticle(
		"Death",
		"/Script/Engine.ParticleSystem'/Game/ParagonRevenant/FX/Particles/Revenant/P_Revenant_Recall_Start.P_Revenant_Recall_Start'"
	);
}

void AMyEffectManager::CreateParticle(FString name, FString path)
{
	static ConstructorHelpers::FObjectFinder<UParticleSystem> explosion(*path);
	{
		if (explosion.Succeeded())
		{
			UParticleSystem* particle = explosion.Object;
			_pTable.Add(name, particle);
		}
	}
}

// Called when the game starts or when spawned
void AMyEffectManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEffectManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyEffectManager::Play(FString name, FVector location, FRotator rotator)
{
	if (_pTable.Contains(name) == false)
		return;

	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		_pTable[name],
		location,
		rotator
	);
}

