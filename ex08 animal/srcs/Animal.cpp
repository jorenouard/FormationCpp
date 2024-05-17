#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal() : type("Dog")
{
    std::cout << "An animal is born." << std::endl;
}

Animal::~Animal()
{
    std::cout << "An animal is died." << std::endl;
}

const std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "A sound is made" << std::endl;
}