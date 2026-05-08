/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 03:56:50 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/20 15:41:41 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv){
	if (argc != 2){
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
}