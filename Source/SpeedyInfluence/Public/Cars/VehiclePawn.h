//SpeedyInfluence has been created by: Jack Hulspas
#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "VehiclePawn.generated.h"

UCLASS()
class SPEEDYINFLUENCE_API AVehiclePawn : public AWheeledVehicle
{
	GENERATED_BODY()

	public:
		//Constructor
		AVehiclePawn();

		//Method that's called every frame
		virtual void Tick(float _deltaTime) override;

		//Sets up the player input
		virtual void SetupPlayerInputComponent(UInputComponent* _playerInputComponent) override;

		//Vehicle movement
		void ApplyThrottle(float _value);
		void ApplySteering(float _value);

		//Camera movement
		void LookUp(float _value);
		void Turn(float _value);

		//Handbrake
		void OnHandbrakePressed();
		void OnHandbrakeReleased();

		//Update in-air physics
		void UpdateInAirControl(float _deltaTime);

	protected:
		//Add spring arm components
		UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAcces = "true"));
			class USpringArmComponent* springArmComponent;

		//Add camera components
		UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAcces = "true"));
			class UCameraComponent* cameraComponent;
};