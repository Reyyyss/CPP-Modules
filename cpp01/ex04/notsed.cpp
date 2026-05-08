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
#include <iterator>

NotSed::NotSed(const std::string &replacement_file, const std::string &replaced, const std::string &replacement)
	: search_str(replaced), replace_str(replacement), input_file(replacement_file)
{
		
}

NotSed::~NotSed()
{
	
}

void	NotSed::Replacer()
{
	std::ifstream in_file(input_file.c_str(), std::ios::in | std::ios::binary);
	if (!in_file)
	{
		std::cout << "Error trying to create the input file stream" << std::endl;
		return ;
	}
	std::string file_str;
	file_str.assign(std::istreambuf_iterator<char>(in_file), std::istreambuf_iterator<char>());
	in_file.close();	
	size_t	pos = 0;
	while ((pos = file_str.find(search_str, pos)) != std::string::npos)
	{
		file_str.erase(pos, search_str.length());
		file_str.insert(pos, replace_str);
		pos += replace_str.length();
	}
	std::string output_file = input_file + ".replaced";
	std::ofstream out(output_file.c_str(), std::ios::binary | std::ios::trunc);
	if (!out)
	{
		std::cout << "Error creating the output file" << std::endl;
		return ;
	}
	out << file_str;
	out.close();
}