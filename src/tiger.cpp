#include "tiger.hpp"

void Tiger::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void Tiger::scratch_back()
{
    notify(AnimalEvent::TigerScratched);
}