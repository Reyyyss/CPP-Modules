/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:38:39 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/13 13:59:15 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &Weapon)
	: name(name), weapon(Weapon)
{

}

void	HumanA::attack() const{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}