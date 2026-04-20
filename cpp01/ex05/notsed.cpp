/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notsed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:30:46 by henrique-re       #+#    #+#             */
/*   Updated: 2026/04/16 10:52:56 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

NotSed::NotSed(const std::string &replacement_file, const std::string &replaced, const std::string &replacement)
	: input_file(replacement_file),  search_str(replaced), replace_str(replacement)
{
		
}

NotSed::~NotSed()
{
	
}

void	NotSed::Replacer()
{
	std::ifstream in_file(input_file.c_str(), std::ios::in | std::ios::binary);
	if (!in_file){
		std::cout << "Error trying to create the input file stream" << std::endl;
		return ;
	}
	std::string file_str;
	file_str.assign(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
	in_file.close();	
}