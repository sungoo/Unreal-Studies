// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Task_Attack.h"

#include "MyEnemy.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyAIController.h"
#include "AIController.h"

UBT_Task_Attack::UBT_Task_Attack()
{
	NodeName = TEXT("Attack");
}

EBTNodeResult::Type UBT_Task_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto currentCharacter = Cast<AMyEnemy>(OwnerComp.GetAIOwner()->GetCharacter());

	if (currentCharacter == nullptr)
		return EBTNodeResult::Type::Failed;

	currentCharacter->Attack_AI();
	_isAttacking = true;

	currentCharacter->_attackEndedDelegate.AddLambda(
		[this]()->void
		{
			this->_isAttacking = false;
		}
	);

	return result;
}

void UBT_Task_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (_isAttacking == false)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
