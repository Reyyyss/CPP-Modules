/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 01:55:05 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/04 14:14:14 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

