#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructed" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const { 
    return type; 
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}