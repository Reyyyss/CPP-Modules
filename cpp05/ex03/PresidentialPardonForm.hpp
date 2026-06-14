#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
	public: 
		PresidentialPardonForm(const std::string &tgt);
		~PresidentialPardonForm();

		void action() const;
};

#endif