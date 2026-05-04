/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:44:55 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/21 15:44:57 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _fixed_point(other._fixed_point) {
    std::cout << "Copy constructor" << std::endl;
}

Fixed::Fixed(const int fixed_int) {
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = fixed_int << _fractional_bits;
}

Fixed::Fixed(const float fixed_float) {
    std::cout << "Float constructor called" << std::endl;
    _fixed_point = static_cast<int>(roundf(fixed_float * (1 << _fractional_bits)));
}

Fixed::~Fixed() {
    std::cout << "Destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator" << std::endl;
    if (this != &other)
        _fixed_point = other._fixed_point;
    return *this;
}

int Fixed::getRawBits(void) const {
    return _fixed_point;
}

void Fixed::setRawBits(int const raw) {
    _fixed_point = raw;
}

bool Fixed::operator>(const Fixed& other) const {
    return _fixed_point > other._fixed_point;
}

bool Fixed::operator<(const Fixed& other) const {
    return _fixed_point < other._fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const {
    return _fixed_point >= other._fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const {
    return _fixed_point <= other._fixed_point;
}

bool Fixed::operator==(const Fixed& other) const {
    return _fixed_point == other._fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const {
    return _fixed_point != other._fixed_point;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result._fixed_point = this->_fixed_point + other._fixed_point;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result._fixed_point = this->_fixed_point - other._fixed_point;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;

    // use wider type to avoid overflow in intermediate multiplication
    long long prod = static_cast<long long>(this->_fixed_point) * other._fixed_point;

    // rescale back to fixed-point (divide by 2^fractional_bits)
    result._fixed_point = static_cast<int>(prod >> _fractional_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other._fixed_point == 0) {
        std::cerr << "Fixed: division by zero" << std::endl;
        return Fixed(0);
    }

    Fixed result;
    long long num = (static_cast<long long>(this->_fixed_point) << _fractional_bits);

    result._fixed_point = static_cast<int>(num / other._fixed_point);
    return result;
}

Fixed& Fixed::operator++() {
    ++_fixed_point;
    return *this;
}

Fixed& Fixed::operator--() {
    --_fixed_point;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++_fixed_point;
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --_fixed_point;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a._fixed_point < b._fixed_point) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a._fixed_point > b._fixed_point) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a._fixed_point < b._fixed_point) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a._fixed_point > b._fixed_point) ? a : b;
}

int Fixed::toInt(void) const {
    // shift is the “native” fixed-point int conversion
    return _fixed_point >> _fractional_bits;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_fixed_point) / static_cast<float>(1 << _fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}