#include "ClapTrap.hpp"



ClapTrap::ClapTrap() : Name("ClapTrap"), Hit_points(10), Energy_points(10), AD(0) {
	std::cout << "ClapTrap " << Name << " constructed (default)" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : Name(name), Hit_points(10), Energy_points(10), AD(0) {
	std::cout << "ClapTrap " << Name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "ClapTrap copy constructor from " << other.Name << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator" << std::endl;
	if (this != &other)
	{
		Name = other.Name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		AD = other.AD;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (Hit_points <= 0) {
		std::cout << "ClapTrap " << Name << " cannot attack because it has no hit points!" << std::endl;
		return;
	}
	if (Energy_points <= 0) {
		std::cout << "ClapTrap " << Name << " has no energy left to attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AD << " points of damage!" << std::endl;
	Energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " has taken " << amount << " points of damage" << std::endl;
	Hit_points -= static_cast<int>(amount);
	if (Hit_points <= 0)
		std::cout << "ClapTrap " << Name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (Hit_points <= 0) {
		std::cout << "ClapTrap " << Name << " cannot be repaired because it is dead!" << std::endl;
		return;
	}
	if (Energy_points <= 0) {
		std::cout << "ClapTrap " << Name << " has no energy left to repair!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " has repaired " << amount << " points" << std::endl;
	Hit_points += static_cast<int>(amount);
	Energy_points -= 1;
}

std::string ClapTrap::getname()
{
	return (Name);
}

int	ClapTrap::get_dmgammount()
{
	return (AD);
}

int	ClapTrap::get_hitpoints(){
	return (Hit_points);
}
