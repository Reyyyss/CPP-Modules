#include "Span.hpp"

Span::Span(unsigned int n) {
	std::cout << "Default Constructor" << std::endl;
	N_ints = n;
}

Span::Span(const Span& other) {
	this->N_ints = other.N_ints;
	this->_container = other._container;
	std::cout << "Copy Constructor" << std::endl;
}

Span Span::operator=(const Span& other) {
	this->N_ints = other.N_ints;
	this->_container = other._container;
	std::cout << "Copy Assignment operator" << std::endl; 
	return *this;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int number) {
	if (_container.size() + 1 > N_ints)
		throw Span::MaxNumbersStored();
	_container.push_back(number);
	std::cout << "Your number was correctly added to your container" << std::endl;
}

int Span::LongestSpan() {
	if (N_ints <= 1)
		throw NotEnoughNumbersStored();
	std::sort(_container.begin(), _container.end());
	return (_container.end()[-1] - *_container.begin()); 
}

int Span::ShortestSpan() {
	if (N_ints <= 1)
		throw NotEnoughNumbersStored();
	std::sort(_container.begin(), _container.end());
	return (_container.begin()[+1] - *_container.begin()); 
}

void Span::print_numbers() {
	std::vector<int>::iterator i;
	for (i = this->_container.begin(); i != this->_container.end(); ++i) {
		std::cout << *i << std::endl;
	}
}

const char* Span::MaxNumbersStored::what() const throw() {
	return "Reason: You've exceeded the max numbers that can be stored\n";
}

const char* Span::NotEnoughNumbersStored::what() const throw() {
	return "You cannot do this operation \n\n\n Reason: You don't have enough numbers on your container\n";
}