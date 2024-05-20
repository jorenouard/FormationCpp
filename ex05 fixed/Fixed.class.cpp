#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	this->fpv = 0;
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	*this = fix;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called\n";
	if (this != &fix)
	{
		this->fpv = fix.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Fixed const &val)
{
	output << "hello world" << val.getRawBits();
	return (output);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fpv);
}

void	Fixed::setRawBits(int const rb)
{
	this->fpv = rb;
	return ;
}