#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* meta_animal = new Animal();

	cout << dog->getType() << "-> "; 
	dog->makeSound();

	cout << cat->getType() << "-> "; 
	cat->makeSound();

	cout << endl;

	meta_animal->makeSound();

	cout << endl;
	return 0;
}