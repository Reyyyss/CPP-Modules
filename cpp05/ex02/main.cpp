#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat low("Bob", 75);
        Bureaucrat ok("Alice", 50);
        Bureaucrat top("Boss", 1);

        Form f1("FormA", 50, 25);
        std::cout << f1 << std::endl;

        low.signForm(f1);
        std::cout << f1 << std::endl;

        ok.signForm(f1);
        std::cout << f1 << std::endl;
        try {
            Form bad("BadForm", 0, 10);
        } catch (std::exception &e) {
            std::cout << "Construction failed: " << e.what() << std::endl;
        }
        top.signForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unhandled exception: " << e.what() << std::endl;
    }
    return 0;
}