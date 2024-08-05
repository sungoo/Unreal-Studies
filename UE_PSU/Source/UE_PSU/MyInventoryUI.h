// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyInventoryUI.generated.h"

/**
 해야할 일 : 몬스터에게선 UI를 빼버리자
 */
UCLASS()
class UE_PSU_API UMyInventoryUI : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void SetItem(int32 ItemId, int32 index);

private:
	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid;

public:
	UPROPERTY(meta = (BindWidget))
	class UButton* DropBtn;

private:
	UPROPERTY(VisibleAnywhere)
	TArray<class UButton*> _slotBtns;
	UPROPERTY(VisibleAnywhere)
	TArray<class UImage*> _slotBtnImages;
	UPROPERTY(VisibleAnywhere)
	class UTexture2D* _axe;
	UPROPERTY(VisibleAnywhere)
	class UTexture2D* _default;
};
