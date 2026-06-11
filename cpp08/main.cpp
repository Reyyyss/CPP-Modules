#include "easyfind.hpp"


template <typename T>
static void int_founded(int *container, int number_to_find)
{
	T found_number = easyfind(container, number_to_find);
	if (!found_number)
		return ;
	std::cout << (*found_number) << std::endl;
}

static bool def_is_alpha(char *str) {
	while (*str) {
		if (std::isalpha(*str++))
			return false;
	}
	return true;
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: <./easyfind> <number that you want to find in container>" << std::endl;
		return 1;
	}
	if (!def_is_alpha(av[1])) {
		std::cout << "Only intengers are allowed" << std::endl;
		return 1;
	}
	int container[4] = {1, 6, 3, 4};
	int_founded<int *>(container, std::atoi(av[1]));
	return 0;
}