#include "easyfind.hpp"


template <typename T>
T *easyfind(T *container, int n_to_find) {
	while (*container++) {
		if (n_to_find == *container)
			return (container);
	}
	std::cout << "No occurrence of the number was found in the container" << std::endl;
	return NULL;
}