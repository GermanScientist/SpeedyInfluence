//SpeedyInfluence has been created by: Jack Hulspas
#include "Cars/VehiclePawn.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "WheeledVehicleMovementComponent4W.h"

//The constructor
AVehiclePawn::AVehiclePawn() {
    //Add the 4-wheeled vehicle movement component
    UWheeledVehicleMovementComponent4W* fourWheeledVehicle = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());

    //Set the tire load settings
    fourWheeledVehicle->MinNormalizedTireLoad = 0.0f;
    fourWheeledVehicle->MinNormalizedTireLoadFiltered = 0.2f;
    fourWheeledVehicle->MaxNormalizedTireLoad = 2.0f;
    fourWheeledVehicle->MaxNormalizedTireLoadFiltered = 2.0f;

    //Set the torque settings
    fourWheeledVehicle->MaxEngineRPM = 5700.0f;
    fourWheeledVehicle->EngineSetup.TorqueCurve.GetRichCurve()->Reset();
    fourWheeledVehicle->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(0.0f, 400.0f);
    fourWheeledVehicle->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(1890.0f, 500.0f);
    fourWheeledVehicle->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(5730.0f, 400.0f);

    //Set the steering curve
    fourWheeledVehicle->SteeringCurve.GetRichCurve()->Reset();
    fourWheeledVehicle->SteeringCurve.GetRichCurve()->AddKey(0.0f, 1.0f);
    fourWheeledVehicle->SteeringCurve.GetRichCurve()->AddKey(40.0f, 0.7f);
    fourWheeledVehicle->SteeringCurve.GetRichCurve()->AddKey(120.0f, 0.6f);

    //Use limited slip differential
    fourWheeledVehicle->DifferentialSetup.DifferentialType = EVehicleDifferential4W::LimitedSlip_4W;

    //Give the back wheeles more spin than the front wheels
    fourWheeledVehicle->DifferentialSetup.FrontRearSplit = 0.65;

    //Use an automatic gearbox
    fourWheeledVehicle->TransmissionSetup.bUseGearAutoBox = true;
    fourWheeledVehicle->TransmissionSetup.GearSwitchTime = 0.15f;
    fourWheeledVehicle->TransmissionSetup.GearAutoBoxLatency = 1.0f;

    //Create the spring arm component
    springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    springArmComponent->SetupAttachment(RootComponent);
    springArmComponent->TargetArmLength = 250.0f;
    springArmComponent->bUsePawnControlRotation = true;

    //Create the camera component
    cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    cameraComponent->SetupAttachment(springArmComponent, USpringArmComponent::SocketName);
    cameraComponent->FieldOfView = 90.0f;
}

//Method that's called every frame
void AVehiclePawn::Tick(float _deltaTime) {
    //Call the super function
    Super::Tick(_deltaTime);

    //Call the in-air control method
    UpdateInAirControl(_deltaTime);
}

//Sets up the player input
void AVehiclePawn::SetupPlayerInputComponent(UInputComponent* _playerInputComponent) {
    //Call the super function
    Super::SetupPlayerInputComponent(_playerInputComponent);

    //Bind the player inputs axis
    _playerInputComponent->BindAxis("Throttle", this, &AVehiclePawn::ApplyThrottle);
    _playerInputComponent->BindAxis("Steer", this, &AVehiclePawn::ApplySteering);
    _playerInputComponent->BindAxis("LookUp", this, &AVehiclePawn::LookUp);
    _playerInputComponent->BindAxis("Turn", this, &AVehiclePawn::Turn);

    //Bind the player input actions
    _playerInputComponent->BindAction("Handbrake", IE_Pressed, this, &AVehiclePawn::OnHandbrakePressed);
    _playerInputComponent->BindAction("Handbrake", IE_Released, this, &AVehiclePawn::OnHandbrakeReleased);
}

//Apply the throttle to the vehicle
void AVehiclePawn::ApplyThrottle(float _value) {
    //Set the throttle input to the input value
    GetVehicleMovementComponent()->SetThrottleInput(_value);
}

//Apply steering to the vehicle
void AVehiclePawn::ApplySteering(float _value) {
    //Set the steering input to the input value
    GetVehicleMovementComponent()->SetSteeringInput(_value);
}

//Rotate the camera on the Y-axis
void AVehiclePawn::LookUp(float _value) {
    //Add pitch input, making our camera move up and down
    if (_value != 0.0f)
        AddControllerPitchInput(_value);
}

//Rotate the camera on the X-axis
void AVehiclePawn::Turn(float _value) {
    //Add yaw input, making our camera move left and right
    if (_value != 0.0f)
        AddControllerYawInput(_value);
}

//On handbrake pressed
void AVehiclePawn::OnHandbrakePressed() {
    //Set the handbrake input to true
    GetVehicleMovementComponent()->SetHandbrakeInput(true);
}

//On handbrake released
void AVehiclePawn::OnHandbrakeReleased() {
    //Set the handbrake input to false
    GetVehicleMovementComponent()->SetHandbrakeInput(false);
}

void AVehiclePawn::UpdateInAirControl(float _deltaTime) {
}
