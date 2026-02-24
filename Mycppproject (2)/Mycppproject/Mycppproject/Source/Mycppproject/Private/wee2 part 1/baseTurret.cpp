// Fill out your copyright notice in the Description page of Project Settings.


#include "wee2 part 1/baseTurret.h"
#include"Components/ArrowComponent.h"
#include"wee2 part 1/BaseProjectile.h"


// Sets default values
AbaseTurret::AbaseTurret()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	SetRootComponent(BaseMeshComponent);

	BarrelMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BarrelMeshComponent");
	BarrelMeshComponent->SetupAttachment(BaseMeshComponent);
	BarrelMeshComponent->SetRelativeRotation(FRotator(60.0f, 0.0f, 0.0f));
	BarrelMeshComponent->SetRelativeScale3D(FVector(0.05f));

	FirePoint = CreateDefaultSubobject<UArrowComponent>("FirePoint");
	FirePoint->SetupAttachment(BarrelMeshComponent);
	FirePoint->SetRelativeLocation(FVector(280.0f, 0.0f, 0.0f));

	
	
	
	
}

// Called when the game starts or when spawned
void AbaseTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(FireTimer, this, &AbaseTurret::Fire, FireSpeed,true);
	
}

// Called every frame
void AbaseTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AbaseTurret::Fire_Implementation()
{
	const FVector location = FirePoint->GetComponentLocation();
	const FRotator rotation = FirePoint->GetComponentRotation();

	GetWorld()->SpawnActor(ProjectileClass, &location,&rotation);
}



