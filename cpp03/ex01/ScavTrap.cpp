/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:23:59 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/05/12 01:46:07 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    Hit_points = 100;
    Energy_points = 50;
    AD = 20;
    std::cout << "ScavTrap " << Name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor from " << other.Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << Name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (Hit_points <= 0) {
        std::cout << "ScavTrap " << Name << " cannot attack because it has no hit points!" << std::endl;
        return;
    }
    if (Energy_points <= 0) {
        std::cout << "ScavTrap " << Name << " has no energy left to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AD << " points of damage!" << std::endl;
    Energy_points -= 1;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
