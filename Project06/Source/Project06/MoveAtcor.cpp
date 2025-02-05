// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveAtcor.h"

// Sets default values
AMoveAtcor::AMoveAtcor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMove = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMove->SetupAttachment(SceneRoot);

}

// Called when the game starts or when spawned
void AMoveAtcor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	bMovingFoward = true;
}

// Called every frame
void AMoveAtcor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	FVector MoveDirection = FVector::ZeroVector;

	if (ischeckX)
	{
		MoveDirection = FVector(1.0f, 0.0f, 0.0f);
	}
	else if (ischeckY)
	{
		MoveDirection = FVector(0.0f, 1.0f, 0.0f);
	}
	else if (ischeckZ)
	{
		MoveDirection = FVector(0.0f, 0.0f, 1.0f);
	}

	float MoveStep = MoveSpeed * DeltaTime;
	FVector NewLocation = CurrentLocation + (bMovingFoward ? MoveDirection * MoveStep : -MoveDirection * MoveStep);

	float DistanceMoved = FVector::Dist(StartLocation, NewLocation);

	if (DistanceMoved >= MoveDistance)
	{
		bMovingFoward = !bMovingFoward;
	}

	SetActorLocation(NewLocation);
}

