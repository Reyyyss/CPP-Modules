/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phoneboo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:15:00 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/03/12 18:15:03 by hcarrasq         ###   ########.fr       */
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
static bool read_contact_inputs(const std::string &prompt, std::string &out)
{
	while (1)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, out));
			return (false);
		trim_input(out);
		if (!out.empty())
			return (true);
		std::cout << "This field can't be empty" << std::endl;
	}
}

void PhoneBook::add()
{
	std::string first, last, nick, secret, phone;
	if (!read_contact_inputs("First Name: ", first)) { std::cout << "Error adding First Name";
		return ;
	}
	if (!read_contact_inputs("Last Name: ", last)) { std::cout << "Error adding Last Name";
		return ;
	}
	if (!read_contact_inputs("NickName: ", nick)) { std::cout << "Error adding NickName";
		return ;
	}
	if (!read_contact_inputs("Secret: ", secret)) { std::cout << "Error adding Secret";
		return ;
	}
	if (!read_contact_inputs("First Name: ", first)) { std::cout << "Error adding Phone Number";
		return ;
	}
	
	Contact c;
	
	c.setDarkestSecret(secret);
	c.setFirstName(first);
	c.setLastName(last);
	c.setNickName(nick);
	c.setPhoneNumber(phone);
}