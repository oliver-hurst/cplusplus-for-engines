// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "cpp_interaction_messages.generated.h"

// This class does not need to be modified.
UINTERFACE()
class Ucpp_interaction_messages : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MYCPPPROJECT_API Icpp_interaction_messages
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DoInteract();
	
};
