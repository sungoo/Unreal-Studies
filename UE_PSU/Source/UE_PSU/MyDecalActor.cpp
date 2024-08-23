// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDecalActor.h"

#include "Engine/DecalActor.h"
#include "Components/DecalComponent.h"

void AMyDecalActor::BeginPlay()
{
	Super::BeginPlay();

	GetDecal()->DecalSize.Z = _minSize.X;
	GetDecal()->DecalSize.Y = _minSize.Y;
}

void AMyDecalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetDecal()->DecalSize.Z >= _maxSize.X)
	{
		_feildAttackDelegate.Execute(GetActorLocation());
		GetDecal()->DecalSize.Z = _minSize.X;
		GetDecal()->DecalSize.Y = _minSize.Y;

		return;
	}

	GetDecal()->DecalSize.Z += DeltaTime;
	GetDecal()->DecalSize.Y += DeltaTime;
}
