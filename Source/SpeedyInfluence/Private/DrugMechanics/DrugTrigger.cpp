// SpeedyInfluence has been created by: Jack Hulspas

#include "DrugMechanics/DrugTrigger.h"
#include "DrawDebugHelpers.h"

//The constructor of the trigger collider
ADrugTrigger::ADrugTrigger() {

    //Registers overlap events
    OnActorBeginOverlap.AddDynamic(this, &ADrugTrigger::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ADrugTrigger::OnOverlapEnd);
}

//Called when the game starts or when spawned
void ADrugTrigger::BeginPlay() {
    Super::BeginPlay();

    //Draws a debug box so I can see where the box collider is located
    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

//Method is called as soon as an overlap begins
void ADrugTrigger::OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor)
{
    /*
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {
        //Print to screen using above defined method when actor enters trigger box
        print("Overlap Begin");
        printFString("Overlapped Actor = %s", *_overlappedActor->GetName());

        if ((ACarBase*)_otherActor) {
            ACarBase* car = (ACarBase*)_otherActor;

            car->SetLSDPostProcessing();
        }
    }
    */
}

//Method is called as soon as an overlap ends
void ADrugTrigger::OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor)
{
    /*
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {
        //Print to screen using above defined method when actor leaves trigger box
        print("Overlap Ended");
        printFString("%s has left the Trigger Box", *_otherActor->GetName());
    }
    */
}
