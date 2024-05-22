#include<string>
#include "Weapon.hpp"

const std::string &Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}