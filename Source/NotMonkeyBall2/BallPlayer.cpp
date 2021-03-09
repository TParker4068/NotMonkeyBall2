#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "BallPlayer.h"

// Sets default values
ABallPlayer::ABallPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);
	MovementForce = 100000;

	JumpImpulse = 1000;
}

// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("The Pawn's Z-Axis velocity is %f"), Mesh->GetComponentVelocity().Z);

}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MoveUp", this, &ABallPlayer::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &ABallPlayer::MoveRight);
	InputComponent->BindAxis("RotateCamera", this, &ABallPlayer::RotateCamera);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ABallPlayer::Jump);
}

void ABallPlayer::MoveUp(float Value)
{
	FVector ForceToAdd = FVector(1, 0, 0) * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

void ABallPlayer::MoveRight(float Value)
{
	FVector ForceToAdd = FVector(0, 1, 0) * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

void ABallPlayer::Jump()
{
	// TODO : Limit Jump to be only available when touching the ground
	
	FVector ImpulseVector = FVector(0, 0, 1) * JumpImpulse;
	Mesh->AddImpulse(ImpulseVector);
}

void ABallPlayer::RotateCamera(float Value)
{
	SpringArm->SetWorldRotation(FRotator(0, -30, 90 * Value));

}

void ABallPlayer::ResetCameraRotation()
{
}

