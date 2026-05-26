#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int sign_grade;
	const int execute_grade;
	bool is_signed;
public:
	Form(const std::string &n, int sg, int eg);
	Form(const Form &other);
	Form& operator=(const Form &other);
	~Form();

	std::string	getname() const;
	int	getsign_grade() const;
	int	getexecute_grade() const;
	void beSigned(const Bureaucrat& b);


	class GradeTooHighException : public std::exception { 
		public : 
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception { 
		public : 
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif