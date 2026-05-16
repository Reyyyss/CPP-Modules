#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void	attack() const;
};

#endif
