#include "zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : name(name)
{
    
}

void Zombie::announce(std::string name)
{
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}