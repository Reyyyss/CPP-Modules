#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapper("Clapper");
	ClapTrap guy("Guy");

	clapper.attack(guy.getname());
	guy.takeDamage(clapper.get_dmgammount());
	std::cout << "ClapTrap HP:" << guy.get_hitpoints() << std::endl;
	guy.beRepaired(1);
	std::cout << "ClapTrap HP:" << guy.get_hitpoints() << std::endl;
}
