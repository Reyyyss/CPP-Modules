#ifndef NOTSED_HPP
#define NOTSED_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <iostream>
#include <fstream>

class NotSed
{
	private:
		const std::string search_str;
		const std::string replace_str;
		const std::string input_file;
	public:
		NotSed(const std::string &replacement_file, const std::string &replaced, const std::string &replacement);
		~NotSed();

		void	Replacer();
};

#endif
