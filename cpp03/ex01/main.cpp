/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:02:41 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/12 01:49:20 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
	std::cout << "-- Creating ScavTraps --" << std::endl;
	ScavTrap a("Alpha");
	ScavTrap b("Bravo");

	std::cout << "\n-- Actions --" << std::endl;
	a.attack(b.getname());
	b.takeDamage(a.get_dmgammount());
	std::cout << "ScavTrap HP:" << b.get_hitpoints() << std::endl;
	b.beRepaired(5);
	std::cout << "ScavTrap HP:" << b.get_hitpoints() << std::endl;
	b.guardGate();

	std::cout << "\n-- Copying and assignment --" << std::endl;
	ScavTrap c = a;
	ScavTrap d("Delta");
	d = b;

	std::cout << "\n-- End main (destructors will run) --" << std::endl;
	return 0;
}

