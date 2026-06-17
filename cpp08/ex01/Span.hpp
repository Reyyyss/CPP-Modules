#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int N_ints;
	std::vector<int> _container;
public:
	Span(unsigned int n);
	Span(const Span& other);
	Span operator=(const Span& other);
	~Span();

	void addNumber(int number);
	int ShortestSpan();
	int LongestSpan();
	class MaxNumbersStored : public std::exception { 
		public :
			virtual const char* what() const throw();
	};
};


#endif