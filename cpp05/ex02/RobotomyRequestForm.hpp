#ifndef ROBOTOM_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
	private:
		const std::string target;
	public:
		RobotomyRequestForm(const std::string &tgt);
		~RobotomyRequestForm();

		void	execute(const Bureaucrat& executor) const;
};

#endif