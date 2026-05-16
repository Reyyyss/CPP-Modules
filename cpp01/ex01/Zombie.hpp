#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;
		void	eponym(std::string name);
};

	Zombie* zombieHorde(int n_zombies, std::string name);

#endif
