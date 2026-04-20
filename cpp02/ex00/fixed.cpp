/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:36:13 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/16 22:02:06 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
	: _fixed_point(0)
{
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor" << std::endl;
	_fixed_point = getRawBits();
}

int Fixed::getRawBits(void)
{
	
}

void	Fixed::setRawBits(int const raw)
{
	
}

