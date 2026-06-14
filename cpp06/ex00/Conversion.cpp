#include "Conversion.hpp"
#include <cctype>
#include <cstdlib>
#include <iomanip>

static bool is_char(std::string input) {
	return (input.length() == 1 && (std::isprint(static_cast<unsigned char>(input[0]))) && !(std::isdigit(static_cast<unsigned char>(input[0]))));
}

static bool is_int(std::string input) {
	char *end_pt;
	long int int_input = std::strtol(input.c_str(), &end_pt, 10);
	if (end_pt == input.c_str() || *end_pt != '\0')
		return false;
	return ((int_input <= 2147483647) && (int_input > -2147483648));
}

static bool is_double(std::string input) {
    char *end = NULL;
    std::strtod(input.c_str(), &end);
    return (*end == '\0' && end != input.c_str()); 
	
}

static bool is_float(std::string input) {
	char *end_pt = NULL;
	if (input == "nanf" || input == "-inff" || input == "+inff")
		return true;
	else
		static_cast<float>(std::strtod(input.c_str(), &end_pt));
	return (end_pt != input.c_str() && (*end_pt == 'f' && *(end_pt+1) == '\0'));
}

static int check_input(std::string input) {
	if (input.empty())
		return (EMPTY);
	else if (is_char(input))
		return (CHAR);
	else if (is_int(input))
		return (INT);
	else if (is_double(input))
		return (DOUBLE);
	else if (is_float(input))
		return (FLOAT);
	else
		return (INV);
}

static void	print_char(std::string input) {
	char c = static_cast<char>(input[0]);
	int i = static_cast<int>(c);
	double d = static_cast<double>(c);
	float f = static_cast<float>(c);

	std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout << std::setprecision(6);
}

static void	print_int(std::string input) {
	int i = std::strtol(input.c_str(), NULL, 10);
	char c = static_cast<char>(i);
	double d = static_cast<double>(i);
	float f = static_cast<float>(i);
	if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout << std::setprecision(6);
}

static void	print_double(std::string input) {
	double d = std::strtod(input.c_str(), NULL);
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);

	if (input == "nan" || input == "-inf" || input == "+inf")
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << c << "'" << std::endl;
	if (input == "nan" || input == "-inf" || input == "+inf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout << std::setprecision(6);
}

static void	print_float(std::string input) {
	float f = static_cast<float>(std::strtod(input.c_str(), NULL));
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);

	if (input == "nanf" || input == "-inff" || input == "+inff")
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << c << "'" << std::endl;
	if (input == "nanf" || input == "-inff" || input == "+inff")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout << std::setprecision(6);
}

static void print_convertions(std::string input, int level) {
	if (level == CHAR)
		print_char(input);
	else if (level == INT)
		print_int(input);
	else if (level == DOUBLE)
		print_double(input);
	else
		print_float(input);
}

void ScalarConverter::convert(const std::string &literal) {
	if (check_input(literal) == EMPTY) {
		std::cerr << "The input shouldn't be empty so the conversion is impossible" << std::endl;
		return ;
	}
	else if (check_input(literal) == INV) {
		std::cerr << "The input that the user sent is invalid so the conversion is impossible" << std::endl;
		return ;
	}
	else
		print_convertions(literal, check_input(literal));
	return ;
}