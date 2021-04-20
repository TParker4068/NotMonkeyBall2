// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActorBase.generated.h"

UCLASS()
class NOTMONKEYBALL2_API ARotatingActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingActorBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Speeds", meta = (AllowPrivateAccess = "true"))
	float PitchRotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Speeds", meta = (AllowPrivateAccess = "true"))
	float RollRotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Speeds", meta = (AllowPrivateAccess = "true"))
	float YawRotationSpeed;

	//FRotator to hold speeds set up in blueprint.
	FRotator Rotation;

};
