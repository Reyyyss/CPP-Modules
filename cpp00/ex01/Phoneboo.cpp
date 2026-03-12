/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phoneboo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:15:00 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/03/12 12:16:01 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	
}

static void	trim_input(std::string &s)
{
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {	return
 		!std::isspace(ch);}));
	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch){ return 
		!std::isspace(ch); }).base(), s.end());
}

static std::string formating_field(const std::string &field)
{
	const std::size_t	width = 10;
	if (field.size() > width)
		return field.substr(0, width - 1) + ".";
	else
		return std::string(width - field.size(), ' ') + field;
}

void PhoneBook::add()
{
	while(1)
	{
		std::string input;
	}
}