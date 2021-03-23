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
public:
	void HandleGameEnd(bool PlayerWon);

private:
	void HandleGameStart();
	
	APlayerControllerBase* PlayerControllerRef;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop")
	int32 StartDelay = 3;


	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();
	
	UFUNCTION(BlueprintImplementableEvent)
	void GameEnd(bool PlayerWon);

};
