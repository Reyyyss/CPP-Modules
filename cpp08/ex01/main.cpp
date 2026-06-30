#include "Span.hpp"

int main() {
	Span container(4);
	Span container2(container);
	Span container3(0);

	try {
		container.addNumber(1);
		container.addNumber(5);
		container.addNumber(3);
		container.addNumber(6);
		container3 = container;
		container.print_numbers();
		std::cout << std::endl;
		std::cout << container.LongestSpan() << std::endl;
		std::cout << container.ShortestSpan	() << std::endl;
		std::cout << std::endl << "container3:" << std::endl;
		container3.print_numbers();
		std::cout << container3.LongestSpan() << std::endl;
		std::cout << container3.ShortestSpan	() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "You cannot do this operation \n\n\n\n" << e.what() << std::endl;
	}
}