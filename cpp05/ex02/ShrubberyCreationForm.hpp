#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "AForm.hpp"
#include "fstream"


class ShrubberyCreationForm : public AForm{
	private:
		const std::string target;
	public:
		ShrubberyCreationForm(const std::string& tgt);
		virtual ~ShrubberyCreationForm(); 

		void	execute(const Bureaucrat& executor) const;
};

#endif