// Fill out your copyright notice in the Description page of Project Settings.


#include "FadeActor.h"

// Sets default values
AFadeActor::AFadeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticFade = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticFade->SetupAttachment(SceneRoot);
}

// Called when the game starts or when spawned
void AFadeActor::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(FadeOutTimerHandle, this, &AFadeActor::FadeOut, fadeOuttime, false);
}

// Called every frame
void AFadeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFadeActor::FadeOut()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	GetWorld()->GetTimerManager().SetTimer(FadeInTimerHandle, this, &AFadeActor::FadeIn, FadeIntime, false);
}

void AFadeActor::FadeIn()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);

	GetWorld()->GetTimerManager().SetTimer(FadeOutTimerHandle, this, &AFadeActor::FadeOut, fadeOuttime, false);
}

