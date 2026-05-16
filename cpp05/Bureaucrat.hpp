#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	const int GRADE_MAX = 1;
	const int GRADE_MIN = 150;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
