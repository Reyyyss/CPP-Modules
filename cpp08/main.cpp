#include "easyfind.hpp"
#include <vector>
#include <cctype>


template <typename T>
static void int_founded(T* container, int number_to_find)
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


template <typename Container>
static void int_founded(Container &container, int number_to_find)
{
	typename Container::iterator found_number = easyfind(container, number_to_find);
	if (found_number == container.end())
		return ;
	std::cout << (*found_number) << std::endl;
}

static bool def_is_alpha(char *str) {
	if (*str == '+' || *str == '-')
		++str;
	if (!*str)
		return false;
	while (*str) {
		if (!std::isdigit(*str++))
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
	std::vector<int> v(11, 22);
	int_founded(v, std::atoi(av[1]));
	return 0;
}