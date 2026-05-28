#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
	private:
		const std::string target;
	public:
		RobotomyRequestForm(const std::string &tgt);
		~RobotomyRequestForm();

		void	action() const;
};

#endif