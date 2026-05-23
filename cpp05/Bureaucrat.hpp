#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
