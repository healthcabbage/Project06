// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FadeActor.generated.h"

UCLASS()
class PROJECT06_API AFadeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFadeActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	UStaticMeshComponent* StaticFade;
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float fadeOuttime; //사라지는 시간 체크

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float FadeIntime;

	FTimerHandle FadeOutTimerHandle;
	FTimerHandle FadeInTimerHandle;

	void FadeOut();
	void FadeIn();
};
