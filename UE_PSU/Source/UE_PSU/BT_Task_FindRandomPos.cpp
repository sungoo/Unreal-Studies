// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Task_FindRandomPos.h"

#include "NavigationSystem.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBT_Task_FindRandomPos::UBT_Task_FindRandomPos()
{
	NodeName = TEXT("FindRandPos");
}

EBTNodeResult::Type UBT_Task_FindRandomPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);

	//random pos
	auto currentPawn = OwnerComp.GetAIOwner()->GetPawn();

	if (!currentPawn->IsValidLowLevel())
		return EBTNodeResult::Type::Failed;

	auto naviSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if (naviSystem == nullptr)
		return EBTNodeResult::Type::Failed;

	auto blackboard = OwnerComp.GetBlackboardComponent();
	if (blackboard == nullptr)
		return EBTNodeResult::Type::Failed;

	FNavLocation randLocation;

	while (naviSystem->GetRandomPointInNavigableRadius(currentPawn->GetActorLocation(), 500.0f, randLocation))
	{
		//calc spPos to randPos dist
		FVector randpos = randLocation.Location;
		FVector spPos = blackboard->GetValueAsVector(FName(TEXT("SpawnPoint")));
		float range = blackboard->GetValueAsFloat(FName(TEXT("Range")));
		float dist = FVector::Dist(spPos, randpos);
		
		FVector actorPos = currentPawn->GetActorLocation();
		float actDist = FVector::Dist(spPos, actorPos);

		if (actDist >= range)
		{
			blackboard->SetValueAsVector(FName(TEXT("RandPos")), spPos); 
			return EBTNodeResult::Type::Succeeded; 
		}

		if (dist >= range)
			continue;

		blackboard->SetValueAsVector(FName(TEXT("RandPos")), randLocation);
		return EBTNodeResult::Type::Succeeded;
	}

	return result;
}
