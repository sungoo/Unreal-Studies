// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyStatComponent.h"
#include "MyItem.h"

#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	virtual void Init() override;

	FMyStatData* GetStatDataByLevel(int level);
	FMyItemData* GetItemDataByCode(int code);
private:
	UPROPERTY()
	class UDataTable* _statTable;
	class UDataTable* _itemTable;
};
