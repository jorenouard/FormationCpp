#include <cstdlib> // EXIT_* MACROS
#include <iostream> // std::cin, std::cout, std::endl
#include <string>
#include <stdio.h>
#include "includes/Weapon.hpp"
#include "includes/HumanA.hpp"
#include "includes/HumanB.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}