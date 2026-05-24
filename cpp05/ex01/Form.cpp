#include "Form.hpp"

Form::Form() : name("Form"), sign_grade(75), execute_grade(32) {
	std::cout << "Default Constructor" << std::endl;
}

Form::Form(const Form &other) : name(other.name), sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	std::cout << "Copy Construcor" << std::endl;
}

Form& Form::operator=(const Form &other) {
	if (this != &other)
		*this = other;
	return *this;
}

Form::~Form() {
	std::cout << "Destructor called"  << std::endl;
}

void	Form::beSigned(Bureaucrat b) {
	if (b.getGrade() < sign_grade)
	{
		std::cout << b.getName() << "couldn't sign" << name << "because ";
		throw Form::GradeTooLowException();
	}
	std::cout << b.getName() << "signed" << name << std::endl;
	is_signed = true;	
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade too low"; 
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
	os << f.getname() << "has a sign grade of " << f.getsign_grade() << "and a execution grade of " << f.getexecute_grade() << std::endl; 
}