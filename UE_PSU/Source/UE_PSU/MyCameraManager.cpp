// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCameraManager.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMyCameraManager::AMyCameraManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyCameraManager::SetCameraObject(FString name)
{

}

// Called when the game starts or when spawned
void AMyCameraManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCameraManager::MoveToNextCam()
{
}

