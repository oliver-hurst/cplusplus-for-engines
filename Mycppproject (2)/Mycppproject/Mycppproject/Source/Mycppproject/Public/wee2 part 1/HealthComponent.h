// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathEvent);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MYCPPPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void takeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(EditDefaultsOnly, Category="health")
	float MaxHealth = 100.0f;

	UPROPERTY(BlueprintReadOnly, Category="health")
	float CurrentHealth = 0.0f;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnDeathEvent OnDeathEvent;
};
