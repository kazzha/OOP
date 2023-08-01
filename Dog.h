#pragma once
#include "Animal.h"
class Dog : public Animal
{
public: 
	enum SPECIES
	{
		RETRIEBER,
		MALTESE,
		POODLE
	};

private:
	SPECIES mSpecies;

public:
	Dog();
	~Dog();

	Dog::SPECIES GetSpecies() const;
	void SetSpecies(Dog::SPECIES species);

	void Bark();
};

