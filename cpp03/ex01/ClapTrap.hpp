/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:53:38 by henrique-re       #+#    #+#             */
/*   Updated: 2026/05/09 12:01:37 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <iostream>
#include <fstream>
#include <float.h>
#include <math.h>

class ClapTrap {
	protected:
		std::string Name;
		int Hit_points;
		int Energy_points;
		int AD;
	public:
		ClapTrap();
		ClapTrap (const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getname();
		int get_dmgammount();
		int	get_hitpoints();
};


#endif