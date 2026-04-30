/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:23:59 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/04/27 14:48:41 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(){
	Hit_points = 100;
	Energy_points = 50;
	AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy constructor" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	if (this != &other) ClapTrap::operator=(other);
	std::cout << "ScavTrap copy operator called" << std::endl;
}

ScavTrap::~ScavTrap(){

}

void	ScavTrap::GuardGate() {
	std::cout << Name << "is now in Gate keeper mode" << std::endl;
}