#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie(std::string name)
{
    Zombie* myNewZombie = new Zombie(name);
    return myNewZombie;
};