/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:38:28 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/16 11:41:34 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

int	main(int argc, char **argv)
{	
	//std::string changed_file = file_name + ".replaced"; // add to the helper function after doing it
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments sent\n Expected: 4\n Sent:" << argc << std::endl;
		std::cout << "Correct usage: <./a.out file_name replaced_string string_to_replace>" << std::endl;
		return 1;
	}
	if (!argv[2]|| argv[2][0] == '\0')
	{
		std::cout << "Second argument is empty so there's to replace" << std::endl;
		return 1;
	}
	NotSed MyNotSed(argv[1], argv[2], argv[3]);
	MyNotSed.Replacer();
	
	/* std::ofstream replace_file(changed_file.c_str());
	replace_file.close();
	std::cout << "You used the program correctly"; */

	
	
} 