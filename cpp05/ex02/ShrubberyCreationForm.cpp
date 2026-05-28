#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& tgt) : AForm("ShrubberyCreation", 145, 137), target(tgt) {
	std::cout << "ShrubberyCreationForm is conscructed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::action() const {
	std::string file = target + "_shrubbery";
	std::ofstream of(file.c_str());
	if (!of) {
		std::cout << "problem creating the file" << std::endl;
		return ;
	}
	of << "_-_\n";
	of << "/~~   ~~\\ \n";
	of << "/~~         ~~\\ \n";
	of << "{               }";
	of << "\\  _-     -_  /\n";
	of << "~  \\\\ //  ~";
	of << "_- -   | | _- _";
	of << "_ -  | |   -_";
	of << "// \\\\";
	of.close();
}