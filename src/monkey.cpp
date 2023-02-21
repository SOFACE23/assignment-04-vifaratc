#include "monkey.hpp"

//Calls visit function for visitor with this's address as visitor pointer.
void Monkey::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

//Calls notify function derived from the subject class.
void Monkey::feed_banana()
{
    notify(AnimalEvent::MonkeyFed);
}