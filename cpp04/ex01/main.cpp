#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 4;
    Animal *arr[size];

    std::cout << "-- Creating animals array --" << std::endl;
    for (int i = 0; i < size; ++i) {
        if (i < size/2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    std::cout << "------------------------" << std::endl;
    std::cout << "\n-- Deleting animals array --" << std::endl;
    for (int i = 0; i < size; ++i)
        delete arr[i];
    std::cout << "------------------------" << std::endl;
    std::cout << "\n-- Testing deep copy --" << std::endl;
    Dog *d1 = new Dog();
    d1->getBrain()->ideas[0] = "I want a bone";
    Dog d2 = *d1;
    std::cout << "d1 idea[0]: " << d1->getBrain()->ideas[0] << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->ideas[0] << std::endl;
    d1->getBrain()->ideas[0] = "I want to play";
    std::cout << "After change:" << std::endl;
    std::cout << "d1 idea[0]: " << d1->getBrain()->ideas[0] << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->ideas[0] << std::endl;
    delete d1;

    return 0;
}
