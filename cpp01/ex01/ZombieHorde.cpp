/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:50:38 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/05/04 13:54:11 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name) {
	if (N <= 0 || name.empty())
		return NULL;
	Zombie *Zombie_Horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		Zombie_Horde[i].eponym(name);
	}
	return Zombie_Horde;
}