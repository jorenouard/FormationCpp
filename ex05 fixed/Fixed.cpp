#include "Fixed.class.hpp"

const int Fixed::fbits = 8;

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called\n";
	this->fpv = val << fbits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	this->fpv = val * (1 << fbits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fpv) / (1 << fbits));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->fpv >> fbits));
}