#include "monkey.hpp"

void Monkey::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void Monkey::feed_banana()
{
    notify(AnimalEvent::MonkeyFed);
}