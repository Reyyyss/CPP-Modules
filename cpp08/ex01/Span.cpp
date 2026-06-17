#include "Span.hpp"

Span::Span(unsigned int n) {
	std::cout << "Default Constructor" << std::endl;
	N_ints = n;
}

Span::Span(const Span& other) {
	std::cout << "Copy Constructor" << std::endl
}

Span Span::operator=(const Span& other) {
	std::cout << "Copy Assignment operator" << std::endl; 
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int number) {
	if (_container.size() + 1 > N_ints)
		throw MaxNumbersStored();
	_container.push_back(number);
	std::cout << "Your number was correctly added to your container" << std::endl;
}

int Span::LongestSpan() {
	if (N_ints <= 1)
		
	std::sort(_container.begin(), _container.end());
	return (_container.end() - _container.begin()); 
}

int Span::ShortestSpan() {
	std::sort(_container.begin(), _container.end());
	return (_container.begin()++ - _container.begin()); 
}

const char* Span::MaxNumbersStored::what() const throw() {
	return "You cannot do this operation \n\n\n\n Reason: You've exceeded the max numbers that can be stored\n";
}