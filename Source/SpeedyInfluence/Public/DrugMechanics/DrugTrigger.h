// SpeedyInfluence has been created by: Jack Hulspas

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
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
		void OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor);
};
