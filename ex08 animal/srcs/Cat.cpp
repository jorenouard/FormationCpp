#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
    std::cout << "A Cat is born." << std::endl;
}

Cat::~Cat()
{
    std::cout << "A Cat is died." << std::endl;
}

const std::string Cat::getType()
{
    return type;
}

void Cat::makeSound()
{
    std::cout << "Meowing" << std::endl;
}