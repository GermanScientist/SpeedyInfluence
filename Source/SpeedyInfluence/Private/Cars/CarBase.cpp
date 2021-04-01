// SpeedyInfluence has been created by: Jack Hulspas

#include "Cars/CarBase.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

//Sets default values
ACarBase::ACarBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the camera component
	staticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	staticMeshComponent->SetupAttachment(RootComponent);

	//Create the spring arm component
	springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	springArmComponent->SetupAttachment(staticMeshComponent);

	//Create the camera component
	cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	cameraComponent->SetupAttachment(springArmComponent);

	//Set default values
	baseTurnRate = 45.0f;
	baseLookUpAtRate = 45.0f;
	currentSpeed = 500.0f;
	cameraClamp = 20.0f;
	acceleration = 0.0f;
	accelerationMultiplier = 10.0f;
	isMovingForwards = false;
	isMovingBackwards = false;
	blendValue = 0.0f;
}

//Called when the game starts or when spawned
void ACarBase::BeginPlay()
{
	Super::BeginPlay();

	SetNormalPostProcessing();
}

//Called every frame
void ACarBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!isMovingForwards && !isMovingBackwards) {

		if (currentSpeed > 0)
			currentSpeed -= acceleration;

		if (currentSpeed < 0)
			currentSpeed += acceleration;

		if (currentSpeed == 0)
			currentSpeed = 0;
	} else if (isMovingForwards || isMovingBackwards) {
		currentSpeed = FMath::Clamp(currentSpeed, -(maxSpeed / 3.0f), maxSpeed);
		
		acceleration += accelerationMultiplier;

		if (isMovingForwards)
			currentSpeed += acceleration;

		if (isMovingBackwards)
			currentSpeed -= acceleration;
	} 

	currentVelocity.X = currentSpeed;

	//handles movement based on the MoveX and MoveY axes
	if (!currentVelocity.IsZero())
	{
		FVector direction = GetActorForwardVector();
		FVector newLocation = (GetActorLocation() + (currentVelocity.X * direction * DeltaTime));
		SetActorLocation(newLocation);
	}

	//Rotate the camera yaw
	FRotator newX = springArmComponent->GetComponentRotation();
	newX.Yaw += mouseInput.X;
	springArmComponent->SetWorldRotation(newX);

	//Rotate the camera pitch
	FRotator newY = springArmComponent->GetComponentRotation(); //means character will not rotate on Y axis when looking up
	newY.Pitch = FMath::Clamp(newY.Pitch += mouseInput.Y, -cameraClamp, cameraClamp);
	springArmComponent->SetWorldRotation(newY);
}

//Moves the player forward or backwards
void ACarBase::MoveForward(float _value)
{
	if (_value > 0) {
		isMovingForwards = true;
		isMovingBackwards = false;
	}
	else if(_value < 0)
	{
		isMovingForwards = false;
		isMovingBackwards = true;
	}
	else
	{
		isMovingForwards = false;
		isMovingBackwards = false;
	}
}

//Moves the player to the right or to the left
void ACarBase::MoveRight(float _value)
{
	float yawValue = FMath::Clamp(_value, -1.0f, 1.0f);

	currentRotation = GetActorRotation() + FRotator(0, yawValue, 0);

	//AddActorLocalRotation(quatRotation, false, 0, ETeleportType::None);
	SetActorRotation(currentRotation, ETeleportType::None);
}

//Sets the x value of the mouse input to the MouseX input
void ACarBase::MouseX(float _value)
{
	mouseInput.X = _value;
}

//Sets the y value of the mouse input to the MouseY input
void ACarBase::MouseY(float _value)
{
	mouseInput.Y = _value;
}

// Called to bind functionality to input
void ACarBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Sets up the player input component
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind the right axis to the move forward method in this class
	InputComponent->BindAxis(TEXT("MoveRight"), this, &ACarBase::MoveRight);

	//Bind the forward axis to the move forward method in this class
	InputComponent->BindAxis(TEXT("MoveForward"), this, &ACarBase::MoveForward);

	//Bind the horizontal mouse axis to the existing yaw input method in the pawn class
	InputComponent->BindAxis(TEXT("Turn"), this, &ACarBase::MouseX);

	//Bind the horizontal mouse axis to the existing pitch input method in the pawn class
	InputComponent->BindAxis(TEXT("LookUp"), this, &ACarBase::MouseY);
}

//Sets the normal post processing
void ACarBase::SetNormalPostProcessing()
{
	cameraComponent->PostProcessSettings = normalPostProcessing;
}

//Sets the LSD post processing
void ACarBase::SetLSDPostProcessing()
{
	blendValue += 0.05f;
	blendValue = FMath::Clamp(blendValue, 0.0f, 1.0f);
	cameraComponent->PostProcessBlendWeight = blendValue;

	cameraComponent->PostProcessSettings = LSDPostProcessing;
}

//Sets the heroine post processing
void ACarBase::SetHeroinePostProcessing()
{
	blendValue += 0.05f;
	blendValue = FMath::Clamp(blendValue, 0.0f, 1.0f);
	cameraComponent->PostProcessBlendWeight = blendValue;

	cameraComponent->PostProcessSettings = heroinePostProcessing;
}

//Sets the alcohol post processing
void ACarBase::SetAlcoholPostProcessing()
{
	blendValue += 0.05f;
	blendValue = FMath::Clamp(blendValue, 0.0f, 1.0f);
	cameraComponent->PostProcessBlendWeight = blendValue;

	cameraComponent->PostProcessSettings = alcoholPostProcessing;
}
