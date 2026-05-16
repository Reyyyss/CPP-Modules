#include "ScavTrap.hpp"

int main()
{
	std::cout << "-- Creating ScavTraps --" << std::endl;
	ScavTrap a("Alpha");
	ScavTrap b("Bravo");

	std::cout << "\n-- Actions --" << std::endl;
	a.attack(b.getname());
	b.takeDamage(a.get_dmgammount());
	std::cout << "ScavTrap HP:" << b.get_hitpoints() << std::endl;
	b.beRepaired(5);
	std::cout << "ScavTrap HP:" << b.get_hitpoints() << std::endl;
	b.guardGate();

	std::cout << "\n-- Copying and assignment --" << std::endl;
	ScavTrap c = a;
	ScavTrap d("Delta");
	d = b;

	std::cout << "\n-- End main (destructors will run) --" << std::endl;
	return 0;
}

