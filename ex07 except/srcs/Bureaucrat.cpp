#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade)
: name(name), grade(grade)
{
	std::cout << "Default constructor " << name << " has been tried." << std::endl;
	
	if (grade == 0)
	{
		throw GradeTooLowException();
	}

	else if (grade > 150)
	{
		throw GradeTooHighException();
	}

	std::cout << "Default constructor " << name << " has been called." << std::endl;

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Defaut destructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy)
{
	*this = to_copy;
	std::cout << "a copy has been made." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &original)
{
	if (this != &original)
	{
		this->grade = original.grade;
	}

	std::cout << "Copy assignment has been made." << std::endl;
	return *this;
}

const std::string Bureaucrat::getName()
{
	return this->name;
}

const int Bureaucrat::getGrade()
{
	return this->grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

void Bureaucrat::incrementBureaucrat()
{
	this->grade -= 1;
	if (this->grade == 0) throw GradeTooLowException();
}

void Bureaucrat::decrementBureaucrat()
{
	this->grade += 1;
	if (this->grade == 0) throw GradeTooHighException();
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (output);
}