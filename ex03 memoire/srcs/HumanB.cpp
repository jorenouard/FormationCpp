#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB (std::string name) : name(name) 
{
    std::cout << name << ", a HumanB is created." << std::endl;
}

HumanB::HumanB (std::string name, Weapon &weapon) : name(name), weapon(weapon) 
{
    std::cout << name << ", a HumanB is created and has a weapon " << weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) : weapon(weapon)
{
    std::cout << name << ", a HumanB has now a weapon " << weapon.getType() << std::endl;

}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}