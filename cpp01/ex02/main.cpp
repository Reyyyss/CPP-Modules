/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:31:47 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/13 12:36:01 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_PTR = &str;
	std::string &str_REF = str;

	std::cout << "Memory address of str:      " << &str << std::endl;
    std::cout << "Memory address held by PTR: " << str_PTR << std::endl;
    std::cout << "Memory address held by REF: " << &str_REF << std::endl;

	std::cout << "Value of str:               " << str << std::endl;
    std::cout << "Value pointed by PTR:       " << *str_PTR << std::endl;
    std::cout << "Value pointed by REF:       " << str_REF << std::endl;
	
}