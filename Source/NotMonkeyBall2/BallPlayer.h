// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallPlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;
class APlayerControllerBase;
UCLASS()
class NOTMONKEYBALL2_API ABallPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallPlayer();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Force added when moving
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control")
	float MovementForce;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control")
	float TopSpeed;

	//Value speed is divided by to increase SpringArm length
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Control")
	float SpringArmDivider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Control")
	float BaseTargetArmLength;

	

	//Force added when jumping
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float JumpImpulse;

	//Camera Rotation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float XAxisRotationSpeed;
	void RotateCameraX(float Value);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float YAxisRotationSpeed;
	void RotateCameraY(float Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	float JumpCheckLineLength;
	

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UCameraComponent* Camera;

	APlayerController* PlayerControllerRef;

	void UpdateSpringArmLength();

	void MoveUp(float Value);
	void MoveRight(float Value);

	void Jump();
	bool CanJump();

};
