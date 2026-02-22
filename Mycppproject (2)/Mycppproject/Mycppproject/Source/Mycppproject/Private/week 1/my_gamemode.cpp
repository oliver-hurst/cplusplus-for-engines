// Fill out your copyright notice in the Description page of Project Settings.


#include "Mycppproject/Public/week 1/my_gamemode.h"

Amy_gamemode::Amy_gamemode()
{
	
}

void Amy_gamemode::RegisterCheckpoint(ACheckpoint* checkpointActor)
{
	checkpointActor->OnEndGameDelagate.AddDynamic(this, &Amy_gamemode::FinishGame);
}

void Amy_gamemode::FinishGame(FString EndMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *EndMessage);
}
