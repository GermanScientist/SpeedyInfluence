// Fill out your copyright notice in the Description page of Project Settings.

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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

	//Max speed
	UPROPERTY(EditAnywhere, Category = "Movement");
	float maxSpeed;

	//Acceleration
	UPROPERTY(EditAnywhere, Category = "Movement");
	float accelerationMultiplier;

};
