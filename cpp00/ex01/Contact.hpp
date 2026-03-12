/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 22:51:38 by henrique-re       #+#    #+#             */
/*   Updated: 2026/03/12 12:06:42 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>


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
		std::string	getDarkestSecret(void) const; //this 5 functions are getter functions
		std::string	getNickName(void) const;
		std::string	getPhoneNumber(void) const;

		void	setFirstName(std::string name);
		void	setLastName(std::string name);
		void	setDarkestSecret(std::string secret); //this 5 functions are setter functions
		void	setNickName(std::string name);
		void	setPhoneNumber(std::string secret);
};


#endif