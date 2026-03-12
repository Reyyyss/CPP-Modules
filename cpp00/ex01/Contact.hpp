/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 22:51:38 by henrique-re       #+#    #+#             */
/*   Updated: 2026/03/10 23:14:56 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>


class Contact
{
private:
	std::string	FirstName;
	std::string LastName;
	std::string DarkestSecret;
	std::string	NickName;
	std::string PhoneNumber;
public:
	Contact();
	~Contact();
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getDarkestSecret(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;

	void	setFirstName(std::string name);
	void	setLastName(std::string name);
	void	setDarkestSecret(std::string secret);
	void	setNickName(std::string name);
	void	setPhoneNumber(std::string secret);
};


#endif