/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:18:07 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/03/12 11:26:34 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook Pb;
	std::string	input;

	while(1)
	{
		std::cout <<"Enter a valid input" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof()) break;
		if (input == "ADD")
			Pb.add();
		else if (input == "SEARCH")
			Pb.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Your input is not a valid one\n\nValid inputs:ADD|SEARCH|EXIT" << std::endl;
	}
}