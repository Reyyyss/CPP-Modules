

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int N = 4;
    AAnimal *arr[N];

    std::cout << "-- Creating animals (AAnimal pointers) --" << std::endl;
    for (int i = 0; i < N; ++i) {
        if (i < N/2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    std::cout << "------------------------" << std::endl;
    std::cout << "\n-- Deleting animals --" << std::endl;
    for (int i = 0; i < N; ++i)
        delete arr[i];
    std::cout << "------------------------" << std::endl;
    std::cout << "\n-- Deep copy test --" << std::endl;
    Dog *d1 = new Dog();
    d1->getBrain()->ideas[0] = "Chase the ball";
    Dog d2 = *d1;
    std::cout << "d1 idea[0]: " << d1->getBrain()->ideas[0] << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->ideas[0] << std::endl;
    d1->getBrain()->ideas[0] = "Eat";
    std::cout << "After change:" << std::endl;
    std::cout << "d1 idea[0]: " << d1->getBrain()->ideas[0] << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->ideas[0] << std::endl;
    delete d1;

    return 0;
}
