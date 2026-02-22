// Fill out your copyright notice in the Description page of Project Settings.


#include "wee2 part 1/health.h"


// Sets default values for this component's properties
Uhealth::Uhealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Uhealth::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Uhealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

