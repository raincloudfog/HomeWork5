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


	//반복횟수
	int count;


	FTimerHandle MovementTimerHandle; // 타이머 핸들 (타이머를 담을 수 있는 변수)

	



};
