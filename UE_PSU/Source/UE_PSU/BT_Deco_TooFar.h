// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BT_Deco_TooFar.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API UBT_Deco_TooFar : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBT_Deco_TooFar();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
