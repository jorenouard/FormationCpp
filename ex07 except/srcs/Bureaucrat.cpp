#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, const int grade)
: name(name), grade(grade)
{
	std::cout << "Default constructor " << name << " has been tried." << std::endl;
	
	if (grade == 0)
	{
		throw "Grade too low.";
	}

	else if (grade == 0)
	{
		throw "Grade too high.";
	}

	std::cout << "Default constructor " << name << " has been called." << std::endl;

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Defaut destructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy)
{
	this->name = to_copy.name;
	this->grade = to_copy.grade;
	std::cout << "a copy has been made." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->grade = original.grade;
	}

	std::cout << "Copy assignment has been made." << std::endl;
	return *this;
}

const std::string Bureaucrat::getName(const Bureaucrat &bureaucrat)
{
	return bureaucrat.name;
}

const int Bureaucrat::getGrade(const Bureaucrat &bureaucrat)
{
	return bureaucrat.grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}