#include <iostream>
#include "ScavTrap.hpp"
#include <string>

using std::cout;
using std::endl;

ScavTrap::ScavTrap (std::string name): ClapTrap(name) {
	this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    cout << "ScavTrap default constructor <" << name << "> has been called!" << endl;
}

ScavTrap::~ScavTrap (void)
{
    cout << "Destructor for ScavTrap has been called" << endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		cout << "ScavTrap is out of energy points!" << endl;
		return;
	}
	cout << "ScavTrap " << this->name 
	     << " attacks " << target 
		 << " causing <amount> " 
		 << "points of damage!" << endl;
	this->energy_points -= 1;
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap " << this->name << " is now entered in gate mode" << endl;
}