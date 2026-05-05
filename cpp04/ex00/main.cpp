#include "Animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int main() {
    std::cout << "---- Basic polymorphism test ----" << std::endl;
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << "---- Canonical form test ----" << std::endl;
    Dog basicDog;
    Dog copiedDog(basicDog);
    Dog assignedDog;
    assignedDog = copiedDog;

    Cat basicCat;
    Cat copiedCat(basicCat);
    Cat assignedCat;
    assignedCat = copiedCat;

    std::cout << std::endl;
    std::cout << "---- Base class sound test ----" << std::endl;
    Animal baseAnimal;
    std::cout << "base type: " << baseAnimal.getType() << std::endl;
    baseAnimal.makeSound();

    return 0;
}
