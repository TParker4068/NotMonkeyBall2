// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallPlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;

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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float MovementForce;
	
	void MoveUp(float Value);
	void MoveRight(float Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float JumpImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float XAxisRotationSpeed;
	void RotateCameraX(float Value);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
	float YAxisRotationSpeed;
	void RotateCameraY(float Value);

	void Jump();
	bool CanJump();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	float JumpCheckLineLength;
	

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UCameraComponent* Camera;

	

	


};
