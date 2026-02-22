// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "myPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API AmyPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

public:
	UPROPERTY(EditDefaultsOnly, Category= "input")
	TObjectPtr<UInputMappingContext> MappingContext;
	
};
