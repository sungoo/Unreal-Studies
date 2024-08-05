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
class AMyUIManager;

#define UIManager Cast<UMyGameInstance>(GetGameInstance())->GetUIManager()

UCLASS()
class UE_PSU_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	virtual void Init() override;

	FMyStatData* GetStatDataByLevel(int level);
	FMyItemData* GetItemDataByCode(int code);

	AMyUIManager* GetUIManager() { return _uiManager; }
private:
	UPROPERTY()
	class UDataTable* _statTable;
	UPROPERTY()
	class UDataTable* _itemTable;

	UPROPERTY()
	AMyUIManager* _uiManager;

	UPROPERTY()
	bool _bisInitial = false;
};
