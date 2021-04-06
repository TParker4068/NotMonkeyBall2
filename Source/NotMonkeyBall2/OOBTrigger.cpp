// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/TriggerVolume.h"
#include "Kismet/GameplayStatics.h"
#include "NotMonkeyBall2/NotMonkeyBall2GameModeBase.h"
#include "OOBTrigger.h"

// Sets default values
AOOBTrigger::AOOBTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOOBTrigger::BeginPlay()
{
	Super::BeginPlay();
	GameModeRef = Cast<ANotMonkeyBall2GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	PlayerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

// Called every frame
void AOOBTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Trigger->IsOverlappingActor(PlayerRef)) {
		GameModeRef->HandleGameEnd(false);
	}
}

