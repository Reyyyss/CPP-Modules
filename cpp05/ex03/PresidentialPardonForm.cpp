#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &tgt) : AForm("PresidentialPardonForm", 25, 5), target(tgt) {
	std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentailPardonForm Destructor called	" << std::endl;
}

void	PresidentialPardonForm::action() const {
	std::cout << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}