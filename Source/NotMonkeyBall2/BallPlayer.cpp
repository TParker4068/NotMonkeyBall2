#include "Camera/CameraComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/KismetSystemLibrary.h"

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
	//Sets line length to slightly more than half the mesh size (will trace from middle of mesh)
	
}

// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	PlayerControllerRef = Cast<APlayerController>(GetController());
}

// Called every frame
void ABallPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("The Pawn's speed is %f"), Mesh->GetComponentVelocity().Size());

	//Limits speed of player
	if (Mesh->GetComponentVelocity().Size() > TopSpeed) {
		FVector PawnVelocity = Mesh->GetComponentVelocity();
		PawnVelocity.Normalize();
		FVector ReduceSpeedForce = PawnVelocity * -MovementForce;
		Mesh->AddForce(ReduceSpeedForce);
	}
}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MoveUp", this, &ABallPlayer::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &ABallPlayer::MoveRight);
	InputComponent->BindAxis("RotateCameraX", this, &ABallPlayer::RotateCameraX);
	InputComponent->BindAxis("RotateCameraY", this, &ABallPlayer::RotateCameraY);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ABallPlayer::Jump);
}

void ABallPlayer::MoveUp(float Value)
{
	//Sets movement relative to where the camera faces
	FVector CameraForward = Camera->GetForwardVector();
	//Prevents force added being lost to Z-Axis
	CameraForward.Z = 0;
	//Normalizes the vector after ignoring z-axis
	CameraForward.Normalize();
	FVector ForceToAdd = CameraForward * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

void ABallPlayer::MoveRight(float Value)
{
	//Sets movement relative to where the camera faces
	FVector CameraRight = Camera->GetRightVector();
	//Prevents force added being lost to Z-Axis
	CameraRight.Z = 0;
	//Normalizes the vector after ignoring Z-axis
	CameraRight.Normalize();
	FVector ForceToAdd = CameraRight * MovementForce * Value;
	Mesh->AddForce(ForceToAdd);
}

void ABallPlayer::Jump()
{
	// TODO : Limit Jump to be only available when touching the ground
	bool bCanJump = CanJump();
	if (bCanJump) {
		FVector ImpulseVector = FVector(0, 0, 1) * JumpImpulse;
		Mesh->AddImpulse(ImpulseVector);
	}
	
}

bool ABallPlayer::CanJump()
{
	//Centre of mesh
	FVector Origin;
	//Half size of the mesh
	FVector BoxExtent;
	float SphereRadius;
	UKismetSystemLibrary::GetComponentBounds(Mesh, Origin, BoxExtent, SphereRadius);
	JumpCheckLineLength = BoxExtent.Z + 5;
	//Points line downwards
	FRotator Rotation = FRotator(-90, 0, 0);
	FVector End = Origin + Rotation.Vector() * JumpCheckLineLength;
	//UE_LOG(LogTemp, Warning, TEXT("Vector is %s"), *End.ToString());
	FHitResult OutHit;
	FCollisionQueryParams Params;
	//Makes line ignore the player object, otherwise would always be able to jump
	Params.AddIgnoredActor(this);
	bool bCanJump = GetWorld()->LineTraceSingleByChannel(OutHit, Origin, End, ECC_GameTraceChannel1, Params);

	return bCanJump;
}

void ABallPlayer::RotateCameraX(float Value)
{
	FRotator RotationToAdd = FRotator(0, XAxisRotationSpeed, 0) * Value;
	SpringArm->AddRelativeRotation(RotationToAdd);
}

void ABallPlayer::RotateCameraY(float Value)
{
	FRotator RotationToAdd = FRotator(YAxisRotationSpeed, 0, 0) * Value;
	SpringArm->AddRelativeRotation(RotationToAdd);
	
	// Locks range of Y-axis rotation
	float Pitch = SpringArm->GetRelativeRotation().Pitch;
	if (Pitch > 0) 
	{
		SpringArm->SetRelativeRotation(FRotator(0, SpringArm->GetRelativeRotation().Yaw, 0));
	}

	if (Pitch < -80) 
	{
		SpringArm->SetRelativeRotation(FRotator(-80, SpringArm->GetRelativeRotation().Yaw, 0));
	}
}


