// Fill out your copyright notice in the Description page of Project Settings.


#include "week 1_task2/Checkpoint.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "week 1/my_gamemode.h"
#include "week 1_task2/cpp_player_interface.h"


// Sets default values
ACheckpoint::ACheckpoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("collider");
	RootComponent = BoxCollision;
	SetRootComponent(BoxCollision);

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::CheckpointOverlapped);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ACheckpoint::CheckpointOverlapEnd);
	

}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

	Amy_gamemode*GM = Cast<Amy_gamemode>(UGameplayStatics::GetGameMode(this));
	if (GM)
	{
		GM->RegisterCheckpoint(this);
	}
	
}

void ACheckpoint::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	BoxCollision->OnComponentBeginOverlap.RemoveDynamic(this, &ACheckpoint::CheckpointOverlapped);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::CheckpointOverlapped);
	BoxCollision->OnComponentEndOverlap.RemoveDynamic(this, &ACheckpoint::CheckpointOverlapEnd);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ACheckpoint::CheckpointOverlapEnd);
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACheckpoint::DoInteract_Implementation()
{
	Icpp_interaction_messages::DoInteract_Implementation();
	UE_LOG(LogTemp,Warning,TEXT("ive interacted"));

	if (OnEndGameDelagate.IsBound())
	{
		
		OnEndGameDelagate.Broadcast((TEXT("End game")));
	}
}

void ACheckpoint::CheckpointOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	UE_LOG(LogTemp,Warning,TEXT("overlapped"));
	if (UKismetSystemLibrary::DoesImplementInterface(OtherActor, Ucpp_player_interface::StaticClass()))
	{
		UE_LOG(LogTemp,Warning,TEXT("overlapped"));
		Icpp_player_interface::Execute_SetActorOverlapEvent(OtherActor, this );
	}
}

void ACheckpoint::CheckpointOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp,Error,TEXT("overlap ended"));
	if (UKismetSystemLibrary::DoesImplementInterface(OtherActor, Ucpp_player_interface::StaticClass()))
	{
		UE_LOG(LogTemp,Error,TEXT("overlap ended"));
		Icpp_player_interface::Execute_SetActorOverlapEvent(OtherActor, this );
	}
}


	

