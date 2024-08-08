// Fill out your copyright notice in the Description page of Project Settings.

#include "MyStatComponent.h"

#include "MyCharacter.h"
#include "MyHpBar.h"

#include "MyGameInstance.h"

// Sets default values for this component's properties
UMyStatComponent::UMyStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyStatComponent::Reset()
{
	_curhp = _maxhp;
	_atk = _atk_default;
}

void UMyStatComponent::SetHp(int32 hp)
{
	//curHp의 수정은 이 함수를 통해서 이루어진다
	//이 함수가 호출될 때 마다 hpBar가 바뀐다.
	_curhp = hp;
	if (_curhp <= 0)
	{
		_curhp = 0;
		_deathDelegate.Broadcast();
		_deathDelegate.Clear();
	}
	if (_curhp >= _maxhp)
		_curhp = _maxhp;

	float ratio = HpRatio();
	_hpChangedDelegate.Broadcast(ratio);
}

void UMyStatComponent::SetLevelAndInit(int level)
{
	auto myGameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());

	if (myGameInstance)
	{
		FMyStatData data = *myGameInstance->GetStatDataByLevel(level);
		_maxhp = data.maxHP;
		_atk_default = data.attack;

		Reset();

		GetOwner()->GetName();
		UE_LOG(LogTemp, Log, TEXT("%s... hp : %d, attackDamage : %d")
			, *GetOwner()->GetName(), _maxhp, _atk_default);
	}
}

int UMyStatComponent::AddCurHP(float amount)
{
	int beforeHP = _curhp;

	int afterHp = beforeHP + amount;

	SetHp(afterHp);

	return afterHp - beforeHP;
}

void UMyStatComponent::AddAttackDamage(float amount)
{
	_atk += amount;
	UE_LOG(LogTemp, Warning, TEXT("ATK UP : %d"), GetAttackDamage());
}

