// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NotMonkeyBall2GameInstanceBase.generated.h"

UCLASS()
class NOTMONKEYBALL2_API UNotMonkeyBall2GameInstanceBase : public UGameInstance
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 0;

	void GetAllMapNames(TArray<FString> &Names);
	
	UFUNCTION(BlueprintCallable)
	void LoadNextLevel();
	UFUNCTION(BlueprintCallable)
	void ReloadLevel();

protected:
	TArray<FString> LevelNames;
	virtual void Init() override;
};
