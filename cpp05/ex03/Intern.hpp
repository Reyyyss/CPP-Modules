#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	private:

	public:
		Intern();
		~Intern();

		AForm* makeForm(std::string Form_Name, std::string &target);
};

#endif