// Fill out your copyright notice in the Description page of Project Settings.


#include "MYHomeWorkActor.h"

// Sets default values
AMYHomeWorkActor::AMYHomeWorkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//������ ���� ���� �������� ���� �Ǵ°� ���� ����ٰ��� Ư�� �Լ� �ȳִ°� ���� �Ͱ��� (Ÿ�̸Ӱ�����?)
	count = 0;
}

// Called when the game starts or when spawned
void AMYHomeWorkActor::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorLocation(FVector::Zero()); // �ش� ���ӽ����̽��ȿ� ���� �Լ�


	//GetWorld() : ���� ���� ��������
	//GetTimerManager() : Ÿ�̸� �Ŵ��� (�ð������ϴ� ��)
	//SetTimer(�ڵ鷯 , ���� , �Լ� , ������ �ð� , �ݺ� ����, ó�� ������
	GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AMYHomeWorkActor::MoveRepeat, 0.5f, true, 0.3f);

}

// Called every frame
void AMYHomeWorkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AMYHomeWorkActor::Move() {
	
	

	FVector CurrentLocation = GetActorLocation(); // GetActorLocation : �ش��������ġ

	SetActorLocation(CurrentLocation + FVector(step(), step(), 0)); // SetActorLocation : �ش� ��ġ�� �̵�

	//%.2f : �Ҽ��� 2������
	UE_LOG(LogConfig, Warning, TEXT("X : %.2f, Y %.2f�� �̵�"), CurrentLocation.X, CurrentLocation.Y);

	//AddActorWorldOffset(FVector(1, 1, 1)); // AddActorWorldOffset : ���͸� ���� ��ġ���� �־������͸�ŭ������

	//�̵� �� ��ġ ������
	return CurrentLocation;

}


void AMYHomeWorkActor::MoveRepeat() {
	if (count < 10)
	{
		FVector pastVector = Move();
		UE_LOG(LogConfig, Warning, TEXT("distance:%.2f"), distance(pastVector, GetActorLocation()));

			//UE_LOG(LogConfig, Warning, TEXT("�̺�Ʈ �߻� ���� ��ġ�� ���� ��ġ ��: %.2f"), distance(pastVector, GetActorLocation()));
		
		count++;
	}
	else {
		//�Ű������� �ش��ϴ� Ÿ�̸� ���� �ڵ鷯 ����
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