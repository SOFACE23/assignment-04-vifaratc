#include "fish.hpp"

void Fish::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void Fish::clean_teeth()
{
    notify(AnimalEvent::FishTeethCleaned);
}