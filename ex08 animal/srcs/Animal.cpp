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

const std::string Animal::getType()
{
    return type;
}

void Animal::makeSound()
{
    std::cout << "A sound is made" << std::endl;
}