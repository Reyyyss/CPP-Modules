#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string &type);
		const	std::string &getType() const;
		void	setType(const std::string &type);
};

#endif
