#include "fish.hpp"

//Calls visit function for visitor with this's address as visitor pointer.
void Fish::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

//Calls notify function derived from the subject class.
void Fish::clean_teeth()
{
    notify(AnimalEvent::FishTeethCleaned);
}