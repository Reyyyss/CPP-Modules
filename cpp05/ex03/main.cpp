#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat low("Low", 150);
        Bureaucrat mid("Mid", 50);
        Bureaucrat high("High", 1);

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Bender");
        std::string pres_target = "Arthur Dent";
        PresidentialPardonForm pardon(pres_target);

        std::cout << shrub << std::endl;
        std::cout << robo << std::endl;
        std::cout << pardon << std::endl;

        low.signForm(shrub);
        high.signForm(shrub);
        high.executeForm(shrub);

        mid.signForm(robo);
        high.executeForm(robo);

        high.signForm(pardon);
        high.executeForm(pardon);

    } catch (std::exception &e) {
        std::cout << "Unhandled exception: " << e.what() << std::endl;
    }
    return 0;
}