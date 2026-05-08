/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:47:32 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/13 14:00:02 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack() const{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}