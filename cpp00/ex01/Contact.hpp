#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>


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
