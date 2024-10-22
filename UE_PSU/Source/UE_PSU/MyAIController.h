// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class UE_PSU_API AMyAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AMyAIController();

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	void RandMove();
private:
	FTimerHandle _timerHandle;

	UPROPERTY()
	class UBlackboardData* _bData;

	UPROPERTY()
	class UBehaviorTree* _bTree;
};
