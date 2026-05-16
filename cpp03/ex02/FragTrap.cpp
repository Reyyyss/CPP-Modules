#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ScavTrap(name){
	Hit_points = 100;
	Energy_points = 100;
	AD = 30;
	std::cout << "FragTrap " << Name << " constructed" << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other) {
	std::cout << "FragTrap copy constructor from " << other.Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
        ScavTrap::operator=(other);
    std::cout << "FragTrap copy assignment called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destroyed" << std::endl;
}

void FragTrap::highFiveGuys(void) {
    std::cout << "FragTrap " << Name << " requests a positive high five" << std::endl;
}
