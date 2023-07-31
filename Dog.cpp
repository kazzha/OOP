#include "Dog.h"

Dog::Dog()
{
}

Dog::~Dog()
{
}

Dog::SPECIES Dog::GetSpecies() const
{
    return Dog::SPECIES();
}

void Dog::SetSpecies(Dog::SPECIES species)
{
    mSpecies = species;
}

void Dog::Bark()
{
}
