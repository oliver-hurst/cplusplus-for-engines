// Fill out your copyright notice in the Description page of Project Settings.


#include "Mycppproject/Public/week 1/MyPawn.h"
#include "week 1/MyPawn.h"
#include "week 1/MyPawn.h"
#include "week 1/MyPawn.h"
#include "Components/SphereComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "week 1/MyPawn.h"
#include "Camera/CameraComponent.h"
#include "InteractiveToolActionSet.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "wee2 part 1/HealthComponent.h"


// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("sphere"));
	SetRootComponent(SphereCollision);
	SphereCollision->InitSphereRadius(10.0f);
	SphereCollision->SetCollisionObjectType(ECC_Pawn);
	SphereCollision->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	SphereCollision->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(SphereCollision);
	StaticMesh->SetRelativeRotation(FRotator(0.0f,-90.0f,0.0f));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("springarm"));
	SpringArm->SetupAttachment(SphereCollision);
	SpringArm->SetRelativeRotation(FRotator(-60.0f,0.0f,0.0f));
	SpringArm->TargetArmLength = 2200.0f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 0.5f;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("camera"));
	Camera->SetupAttachment(SpringArm);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("movement"));

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	
	
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();

	MyPCRef = UGameplayStatics::GetPlayerController( GetWorld() , 0);
}

// Called every frame

	void AMyPawn::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);
		OldRotation = FRotator(GetActorRotation());
		if (bIsUsingMouse)
		{
			if (!MyPCRef)
			{
				return;
			}
			FHitResult Hit;
			
				if (MyPCRef->GetHitResultUnderCursorByChannel(TraceChannel, true, Hit))
				{
					const FVector HitLocation = Hit.Location;
					const FVector OwnerLocation = GetActorLocation();

					FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(OwnerLocation, HitLocation);
					AimAngle = LookAt.Yaw;

					FRotator NewRotation = FRotator(OldRotation.Pitch,AimAngle, OldRotation.Roll);
					SetActorRotation(NewRotation);
				
				}
				else
				{
					FRotator NewRotation = FRotator(OldRotation.Pitch,AimAngle, OldRotation.Roll);
					SetActorRotation(NewRotation);
				}
			
			
				
		
			}

	
		}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent*EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EIC->BindAction(InputAction, ETriggerEvent::Triggered,this ,&AMyPawn::DoInteract);
		
	}
	
}

void AMyPawn::DoMove(FVector2D inputvalue)
{
	LastInputValue.X = inputvalue.X;
	LastInputValue.Y = inputvalue.Y;

	FRotator  MovementDirection = FRotator(0,GetControlRotation().Yaw, GetControlRotation().Roll);

	GetMovementComponent()->AddInputVector(MovementDirection.RotateVector(FVector::ForwardVector) * inputvalue.X);
	GetMovementComponent()->AddInputVector(MovementDirection.RotateVector(FVector::RightVector) * inputvalue.Y);
}

void AMyPawn::SetActorOverlapEvent_Implementation(AActor* OverlappedActor)
{
	Icpp_player_interface::SetActorOverlapEvent_Implementation(OverlappedActor);
	MyOverlappedActorRef = OverlappedActor;
}

void AMyPawn::DoInteract()
{
	UE_LOG(LogTemp, Display, TEXT("do interact"));
}

