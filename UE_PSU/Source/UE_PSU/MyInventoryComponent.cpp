// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInventoryComponent.h"
#include "MyItem.h"

// Sets default values for this component's properties
UMyInventoryComponent::UMyInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UMyInventoryComponent::PutItem(AMyItem* item)
{
	if (_items.Num() < inventoryValiable_max)
	{
		_items.Add(item);
		_itemAddedEvent.Broadcast(item->_itemCode, _items.Num()-1);
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory is Full!!"));
		return false;
	}
}

void UMyInventoryComponent::DropItem()
{
	UE_LOG(LogTemp, Log, TEXT("DropItem"));
	FRotator randomRot = FRotator(0, FMath::RandRange(0, 360), 0);
	int32 dropDistance = 150;
	FVector dropPos = GetOwner()->GetActorLocation() + randomRot.Vector() * dropDistance;

	_items.Last()->Release(dropPos, randomRot);

	_items.Pop();
}

