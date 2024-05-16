#include "zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie* newZombie(std::string name)
{
    return Zombie::Zombie(name);
};