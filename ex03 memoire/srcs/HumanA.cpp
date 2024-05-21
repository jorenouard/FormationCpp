#include "HumanA.hpp"
#include <iostream>
#include <string>

void HumanA::HumanA (std::string name, Weapon weapon) : name(name), weapon(weapon) 
{
    std::cout << name << ", a HumanA is created." << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}