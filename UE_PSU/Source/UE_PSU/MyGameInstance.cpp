// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "MyUIManager.h"
#include "MyEffectManager.h"

UMyGameInstance::UMyGameInstance()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> dataTable(
		TEXT("/Script/Engine.DataTable'/Game/Data/MyStatDataTable.MyStatDataTable'")
	);
	if (dataTable.Succeeded())
	{
		_statTable = dataTable.Object;
		UE_LOG(LogTemp, Log, TEXT("StatTable load Complite"));
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> itemTable(
		TEXT("/Script/Engine.DataTable'/Game/Data/MyItemDataTable.MyItemDataTable'")
	);
	if (itemTable.Succeeded())
	{
		_itemTable = itemTable.Object;
		UE_LOG(LogTemp, Log, TEXT("ItemTable load Complite"));
	}
}

void UMyGameInstance::Init()
{
	Super::Init();

	auto statdata = GetStatDataByLevel(2);

	UE_LOG(LogTemp, Error, TEXT("Level : %d, Max hp : %d, Attack : %d"),
		statdata->level, statdata->maxHP, statdata->attack);

	auto itemdata = GetItemDataByCode(1);
	UE_LOG(LogTemp, Error, TEXT("Item Type : %d"), (int32)itemdata->itemType);

	FActorSpawnParameters params;

	params.Name = (TEXT("UIManager"));
	_uiManager = GetWorld()->SpawnActor<AMyUIManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);

	params.Name = (TEXT("EffectManager"));
	_effectManager = GetWorld()->SpawnActor<AMyEffectManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);
}

FMyStatData* UMyGameInstance::GetStatDataByLevel(int level)
{
	auto statData = _statTable->FindRow<FMyStatData>(*FString::FromInt(level), TEXT(""));

	return statData;
}

FMyItemData* UMyGameInstance::GetItemDataByCode(int code)
{
	auto itemData = _itemTable->FindRow<FMyItemData>(*FString::FromInt(code), TEXT(""));

	return itemData;
}
