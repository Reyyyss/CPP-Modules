/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 01:54:56 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/04 14:14:44 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int	main(void)
{
	randomChump("Stacky");
	Zombie *z = newZombie("Heapy");
	if (z)
	{
		z->announce();
		delete z;
	}

	return 0;
}