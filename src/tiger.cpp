#include "tiger.hpp"

//Calls visit function for visitor with this's address as visitor pointer.
void Tiger::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

//Calls notify function derived from the subject class.
void Tiger::scratch_back()
{
    notify(AnimalEvent::TigerScratched);
}