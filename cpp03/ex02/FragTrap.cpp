/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:44:13 by hcarrasq          #+#    #+#             */
/*   Updated: 2026/04/30 14:20:23 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ScavTrap(name){
	Energy_points = 100;
	AD = 30;
}


FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other) {

}