/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 03:58:27 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/20 15:58:26 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldn`t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I`ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(){
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain_list(int index)
{
	void (Harl::*safoda[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch(index)
	{
		case 1:
			(this->*safoda[0])();
		case 2:
			(this->*safoda[1])();
		case 3:
			(this->*safoda[2])();
		case 4:
			(this->*safoda[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::complain(std::string complain_level)
{
	std::string strin[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (complain_level == strin[i])
		{
			this->complain_list(i + 1);
		}
	}
}