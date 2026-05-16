#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructed" << std::endl;
    brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }

Brain *Dog::getBrain() const { return brain; }
