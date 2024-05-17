#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat {
	public:
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat &to_copy);
		Bureaucrat& operator=(const Bureaucrat &original);

		const std::string getName(const Bureaucrat &bureaucrat);
		const int getGrade(const Bureaucrat &bureaucrat);

	private:
		const std::string name;
		const int grade;
};

std::ostream &operator<<(std::ostream &output, Fixed const &val);

#endif // BUREAUCRAT_HPP