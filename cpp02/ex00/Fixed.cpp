#include "Fixed.hpp"

Fixed::Fixed()
	: _fixed_point(0)
{
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor" << std::endl;
	_fixed_point = other._fixed_point;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator" << std::endl;
	if (this != &other)
		_fixed_point = other._fixed_point;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits" << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits" << std::endl;
	this->_fixed_point = raw;
}

