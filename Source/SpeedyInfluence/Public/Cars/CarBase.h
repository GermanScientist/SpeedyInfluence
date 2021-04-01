// SpeedyInfluence has been created by: Jack Hulspas

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CarBase.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class SPEEDYINFLUENCE_API ACarBase : public APawn
{
	GENERATED_BODY()

public:
	//Sets default values for this pawn's properties
	ACarBase();

	//Add spring arm components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	USpringArmComponent* springArmComponent;

	//Add camera components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	UCameraComponent* cameraComponent;

	//Add camera components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player");
	UStaticMeshComponent* staticMeshComponent;

	//Add the post processing settings for each effect
	UPROPERTY(EditAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
		struct FPostProcessSettings normalPostProcessing;

	UPROPERTY(EditAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
		struct FPostProcessSettings alcoholPostProcessing;

	UPROPERTY(EditAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
		struct FPostProcessSettings LSDPostProcessing;

	UPROPERTY(EditAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
		struct FPostProcessSettings heroinePostProcessing;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Change to normal post processing
	void SetNormalPostProcessing();

	//Change to alcohol post processing
	void SetAlcoholPostProcessing();

	//Change to LSD post processing
	void SetLSDPostProcessing();

	//Change to alcohol post processing
	void SetHeroinePostProcessing();

private:
	//Input
	void MoveForward(float _value);
	void MoveRight(float _value);

	void MouseX(float _value);
	void MouseY(float _value);

	bool isMovingForwards;
	bool isMovingBackwards;

	//Base turn rate
	UPROPERTY(EditAnywhere, Category = "Camera");
	float baseTurnRate;

	//Base lookup rate rate
	UPROPERTY(EditAnywhere, Category = "Camera");
	float baseLookUpAtRate;

	//Base lookup rate rate
	UPROPERTY(EditAnywhere, Category = "Camera");
	float cameraClamp;

	//Movement direction
	FVector currentVelocity;
	FVector mouseInput;
	FRotator currentRotation;

	//Movementspeed
	float currentSpeed;
	float acceleration;
	float blendValue;

	//Max speed
	UPROPERTY(EditAnywhere, Category = "Movement");
	float maxSpeed;

	//Acceleration
	UPROPERTY(EditAnywhere, Category = "Movement");
	float accelerationMultiplier;
};
