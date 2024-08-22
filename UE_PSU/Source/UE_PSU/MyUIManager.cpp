// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUIManager.h"

#include "MyInventoryUI.h"

// Sets default values
AMyUIManager::AMyUIManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	static ConstructorHelpers::FClassFinder<UUserWidget> crosshair(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyCrossHair.MyCrossHair_C'")
	);
	if (crosshair.Succeeded())
	{
		auto temp = crosshair.Class;
		_crossHair = CreateWidget<UUserWidget>(GetWorld(), crosshair.Class);
	}

	static ConstructorHelpers::FClassFinder<UMyInventoryUI> inventory(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInventoryUI_BP.MyInventoryUI_BP_C'")
	);
	if (inventory.Succeeded())
	{
		auto temp = inventory.Class;
		_inventoryWidget = CreateWidget<UMyInventoryUI>(GetWorld(), inventory.Class);
	}

	_widgets.Add(_crossHair);
	_widgets.Add(_inventoryWidget);
}

// Called when the game starts or when spawned
void AMyUIManager::BeginPlay()
{
	Super::BeginPlay();
	
	OpenWidget(UIType::CrossHair);
	OpenWidget(UIType::Inventory);
}

// Called every frame
void AMyUIManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyUIManager::OpenWidget(UIType type)
{
	int32 typeNum = (int32)type;

	if (_widgets.Num() <= typeNum)
		return;

	_widgets[typeNum]->SetVisibility(ESlateVisibility::Visible);
	_widgets[typeNum]->AddToViewport(typeNum);

}

void AMyUIManager::CloseWidget(UIType type)
{
	int32 typeNum = (int32)type;

	if (_widgets.Num() <= typeNum)
		return;

	_widgets[typeNum]->SetVisibility(ESlateVisibility::Hidden);
	_widgets[typeNum]->RemoveFromViewport();
}

void AMyUIManager::CloseAll()
{
	for (auto widget : _widgets)
	{
		widget->SetVisibility(ESlateVisibility::Hidden);
		widget->RemoveFromViewport();
	}
}

