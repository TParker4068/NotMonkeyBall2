// Copyright Epic Games, Inc. All Rights Reserved.

#include "Kismet/GameplayStatics.h"
#include "NotMonkeyBall2/PlayerControllerBase.h"
#include "NotMonkeyBall2GameModeBase.h"


void ANotMonkeyBall2GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	HandleGameStart();
}

void ANotMonkeyBall2GameModeBase::HandleGameStart()
{
	PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this, 0));
	GameStart();

	if (PlayerControllerRef)
	{
		PlayerControllerRef->SetPlayerEnableState(false);

		FTimerHandle PlayerEnableHandle;
		FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef,
			&APlayerControllerBase::SetPlayerEnableState, true);
		GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, StartDelay, false);
	}
}

void ANotMonkeyBall2GameModeBase::HandleGameEnd(bool PlayerWon)
{
	GameEnd(PlayerWon);
}