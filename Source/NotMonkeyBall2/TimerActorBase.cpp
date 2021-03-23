// Fill out your copyright notice in the Description page of Project Settings.
#include "Kismet/GameplayStatics.h"
#include "NotMonkeyBall2/NotMonkeyBall2GameModeBase.h"
#include "TimerActorBase.h"

// Sets default values
ATimerActorBase::ATimerActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerActorBase::BeginPlay()
{
	Super::BeginPlay();
	GameMode = Cast<ANotMonkeyBall2GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	TimeRemaining = TimerLength;
}

// Called every frame
void ATimerActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("Time remaining is %f"), TimeRemaining);

	if (bTimerActive) {
		TimeRemaining -= DeltaTime;
		if (TimeRemaining <= 0) {
			TimeRemaining = 0;
			bTimerActive = false;
			GameMode->HandleGameEnd(false);
		}
	}



}

