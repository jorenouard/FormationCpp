#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{ 
    Zombie* zombieArray[2] = new Zombie{"nickname"};//[N];
    /*for (int i = 0; i < N; i++)
    {
        zombieArray[i].setName(name);
    }*/
    return (zombieArray);
}