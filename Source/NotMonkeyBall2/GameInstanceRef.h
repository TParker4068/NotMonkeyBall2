// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameInstanceRef.generated.h"

class UNotMonkeyBall2GameInstanceBase;
UCLASS()
class NOTMONKEYBALL2_API UGameInstanceRef : public UObject
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UNotMonkeyBall2GameInstanceBase* GameInstanceRef;
};
