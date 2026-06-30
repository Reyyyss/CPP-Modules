#include "btc.hpp"

btc* prog_data() {
	static btc prog_data;
	return (&prog_data);
}

int main(int ac, char **av) {
	if (ac != 2)
		return (std::cerr << "Program usage: <./a.out> <File>" << std::endl, 1);
	std::string file_name = av[1] + strlen(av[1]) - 4;
	if (file_name != ".csv")
		return (std::cerr << "File should be a .csv File, Your's is a: " << file_name << std::endl, 1);
	if (!parser(av[1])) {
		std::cout << "aaa" << std::endl;
		return 1;
	}
	std:: cout << "Reading from file -> " << av[1] << "\nCorrect usage of the program" << std::endl;
}