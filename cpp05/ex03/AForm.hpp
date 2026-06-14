#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	const int sign_grade;
	const int execute_grade;
	bool is_signed;
public:
	AForm(const std::string &n, int sg, int eg);
	AForm(const AForm &other);
	AForm& operator=(const AForm &other);
	virtual ~AForm();

	std::string    getname() const;
	int    getsign_grade() const;
	int    getexecute_grade() const;
	void   beSigned(const Bureaucrat& b);
	void execute(Bureaucrat const &executor) const;


	class GradeTooHighException : public std::exception { 
		public : 
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception { 
		public : 
			virtual const char* what() const throw();
	};

	class FormNotSigned : public std::exception {
		public :
			virtual const char* what() const throw();
		};
		bool isSigned() const;

	protected:
		virtual void action() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif