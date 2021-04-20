// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActorBase.h"

// Sets default values
ARotatingActorBase::ARotatingActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	
}

// Called when the game starts or when spawned
void ARotatingActorBase::BeginPlay()
{
	Super::BeginPlay();
	Rotation = FRotator(PitchRotationSpeed, RollRotationSpeed, YawRotationSpeed);
}

// Called every frame
void ARotatingActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator DeltaRotation = Rotation * DeltaTime;
	UE_LOG(LogTemp, Warning, TEXT("The rotation is %f"), Rotation.Pitch);
	AddActorLocalRotation(DeltaRotation);
}

