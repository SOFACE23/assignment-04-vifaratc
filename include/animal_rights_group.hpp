#ifndef ANIMAL_RIGHTS_GROUP_HPP
#define ANIMAL_RIGHTS_GROUP_HPP

#include "observer.hpp"
#include "animal.hpp"

class AnimalRightsGroup : public Observer
{

public:
    virtual ~AnimalRightsGroup(){};

    AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish);

    virtual void update(AnimalEvent event) override;

    bool animals_ok();

    void kill(Animal &animal);

private:
    int n_monkeys;
    int n_tigers;
    int n_fish;
    int n_monkeys_fed;
    int n_tigers_scratched;
    int n_fish_teeth_brushed;
    int n_animals_killed;
};

#endif // ANIMAL_RIGHTS_GROUP_HPP