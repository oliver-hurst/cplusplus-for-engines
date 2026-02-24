// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "week 1_task2/cpp_player_interface.h"
#include "MyPawn.generated.h"


class UHealthComponent;
class UFloatingPawnMovement;
class USphereComponent;
class UCameraComponent;
class USpringArmComponent;
UCLASS()
class MYCPPPROJECT_API AMyPawn : public APawn, public Icpp_player_interface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USphereComponent> SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UFloatingPawnMovement> Movement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UHealthComponent> HealthComponent;

	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DoMove(FVector2D inputvalue);
     
    virtual void SetActorOverlapEvent_Implementation(AActor* OverlappedActor) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<AActor> MyOverlappedActorRef;

	


	UPROPERTY(EditDefaultsOnly, Category="InputActions")
	TObjectPtr<UInputAction> InputAction;

	UFUNCTION(BlueprintCallable)
	void DoInteract();

	UPROPERTY()
	TObjectPtr<APlayerController>MyPCRef = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Aim")
	TEnumAsByte<ETraceTypeQuery> TraceChannel = TraceTypeQuery1;

private:
	FVector2D LastInputValue;

	float AimAngle = 0.0f;

	FRotator OldRotation;
	bool bIsUsingMouse = true; // will be set/ unset in a diffrent function 
	
};



