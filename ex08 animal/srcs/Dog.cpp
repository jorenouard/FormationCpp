#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
    std::cout << "A dog is born." << std::endl;
}

Dog::~Dog()
{
    std::cout << "A dog is died." << std::endl;
}

const std::string Dog::getType()
{
    return type;
}

void Dog::makeSound()
{
    std::cout << "Barking" << std::endl;
}