/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 01:55:02 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/04 14:14:12 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif