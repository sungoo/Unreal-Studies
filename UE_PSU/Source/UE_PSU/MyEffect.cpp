// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEffect.h"

#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"

// Sets default values
AMyEffect::AMyEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//allocate
	//Actor => SpawnWorld
	//Component => CreateDefaultSubobject
	//UObject => NewObject<T> ==> 프로그래머가 직접 지워줘야함 >> 안 씀
	_particleCom = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	_naiagaraCom = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Naiagara"));
	
	RootComponent = _particleCom;
	_naiagaraCom->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyEffect::BeginPlay()
{
	Super::BeginPlay();
	
	_particleCom->OnSystemFinished.AddDynamic(this, &AMyEffect::End);
	End(_particleCom);

	_naiagaraCom->OnSystemFinished.AddDynamic(this, &AMyEffect::EndNiagara);
	EndNiagara(_naiagaraCom);
}

// Called every frame
void AMyEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyEffect::Play(FVector location, FRotator rotator)
{
	if (_particleCom->IsActive() || _naiagaraCom->IsActive())
		return;

	SetActorLocationAndRotation(location, rotator);
	_particleCom->ActivateSystem();
	_naiagaraCom->ActivateSystem();
}

void AMyEffect::End(UParticleSystemComponent* particle)
{
	particle->DeactivateSystem();

}

void AMyEffect::EndNiagara(UNiagaraComponent* particle)
{
	if (particle)
		particle->Deactivate();
}

bool AMyEffect::IsPlaying()
{
	if (_particleCom->IsActive())
		return true;
	if (_naiagaraCom->IsActive())
		return true;

	return false;
}

