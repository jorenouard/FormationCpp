#include<string>
#include<iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string name) : name(name)
{
    
}

const std::string &Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(const Weapon& weapon)
{
    std::cout << "copy constructor called" << std::endl;
    *this = weapon;
}

Weapon &Weapon::operator=(const Weapon &weapon)
{
    std::cout << "Assignation operator called\n";
	if (this != &weapon)
	{
		this->setType(weapon.getType());
	}
    return *this;
}