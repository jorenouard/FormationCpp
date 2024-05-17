#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat &to_copy);
		Bureaucrat& operator=(const Bureaucrat &original);

		const std::string getName(const Bureaucrat &bureaucrat);
		const int getGrade(const Bureaucrat &bureaucrat);

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw();
		};

	protected:
		const std::string name;
		const int grade;
};

//std::ostream &operator<<(std::ostream &output, Fixed const &val);

#endif // BUREAUCRAT_HPP