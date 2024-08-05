// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyInventoryComponent.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(ItemAdded, int32 itemId, int32 itemIndex);

class AMyItem;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_PSU_API UMyInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyInventoryComponent();

	//Delegate
	ItemAdded _itemAddedEvent;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool isInventoryEmpty() { return _items.IsEmpty(); }

	UFUNCTION()
	bool PutItem(AMyItem* item);
	UFUNCTION()
	void DropItem();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item, meta = (AllowPrivateAccess = "true"))
	TArray<AMyItem*> _items;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item, meta = (AllowPrivateAccess = "true"))
	int32 inventoryValiable_max = 9;
};
