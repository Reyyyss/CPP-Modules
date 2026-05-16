#ifndef FIXED_HPP
#define FIXED_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <iostream>
#include <fstream>

class Fixed{

	private:
		int _fixed_point;
		static const int _fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
