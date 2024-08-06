// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BT_Task_Attack.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API UBT_Task_Attack : public UBTTaskNode
{
	GENERATED_BODY()

	UBT_Task_Attack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	bool _isAttacking = false;
};
