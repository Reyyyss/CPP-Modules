#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(150){
	std::cout << "name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	std::cout << "Copy constructor" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}
