// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Service_SpawnSetting.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "Engine/OverlapResult.h"

#include "MyAIController.h"
#include "MyCharacter.h"
#include "MyPlayer.h"

#include "DrawDebugHelpers.h"

UBT_Service_SpawnSetting::UBT_Service_SpawnSetting()
{
	NodeName = TEXT("SpawnSetting");
}

void UBT_Service_SpawnSetting::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto currentPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (currentPawn == nullptr)
		return;

	FVector center = currentPawn->GetActorLocation();
	float canMoveRadius = 2000.0f;


	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp)
	{
		bool bIsUpdated = BlackboardComp->GetValueAsBool(FName("IsSPupdated"));
		if (!bIsUpdated)
		{
			BlackboardComp->SetValueAsVector(FName("SpawnPoint"), center);
			BlackboardComp->SetValueAsFloat(FName("Range"), canMoveRadius);
			BlackboardComp->SetValueAsBool(FName("IsSPupdated"), true);
		}
	}
}
