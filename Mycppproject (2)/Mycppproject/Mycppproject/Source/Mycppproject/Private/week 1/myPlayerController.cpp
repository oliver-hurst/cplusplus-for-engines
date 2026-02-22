// Fill out your copyright notice in the Description page of Project Settings.


#include "Mycppproject/Public/week 1/myPlayerController.h"
#include "EnhancedInputSubsystems.h"

void AmyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AmyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(MappingContext,0);
	}
}
