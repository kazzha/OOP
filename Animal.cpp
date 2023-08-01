#include "Animal.h"
#include <iostream>

Animal::Animal() : mAge() , mWeight (1)
{
	std::cout << "[+] Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[-] Animal" << std::endl;
}

int Animal::GetAge() const
{
	return mAge;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::SetAge(int age)
{
	mAge = age;
}

void Animal::SetWeight(int weight)
{
	mWeight = weight;
}

void Animal::Sound()
{
	std::cout << "noise..." << std::endl;
}
