// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MYHomeWorkActor.generated.h"

UCLASS()
class HOMEWORK_5_API AMYHomeWorkActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMYHomeWorkActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Move();
	void MoveRepeat();

	int32_t step();


	//�ݺ�Ƚ��
	int count;


	FTimerHandle MovementTimerHandle; // Ÿ�̸� �ڵ� (Ÿ�̸Ӹ� ���� �� �ִ� ����)

	



};
