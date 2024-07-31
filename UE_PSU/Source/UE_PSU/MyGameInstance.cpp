// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

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
}

void UMyGameInstance::Init()
{
	Super::Init();

	auto statdata = GetStatDataByLevel(2);

	UE_LOG(LogTemp, Error, TEXT("Level : %d, Max hp : %d, Attack : %d"),
		statdata->level, statdata->maxHP, statdata->attack);
}

FMyStatData* UMyGameInstance::GetStatDataByLevel(int level)
{
	auto statData = _statTable->FindRow<FMyStatData>(*FString::FromInt(level), TEXT(""));

	return statData;
}
