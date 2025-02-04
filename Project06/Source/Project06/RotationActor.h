// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationActor.generated.h"

UCLASS()
class PROJECT06_API ARotationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotationActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


	//make
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float RotationSpeed;

	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	UStaticMeshComponent* StaticRotation;
};
