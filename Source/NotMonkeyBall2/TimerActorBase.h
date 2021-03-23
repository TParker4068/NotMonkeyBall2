// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerActorBase.generated.h"

class ANotMonkeyBall2GameModeBase;
UCLASS()
class NOTMONKEYBALL2_API ATimerActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimerActorBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float TimerLength;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float TimeRemaining;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bTimerActive = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ANotMonkeyBall2GameModeBase* GameMode;

};
