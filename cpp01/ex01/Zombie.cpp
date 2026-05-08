/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:46:05 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/05/04 13:50:28 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "Zombie";
}

Zombie::Zombie(std::string name) { 
	_name = name;
}

Zombie::~Zombie() {
	
}

void	Zombie::announce() const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void	Zombie::eponym(std::string name) {
	_name = name;
}