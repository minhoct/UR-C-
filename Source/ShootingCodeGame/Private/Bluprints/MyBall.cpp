// Fill out your copyright notice in the Description page of Project Settings.


#include "Bluprints/MyBall.h"

// Sets default values
AMyBall::AMyBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); 
	StaticMesh->SetSimulatePhysics(true); //시뮬레이트 피직스 활성화

	SetRootComponent(StaticMesh); //스테틱메쉬를 루트컴포넌트로

	bReplicates = true; //리플리케이트 체크
	SetReplicateMovement(true); //이동 리플리케이트 체크

}

// Called when the game starts or when spawned
void AMyBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

