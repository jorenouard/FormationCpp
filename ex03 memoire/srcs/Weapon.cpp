#include<string>
#include "Weapon.hpp"

const std::string *Weapon::getType()
{
    const std::string *refType = this->type;
    return refType;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}