// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();

	virtual void BeginPlay() override;

	UPROPERTY()
	UClass* _monsterClass;
	UPROPERTY()
	TArray<class AMyCharacter*> _monsters;

	UPROPERTY()
	UClass* _ItemClass;
	UPROPERTY()
	TArray<class AMyItem*> _items;

	////Button
	//UPROPERTY()
	//TSubclassOf<UUserWidget> _jumpUIClass;
	////UClass* _jumpUIClass;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	//class UWidgetComponent* _jumpButton;

	//UPROPERTY()
	//TSubclassOf<UUserWidget> _inventoryUIClass;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	//class UWidgetComponent* _inventoryUI;

};
