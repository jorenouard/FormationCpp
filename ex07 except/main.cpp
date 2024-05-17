#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat nicolas("nicolas", 50);
	std::cout << nicolas;
	nicolas.incrementBureaucrat();
	std::cout << nicolas;
	nicolas.decrementBureaucrat();
	std::cout << nicolas;
    std::cout << nicolas.getName() + '\n';
	try
	{
		Bureaucrat Sofie("Sofie", 0);
		std::cout << Sofie;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat Danielle("Danielle", 1000);
		std::cout << Danielle;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat Tarantino("Tarantino", 1);
		std::cout << Tarantino;
		Tarantino.incrementBureaucrat();
		std::cout << Tarantino;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat Djokovic("Djokovic", 150);
		std::cout << Djokovic;
		Djokovic.decrementBureaucrat();
		std::cout << Djokovic;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	return (0);
}