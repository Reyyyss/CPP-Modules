#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &tgt) : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{

}