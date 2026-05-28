#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(const std::string &tgt) : AForm("RobotomyRequestForm", 72, 45), target(tgt) {
	std::srand(std::time(nullptr));
	std::cout << "Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

void RobotomyRequestForm::action() const {
	int success_rate = std::rand();

	if ((success_rate % 2) == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed on " << target << "." << std::endl;
}