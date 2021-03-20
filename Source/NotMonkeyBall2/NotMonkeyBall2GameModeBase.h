// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NotMonkeyBall2GameModeBase.generated.h"

/**
 * 
 */

class APlayerControllerBase;
UCLASS()
class NOTMONKEYBALL2_API ANotMonkeyBall2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	void HandleGameStart();
	void HandleGameEnd(bool PlayerWon);
	APlayerControllerBase* PlayerControllerRef;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop")
	int32 StartDelay = 3;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop")
	bool bTimerActive;

	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent)
	void GameEnd(bool PlayerWon);
};
