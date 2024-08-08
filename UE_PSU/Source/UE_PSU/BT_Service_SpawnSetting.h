// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BT_Service_SpawnSetting.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API UBT_Service_SpawnSetting : public UBTService
{
	GENERATED_BODY()
	
public:
	UBT_Service_SpawnSetting();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
