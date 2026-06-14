#include <iostream>
#include "Serializer.hpp"

int main() {
    Data d;
    d.value = 42;

    std::cout << "original ptr: " << &d << '\n';
    uintptr_t raw = Serializer::serialize(&d);
    std::cout << "serialized (uintptr_t): " << raw << '\n';

    Data* d2 = Serializer::deserialize(raw);
    std::cout << "deserialized ptr: " << d2 << '\n';
    std::cout << "deserialized value: " << d2->value << '\n';

    return 0;
}