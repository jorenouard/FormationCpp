#include "Zombie.hpp"
#include <iostream>
#include <string>

void randomChump(std::string name)
{
    Zombie myRandomChump = Zombie(name);
    myRandomChump.announce();
}