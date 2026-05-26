#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(const std::string &n, int sg, int eg) : name(n), sign_grade(sg), execute_grade(eg), is_signed(false) {
	if (sign_grade < 1 || execute_grade < 1)
		throw AForm::GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw AForm::GradeTooLowException();
}


AForm::AForm(const AForm &other) : name(other.name), sign_grade(other.sign_grade), execute_grade(other.execute_grade), is_signed(other.is_signed) {
	std::cout << "Copy Construcor" << std::endl;
}

AForm& AForm::operator=(const AForm &other) {
	if (this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

AForm::~AForm() {
	std::cout << "Destructor called"  << std::endl;
}

void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > sign_grade)
        throw AForm::GradeTooLowException();
    is_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low"; 
}

const char* AForm::FormNotSigned::what() const throw() {
	return "This Form is not Signed";
}

std::string AForm::getname() const {
	return (name);
}

int AForm::getsign_grade() const {
	return (sign_grade);
}

int AForm::getexecute_grade() const {
	return (execute_grade);
}

std::ostream& operator << (std::ostream& os, const AForm& f) {
	os << f.getname() << " has a sign grade of " << f.getsign_grade() << " and a execution grade of " << f.getexecute_grade() << std::endl;
	return os;
}