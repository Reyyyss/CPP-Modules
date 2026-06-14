#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T, typename F>
void iter(T* arr, const unsigned int len, F f) {
	for (unsigned int i = 0; i < len; ++i)
		f(arr[i]);
}

#endif