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

	//������ TArray ����
	TArray<int32> Numbers;

	// ��� �߰�
	Numbers.Add(1);
	Numbers.Add(2);
	Numbers.Add(3);

	// ��� ����
	for (int32 Number : Numbers) {
		UE_LOG(LogTemp, Log, TEXT("Number: %d"), Number);
	}

	// ��� ����
	Numbers.Remove(2); // ���� 2�� ��� ����

	// �迭 ũ�� Ȯ��
	int32 Size = Numbers.Num(); // ���� �迭�� ��� ��
	UE_LOG(LogTemp, Log, TEXT("Size: %d"), Size); // %d ����

	Numbers.Sort(); // �迭 ����
	Numbers.Find(1);

	if (Numbers.IsEmpty()) // �迭�� ����ִ��� Ȯ��
	{

	}
}

