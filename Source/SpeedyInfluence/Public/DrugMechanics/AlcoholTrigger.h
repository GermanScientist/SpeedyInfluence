// SpeedyInfluence has been created by: Jack Hulspas

#pragma once

#include "CoreMinimal.h"
#include "DrugMechanics/DrugTrigger.h"
#include "AlcoholTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SPEEDYINFLUENCE_API AAlcoholTrigger : public ADrugTrigger
{
public:
	AAlcoholTrigger();

	GENERATED_BODY()

	void OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor) override;

	void OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor) override;
	
};
