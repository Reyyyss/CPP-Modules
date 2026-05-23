#include "Form.hpp"

Form::Form() : name("Form"), sign_grade(75), execute_grade(32) {
	std::cout << "Default Constructor" << std::endl;
}

Form::Form(const Form &other) : name(other.name), sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	std::cout << "Copy Construcor" << std::endl;
}

Form& Form::operator=(const Form &other) {
	
}

Form::~Form() {
	std::cout << "Destructor called"  << std::endl;
}

std::string Form::getname() const {
	return (name);
}

int Form::getsign_grade() const {
	return (sign_grade);
}

int Form::getexecute_grade() const {
	return (execute_grade);
}

std::ostream& operator << (std::ostream& os, const Form& f) {
	
}