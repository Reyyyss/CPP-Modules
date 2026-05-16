#include "notsed.hpp"

int	main(int argc, char **argv)
{	
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
