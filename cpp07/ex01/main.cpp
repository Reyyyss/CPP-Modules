#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void printConst(const T &x) {
    std::cout << x << std::endl;
}
template<typename T>
void multiplyByTwo(T &x) {
    x = x * 2;
}

void incInt(int &x) { ++x; }

int main() {
    int arr[] = {1, 2, 3, 4};
    const unsigned int len = 4;

    std::cout << "Original int array: " << std::endl;
    iter(arr, len, printConst<int>);

    std::cout << "Use instantiated function template multiplyByTwo<int>: " << std::endl;
    iter(arr, len, multiplyByTwo<int>);
    iter(arr, len, printConst<int>);

    const std::string sarr[] = {"hello", "world"};
    std::cout << "Const string array printed by const-ref function template:" << std::endl;
    iter(sarr, 2u, printConst<std::string>);

    std::cout << "Using non-template function incInt with pointer+len: " << std::endl;
    int b[] = {10, 20, 30};
    iter(b, 3u, incInt);
    iter(b, 3u, printConst<int>);

    return 0;
}
