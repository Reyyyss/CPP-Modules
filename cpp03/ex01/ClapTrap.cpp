/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:06:51 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/09 12:02:17 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("ClapTrap"), Hit_points(10), Energy_points(10), AD(0) {
}

ClapTrap::~ClapTrap(){}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor" << std::endl;
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
	std::cout << Name << " attacks " << target << ", causing " << AD << " points of damage!" << std::endl;
	Energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << Name << " has taken " << amount << " points of damage" << std::endl;
	Hit_points -= static_cast<int>(amount);
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << Name << " has repaired " << amount << " points" << std::endl;
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