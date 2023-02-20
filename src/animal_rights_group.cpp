#include "animal_rights_group.hpp"

AnimalRightsGroup::AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish) : n_monkeys(n_monkeys), n_tigers(n_tigers), n_fish(n_fish)
{
}

void AnimalRightsGroup::update(AnimalEvent event)
{
    if (event == AnimalEvent::MonkeyFed)
    {
    }
    else if (event == AnimalEvent::TigerScratched)
    {
    }
    else if (event == AnimalEvent::FishTeethCleaned)
    {
    }
}

bool AnimalRightsGroup::animals_ok()
{
    // do not modify
    return (n_monkeys == n_monkeys_fed && n_tigers == n_tigers_scratched && n_fish == n_fish_teeth_brushed);
}