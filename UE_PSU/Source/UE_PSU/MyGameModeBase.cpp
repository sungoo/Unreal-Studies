// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	//Pawn�� ���赵�� �޴´�.
	DefaultPawnClass = AMyPawn::StaticClass();
}
