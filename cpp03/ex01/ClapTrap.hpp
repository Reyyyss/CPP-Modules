#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	protected:
		std::string Name;
		int Hit_points;
		int Energy_points;
		int AD;
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap (const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getname();
		int get_dmgammount();
		int	get_hitpoints();
};


#endif
