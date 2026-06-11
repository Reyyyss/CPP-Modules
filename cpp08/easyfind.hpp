#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <cstddef>
#include <cstdlib>

template <typename Container>
typename Container::iterator easyfind(Container &container, int n_to_find);

#include "easyfind.tpp"
#include <bits/stdc++.h>

#endif