#include "Form.hpp"

Form::Form(const std::string &n, int sg, int eg) : name(n), is_signed(false), sign_grade(sg), execute_grade(eg) {
	if (sign_grade < 1 || execute_grade < 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	std::cout << "Copy Construcor" << std::endl;
}

Form& Form::operator=(const Form &other) {
	if (this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

Form::~Form() {
	std::cout << "Destructor called"  << std::endl;
}

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > sign_grade)
        throw Form::GradeTooLowException();
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
	return os;
}