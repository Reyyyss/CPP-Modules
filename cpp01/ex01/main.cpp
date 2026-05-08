/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:02:00 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/05/04 14:02:11 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "Bob");
	if (!horde)
		return 1;
	for (int i = 0; i < N; ++i)
		horde[i].announce();
	delete [] horde;
	return 0;
}