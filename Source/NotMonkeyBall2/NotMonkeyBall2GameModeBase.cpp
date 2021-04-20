// Copyright Epic Games, Inc. All Rights Reserved.

#include "Blueprint/WidgetBlueprintLibrary.h"
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
	//Gets reference to player 1's controller class
	PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this, 0));
	PlayerControllerRef->bShowMouseCursor = false;
	//Calls game start UIWidget set in blueprint
	GameStart();

	//Temporarily disables player input to sync with UIWidget countdown
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
	PlayerControllerRef->bShowMouseCursor = true;	
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	//Calls game end UIWidget set in blueprint
	GameEnd(PlayerWon);
}