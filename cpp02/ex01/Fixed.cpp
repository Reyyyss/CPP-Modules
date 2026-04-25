/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:27:37 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/21 15:40:18 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor" << std::endl;
	*this = other;
}

Fixed::Fixed(const int fixed_int){
	std::cout << "Fixed_int constructor called" << std::endl;
	_fixed_point = fixed_int << this->_fractional_bits;
}

Fixed::Fixed(const float fixed_float){
	std::cout << "Fixed_float constructor called" << std::endl;
	_fixed_point = (roundf(fixed_float * (1 << this->_fractional_bits)));
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

int Fixed::toInt(void)const {
	return _fixed_point / (1 << _fractional_bits);
}

float Fixed::toFloat(void)const {
	return (static_cast<float>(_fixed_point) / (static_cast<float>(1 << _fractional_bits)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return os;
}
