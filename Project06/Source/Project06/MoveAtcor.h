// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveAtcor.generated.h"

UCLASS()
class PROJECT06_API AMoveAtcor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveAtcor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//make
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector StartLocation;	//첫 시작 거리, 액터의 거리를 받아오자.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed;	//움직임 수치
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	float MoveDistance;	//이동거리
	bool bMovingFoward;	//x, y축 체크

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckX;	//z축 체크
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckY;	//y축 이동 체크
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckZ;	//z축 이동 체크

	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	UStaticMeshComponent* StaticMove;
};
