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
#include <float.h>
#include <math.h>

class Fixed{

	private:
		int _fixed_point;
		static const int _fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int fixed_int);
		Fixed(const float fixed_float);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
