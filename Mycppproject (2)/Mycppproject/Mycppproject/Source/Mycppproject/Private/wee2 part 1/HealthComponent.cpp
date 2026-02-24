// Fill out your copyright notice in the Description page of Project Settings.


#include "wee2 part 1/HealthComponent.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	GetOwner()->OnTakeAnyDamage.AddUniqueDynamic(this, &UHealthComponent::takeDamage);	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UHealthComponent::takeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - Damage , 0.0f, MaxHealth);
	UE_LOG(LogTemp,Warning,TEXT("health: %f"), CurrentHealth);

	if (CurrentHealth<=0.0f)
	{
		UE_LOG(LogTemp,Warning,TEXT("health out of range"));
		if (OnDeathEvent.IsBound())
			OnDeathEvent.Broadcast();
	}
}



