// Fill out your copyright notice in the Description page of Project Settings.

/*#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "VictoryTrigger.generated.h"

class UNotMonkeyBall2GameModeBase;
UCLASS()
class NOTMONKEYBALL2_API AVictoryTrigger : public ATriggerVolume
{
	GENERATED_BODY()
protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* Mesh;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    ATriggerVolume* Trigger;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameMode", meta = (AllowPrivateAccess = "true"))
    UNotMonkeyBall2GameModeBase *GameModeRef;

    void OnOverlapBegin();
};*/
