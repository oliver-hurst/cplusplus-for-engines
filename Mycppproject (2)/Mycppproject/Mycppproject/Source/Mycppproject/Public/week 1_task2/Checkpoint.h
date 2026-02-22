// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "cpp_interaction_messages.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"


class UBoxComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndGaneSignature, FString,EndMessage);
UCLASS()
class MYCPPPROJECT_API ACheckpoint : public AActor, public Icpp_interaction_messages
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACheckpoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable)
	FEndGaneSignature OnEndGameDelagate;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UBoxComponent> BoxCollision;
	virtual void DoInteract_Implementation() override;

private:

	UFUNCTION()
	void CheckpointOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void CheckpointOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
