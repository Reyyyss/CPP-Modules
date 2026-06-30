#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>

struct btc {
	int years, months, days;
	float value;
};

btc* prog_data();
bool parser(std::string file);

#endif