// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"

#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

AMyAIController::AMyAIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> bd(
		TEXT("/Script/AIModule.BlackboardData'/Game/BluePrint/AI/MyBlackboardData.MyBlackboardData'")
	);
	if (bd.Succeeded())
	{
		_bData = bd.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> bt(
		TEXT("/Script/AIModule.BehaviorTree'/Game/BluePrint/AI/MyBehaviorTree.MyBehaviorTree'")
	);
	if (bt.Succeeded())
	{
		_bTree = bt.Object;
	}
}

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();
	RandMove();
}

//컨트롤러가 폰에 빙의하는것
void AMyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//GetWorld()->GetTimerManager().SetTimer(_timerHandle, this, &AMyAIController::RandMove, 0.3f, true);
	UBlackboardComponent* temp = Blackboard;
	if (UseBlackboard(_bData, temp))
	{
		if (RunBehaviorTree(_bTree))
		{
			UE_LOG(LogTemp, Display, TEXT("behavior Tree"));
		}
	}

}

void AMyAIController::OnUnPossess()
{
	Super::OnUnPossess();

	GetWorld()->GetTimerManager().ClearTimer(_timerHandle);
}

void AMyAIController::RandMove()
{

	auto currentPawn = GetPawn();

	if (!currentPawn->IsValidLowLevel())
		return;

	auto naviSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if (naviSystem == nullptr)
		return;

	FNavLocation randLocation;

	if (naviSystem->GetRandomPointInNavigableRadius(currentPawn->GetActorLocation(), 100.0f, randLocation))
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, randLocation);
	}
	
}
