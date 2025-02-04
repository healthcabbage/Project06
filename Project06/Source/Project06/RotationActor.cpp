// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationActor.h"

// Sets default values
ARotationActor::ARotationActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticRotation = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticRotation->SetupAttachment(SceneRoot);

}

// Called when the game starts or when spawned
void ARotationActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}

