#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <string>


enum input_type {
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	INV,
	EMPTY
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
	
	public:
		static void convert(const std::string& literal);
};

#endif