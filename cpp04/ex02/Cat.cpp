#include "Cat.hpp"

Cat::Cat() : AAnimal(), brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other) {
    std::cout << "Cat copy constructed" << std::endl;
    brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        AAnimal::operator=(other);
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat copy assignment called" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }

Brain *Cat::getBrain() const { return brain; }
