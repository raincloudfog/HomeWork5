// Fill out your copyright notice in the Description page of Project Settings.


#include "TestUnrealCoding.h"

// Sets default values
ATestUnrealCoding::ATestUnrealCoding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestUnrealCoding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestUnrealCoding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestUnrealCoding::TestTArray() {

	//정수형 TArray 생성
	TArray<int32> Numbers;

	// 요소 추가
	Numbers.Add(1);
	Numbers.Add(2);
	Numbers.Add(3);

	// 요소 접근
	for (int32 Number : Numbers) {
		UE_LOG(LogTemp, Log, TEXT("Number: %d"), Number);
	}

	// 요소 삭제
	Numbers.Remove(2); // 값이 2인 요소 삭제

	// 배열 크기 확인
	int32 Size = Numbers.Num(); // 현재 배열의 요소 수
	UE_LOG(LogTemp, Log, TEXT("Size: %d"), Size); // %d 정수

	Numbers.Sort(); // 배열 정렬
	Numbers.Find(1);

	if (Numbers.IsEmpty()) // 배열이 비어있는지 확인
	{

	}
}

