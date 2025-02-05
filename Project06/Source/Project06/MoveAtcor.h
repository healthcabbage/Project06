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
	FVector StartLocation;	//ù ���� �Ÿ�, ������ �Ÿ��� �޾ƿ���.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed;	//������ ��ġ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	float MoveDistance;	//�̵��Ÿ�
	bool bMovingFoward;	//x, y�� üũ

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckX;	//z�� üũ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckY;	//y�� �̵� üũ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plaform Settings")
	bool ischeckZ;	//z�� �̵� üũ

	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	UStaticMeshComponent* StaticMove;
};
