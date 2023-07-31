#include "Cat.h"
#include <iostream>

Cat::Cat() : mBreed{BREED::KOREANSHORT }
{
    std::cout << "\t [+] Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\t [-] Cat" << std::endl;
}

Cat::BREED Cat::GetBreed() const
{
    return mBreed;
}

void Cat::SetBreed(BREED breed)
{
    mBreed = breed;
}

void Cat::Grooming()
{
    std::cout << "grooming..." << std::endl;
}
