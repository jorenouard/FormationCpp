#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie (std::string nickName)
{
    std::cout << "nickname is " << nickName << std::endl;
    this->nickName = nickName;
}

Zombie::~Zombie()
{
    std::cout << this->getName() << " died." << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return this->name;
}