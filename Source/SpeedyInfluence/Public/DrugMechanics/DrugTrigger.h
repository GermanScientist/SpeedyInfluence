// SpeedyInfluence has been created by: Jack Hulspas

#pragma once

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Cars/CarBase.h"
#include "DrugTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SPEEDYINFLUENCE_API ADrugTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:

	ADrugTrigger();

	UFUNCTION()
		virtual void OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor);

	UFUNCTION()
		virtual void OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor);
};
