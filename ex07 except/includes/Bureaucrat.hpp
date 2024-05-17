#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat &to_copy);
		Bureaucrat& operator=(const Bureaucrat &original);

		const std::string getName() const;
		int getGrade() const;

		void incrementBureaucrat();
		void decrementBureaucrat();

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
		int grade;
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &val);

#endif // BUREAUCRAT_HPP