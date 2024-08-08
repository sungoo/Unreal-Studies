// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Deco_TooFar.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "MyAIController.h"
#include "MyCharacter.h"
#include "MyPlayer.h"

UBT_Deco_TooFar::UBT_Deco_TooFar()
{
	NodeName = TEXT("TooFar");
}

bool UBT_Deco_TooFar::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool result = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto currentPawn = OwnerComp.GetAIOwner()->GetPawn();
	auto target = Cast<AMyPlayer>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName(TEXT("Target"))));
	auto blackboard = OwnerComp.GetBlackboardComponent();

	if (currentPawn == nullptr || target == nullptr || blackboard == nullptr)
		return false;

	FVector spPos = blackboard->GetValueAsVector(FName(TEXT("SpawnPoint")));
	FVector targetPos = target->GetTargetLocation();
	float range = blackboard->GetValueAsFloat(FName(TEXT("Range")));
	float dist = FVector::Dist(spPos, targetPos);

	//float distance = target->GetDistanceTo(currentPawn);

	return dist > range;

	return result;
}
