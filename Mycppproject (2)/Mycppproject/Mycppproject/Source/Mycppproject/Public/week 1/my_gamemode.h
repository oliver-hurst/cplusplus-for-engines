// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "week 1_task2/Checkpoint.h"
#include "my_gamemode.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API Amy_gamemode : public AGameModeBase
{
	GENERATED_BODY()

	Amy_gamemode();
public:
	void RegisterCheckpoint(ACheckpoint*checkpointActor);

	UFUNCTION()
	void FinishGame(FString EndMessage);
};
