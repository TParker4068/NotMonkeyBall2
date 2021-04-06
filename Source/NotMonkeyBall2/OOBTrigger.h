// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OOBTrigger.generated.h"

class ATriggerVolume;
class ANotMonkeyBall2GameModeBase;
UCLASS()
class NOTMONKEYBALL2_API AOOBTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOOBTrigger();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		ATriggerVolume* Trigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameMode", meta = (AllowPrivateAccess = "true"))
		ANotMonkeyBall2GameModeBase* GameModeRef;
	UPROPERTY(EditAnywhere)
		APawn* PlayerRef;
};
