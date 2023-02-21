#include "keeper.hpp"

//We have to include the classes for each animal...
#include "monkey.hpp"
#include "fish.hpp"
#include "tiger.hpp"

void Keeper::visit(Monkey &monkey)
{
    monkey.feed_banana();
}
void Keeper::visit(Tiger &tiger)
{
    tiger.scratch_back();
}

void Keeper::visit(Fish &fish)
{
    fish.clean_teeth();
}