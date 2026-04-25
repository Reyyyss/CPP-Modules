/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:06:51 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/23 13:22:23 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(Name), Hit_points(10), Energy_points(10), AD(0) {
	
}

ClapTrap::~ClapTrap(){
	
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor" << std::endl;
	*this = other;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "Attacking" << target << std::endl;
	this->Energy_points - 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->Name << "have taken damage" << std::endl;
	this->Hit_points - amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->Name << "have repaired himself" << std::endl;
	this->Hit_points + amount;
	this->Energy_points - 1;
}