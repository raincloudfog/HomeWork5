// Fill out your copyright notice in the Description page of Project Settings.


#include "MYHomeWorkActor.h"

// Sets default values
AMYHomeWorkActor::AMYHomeWorkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//생성자 아직 게임 시작전에 시작 되는것 같음 여기다가는 특정 함수 안넣는게 좋을 것같음 (타이머같은거?)
	count = 0;
}

// Called when the game starts or when spawned
void AMYHomeWorkActor::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorLocation(FVector::Zero()); // 해당 네임스페이스안에 제로 함수


	//GetWorld() : 현재 월드 가져오기
	//GetTimerManager() : 타이머 매니저 (시간관리하는 쪽)
	//SetTimer(핸들러 , 액터 , 함수 , 딜레이 시간 , 반복 유무, 처음 딜레이
	GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AMYHomeWorkActor::MoveRepeat, 0.5f, true, 0.3f);

}

// Called every frame
void AMYHomeWorkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AMYHomeWorkActor::Move() {
	
	

	FVector CurrentLocation = GetActorLocation(); // GetActorLocation : 해당액터의위치

	SetActorLocation(CurrentLocation + FVector(step(), step(), 0)); // SetActorLocation : 해당 위치로 이동

	//%.2f : 소수점 2개까지
	UE_LOG(LogConfig, Warning, TEXT("X : %.2f, Y %.2f로 이동"), CurrentLocation.X, CurrentLocation.Y);

	//AddActorWorldOffset(FVector(1, 1, 1)); // AddActorWorldOffset : 액터를 현재 위치에서 주어진벡터만큼움직임

	//이동 전 위치 값전달
	return CurrentLocation;

}


void AMYHomeWorkActor::MoveRepeat() {
	if (count < 10)
	{
		FVector pastVector = Move();
		UE_LOG(LogConfig, Warning, TEXT("distance:%.2f"), distance(pastVector, GetActorLocation()));

			//UE_LOG(LogConfig, Warning, TEXT("이벤트 발생 현재 위치와 전의 위치 비교: %.2f"), distance(pastVector, GetActorLocation()));
		
		count++;
	}
	else {
		//매개변수에 해당하는 타이머 변수 핸들러 종료
		GetWorld()->GetTimerManager().ClearTimer(MovementTimerHandle);
	}

}

int32_t AMYHomeWorkActor::step()
{
	float probabilty = 50;
	
	if (FMath::FRand() * 100.0f > probabilty)
	{
		return 1;
	}

	return 0;
}

float AMYHomeWorkActor::distance(FVector first, FVector second) {


	float _distanceX = FMath::Pow((first.X - second.X), 2);
	float _distanceY = FMath::Pow((first.Y - second.Y), 2);
	float _distance = FMath::Sqrt(_distanceX + _distanceY);

	return _distance;

}


//int32 AMYHomeWorkActor::CreateEvent() {
//	float probabilty = 50;
//
//	if (FMath::FRand() * 100.0f > probabilty)
//	{
//		return 1;
//	}
//
//	return 0;
//}