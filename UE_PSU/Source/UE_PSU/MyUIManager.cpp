// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUIManager.h"

#include "MyInventoryUI.h"

// Sets default values
AMyUIManager::AMyUIManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	static ConstructorHelpers::FClassFinder<UMyInventoryUI> inventory(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInventoryUI_BP.MyInventoryUI_BP_C'")
	);
	if (inventory.Succeeded())
	{
		_inventoryWidget = CreateWidget<UMyInventoryUI>(GetWorld(), inventory.Class);
	}
}

// Called when the game starts or when spawned
void AMyUIManager::BeginPlay()
{
	Super::BeginPlay();
	
	//Todo : InvenWidget
	if (_inventoryWidget)
	{
		_inventoryWidget->SetDesiredSizeInViewport(FVector2D(1980, 1080));
		_inventoryWidget->AddToViewport();
		_inventoryWidget->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Inven Widget did not created"));
	}
}

// Called every frame
void AMyUIManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

