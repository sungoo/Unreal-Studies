// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

DECLARE_MULTICAST_DELEGATE(ItemDelegate);

UCLASS()
class UE_PSU_API AMyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	void Init();
	void Disable();

	UFUNCTION()
	//UPrimitiveComponent, OnComponentBeginOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult
	void OnMyChararcterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromWeep, const FHitResult& SweepResult);

public:
	void Release(FVector releasePOS, FRotator rotator = FRotator::ZeroRotator);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _meshComponent;
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* _trigger;

	//Delegate
	ItemDelegate ItemGetter;
};
