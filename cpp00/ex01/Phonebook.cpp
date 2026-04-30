/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:15:00 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/04/27 12:00:47 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool	is_not_space(unsigned char ch)
{
	return (!std::isspace(ch));
}

PhoneBook::PhoneBook()
{
	this->contact_index = 0;
	this->contact_count = 0;
}

static void	trim_input(std::string &s)
{
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), is_not_space));
	s.erase(std::find_if(s.rbegin(), s.rend(), is_not_space).base(), s.end());
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
		if (!std::getline(std::cin, out))
			return (false);
		trim_input(out);
		if (!out.empty())
			return (true);
		std::cout << "This field can't be empty" << std::endl;
	}
}

static bool parse_index(const std::string &input, std::size_t &index)
{
	std::istringstream	iss(input);
	long				value;
	char				extra;

	if (!(iss >> value))
		return (false);
	if (iss >> extra)
		return (false);
	if (value < 0)
		return (false);
	index = static_cast<std::size_t>(value);
	return (true);
}

static std::string index_to_string(std::size_t index)
{
	std::ostringstream	oss;

	oss << index;
	return (oss.str());
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
	if (!read_contact_inputs("Phone: ", phone)) { std::cout << "Error adding Phone Number";
		return ;
	}
	
	Contact c;
	
	c.setDarkestSecret(secret);
	c.setFirstName(first);
	c.setLastName(last); 
	c.setNickName(nick);
	c.setPhoneNumber(phone);
	this->contacts[this->contact_index] = c;
	this->contact_index = (this->contact_index + 1) % 8;
	if (this->contact_count < 8)
		this->contact_count++;
	std::cout << "Contact saved successfully" << std::endl;
}

void	PhoneBook::search() 
{
	std::size_t index = 0;
	std::size_t selected_index;
	std::string choice;

	if (this->contact_count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	while (index < this->contact_count)
	{
		std::cout << formating_field(index_to_string(index)) << "|";
		std::cout << formating_field(this->contacts[index].getFirstName()) << "|";
		std::cout << formating_field(this->contacts[index].getLastName()) << "|";
		std::cout << formating_field(this->contacts[index].getNickName()) << std::endl;
		index++;
	}
	std::cout << "Select index to display: ";
	if (!std::getline(std::cin, choice))
	{
		std::cout << "Problem reading input" << std::endl;
		return ;
	}
	trim_input(choice);
	if (!parse_index(choice, selected_index) || selected_index >= this->contact_count)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "First Name: " << this->contacts[selected_index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[selected_index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[selected_index].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->contacts[selected_index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[selected_index].getDarkestSecret() << std::endl;
}

