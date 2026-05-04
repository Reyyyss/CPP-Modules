/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 00:00:00 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::cout << "--- constructors ---" << std::endl;
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(c);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << std::endl << "--- assignment ---" << std::endl;
	a = b;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl << "--- conversions ---" << std::endl;
	std::cout << "a.toInt() = " << a.toInt() << std::endl;
	std::cout << "c.toInt() = " << c.toInt() << std::endl;
	std::cout << "c.toFloat() = " << c.toFloat() << std::endl;

	std::cout << std::endl << "--- raw bits ---" << std::endl;
	std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl;
	std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl;

	return 0;
}
