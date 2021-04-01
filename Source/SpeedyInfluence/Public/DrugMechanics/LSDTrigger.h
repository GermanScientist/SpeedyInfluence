// SpeedyInfluence has been created by: Jack Hulspas

#pragma once

#include "CoreMinimal.h"
#include "DrugMechanics/DrugTrigger.h"
#include "LSDTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SPEEDYINFLUENCE_API ALSDTrigger : public ADrugTrigger
{
public:
	ALSDTrigger();

	GENERATED_BODY()

	void OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor) override;

	void OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor) override;
};
