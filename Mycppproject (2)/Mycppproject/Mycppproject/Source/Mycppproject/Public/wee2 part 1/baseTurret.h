// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "baseTurret.generated.h"

class ABaseProjectile;
class UArrowComponent;

UCLASS(BlueprintType,Blueprintable)
class MYCPPPROJECT_API AbaseTurret : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AbaseTurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> BaseMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> BarrelMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> FirePoint;

	UPROPERTY(EditDefaultsOnly,Category="TurretData")
	float FireSpeed = 0.5f;

	UPROPERTY(EditDefaultsOnly,Category="TurretData")
	FTimerHandle FireTimer;
	
	UPROPERTY(EditAnywhere,Category="TurretData")
	TSubclassOf<ABaseProjectile> ProjectileClass;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="TurretData")
	void Fire();
};
