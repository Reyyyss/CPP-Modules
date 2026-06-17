#include "easyfind.hpp"


template <typename Container>
typename Container::iterator easyfind(Container &container, int n_to_find){
	typename Container::iterator it = container.begin();
    typename Container::iterator end = container.end();

    while (it != end)
    {
        if (*it == n_to_find)
            return it;
        ++it;
    }

    std::cout << "No occurrence of the number was found in the container" << std::endl;
    return end;
}