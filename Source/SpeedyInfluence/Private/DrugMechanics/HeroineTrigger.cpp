// SpeedyInfluence has been created by: Jack Hulspas

#include "DrugMechanics/HeroineTrigger.h"

//The constructor of the trigger collider
AHeroineTrigger::AHeroineTrigger() {

}

//Method is called as soon as an overlap begins
void AHeroineTrigger::OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor)
{
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {

        //Check if the overlapping actor has the ACarBase class
        if ((ACarBase*)_otherActor) {
            //Set the car's post processing to the alcohol post processing
            ACarBase* car = (ACarBase*)_otherActor;

            car->SetHeroinePostProcessing();
        }
    }
}

//Method is called as soon as an overlap ends
void AHeroineTrigger::OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor)
{
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {
        //Code here
    }
}
