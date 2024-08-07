// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Datatable.h"
#include "MyStatComponent.generated.h"


USTRUCT()
struct FMyStatData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 attack;

};

DECLARE_MULTICAST_DELEGATE_OneParam(HpChanged, float);
DECLARE_MULTICAST_DELEGATE(DeathDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_PSU_API UMyStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Reset();

	void SetHp(int32 hp);
	int32 GetCurHP() { return _curhp; }
	int32 GetAttackDamage() { return _atk; }
	float HpRatio() const { return _curhp / (float)_maxhp; }

	void SetLevelAndInit(int level);

	int AddCurHP(float amount);
	void AddAttackDamage(float amount);
	bool IsDead() { return _curhp <= 0; }

	HpChanged _hpChangedDelegate;
	DeathDelegate _deathDelegate;

	//Stats
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _curhp = 1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _maxhp = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _atk_default = 10;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _atk = 0;

};
