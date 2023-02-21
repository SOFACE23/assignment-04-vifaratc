#include "animal_rights_group.hpp"
#include <iostream>
AnimalRightsGroup::AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish) : n_monkeys(n_monkeys), n_tigers(n_tigers), n_fish(n_fish)
{
}

void AnimalRightsGroup::update(AnimalEvent event)
{
    if (event == AnimalEvent::MonkeyFed)
    {
        n_monkeys_fed+=1;
    }
    else if (event == AnimalEvent::TigerScratched)
    {
        n_tigers_scratched+=1;
    }
    else if (event == AnimalEvent::FishTeethCleaned)
    {
        n_fish_teeth_brushed+=1;
    }
}

bool AnimalRightsGroup::animals_ok()
{
    // do not modify
    std::cout<<n_monkeys_fed<<" ";
    return (n_monkeys == n_monkeys_fed && n_tigers == n_tigers_scratched && n_fish == n_fish_teeth_brushed);
}