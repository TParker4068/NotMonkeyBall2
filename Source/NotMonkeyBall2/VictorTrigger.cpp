// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/TriggerVolume.h"
#include "Kismet/GameplayStatics.h"
#include "NotMonkeyBall2/NotMonkeyBall2GameModeBase.h"
#include "VictorTrigger.h"

// Sets default values
AVictorTrigger::AVictorTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	
}

// Called when the game starts or when spawned
void AVictorTrigger::BeginPlay()
{
	Super::BeginPlay();
	//Finds current game mode and player 1
	GameModeRef = Cast<ANotMonkeyBall2GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	PlayerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AVictorTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (Trigger->IsOverlappingActor(PlayerRef)) {
		GameModeRef->HandleGameEnd(true);
	}
}




