#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		std::size_t	contact_index;
		std::size_t	contact_count;
		
	public:
		PhoneBook();
		void	add();
		void	search();
};


#endif
