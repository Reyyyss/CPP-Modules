#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "AAnimal constructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << "AAnimal copy constructed" << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    if (this != &other)
        type = other.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const { return type; }
