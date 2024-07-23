// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	//Pawn의 설계도를 받는다.
	DefaultPawnClass = AMyPawn::StaticClass();
}
