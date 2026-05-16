#include "FragTrap.hpp"

int main()
{
    std::cout << "-- Creating FragTraps --" << std::endl;
    FragTrap f1("Frodo");

    std::cout << "\n-- Actions --" << std::endl;
    f1.attack("Orc");
    f1.takeDamage(30);
    std::cout << "FragTrap HP:" << f1.get_hitpoints() << std::endl;
    f1.highFiveGuys();

    std::cout << "\n-- Copy and assignment --" << std::endl;
    FragTrap f2 = f1;
    FragTrap f3("Gimli");
    f3 = f1;

    std::cout << "\n-- End main (destructors will run) --" << std::endl;
    return 0;
}
