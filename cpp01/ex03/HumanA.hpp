#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(const std::string &name, Weapon &Weapon);
		void	attack() const;
};

#endif
