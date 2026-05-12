/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:22:54 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/09 11:58:45 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapper("Clapper");
	ClapTrap guy("Guy");

	clapper.attack(guy.getname());
	guy.takeDamage(clapper.get_dmgammount());
	std::cout << "ClapTrap HP:" << guy.get_hitpoints() << std::endl;
	guy.beRepaired(1);
	std::cout << "ClapTrap HP:" << guy.get_hitpoints() << std::endl;
}