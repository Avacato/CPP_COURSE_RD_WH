#include <iostream>
#include "1_RegHeader.h"

int main() {
    int numOne, numTwo;
    std::cout << "Enter the first number: ";
    std::cin >> numOne;

    std::cout << "Enter the second number: ";
    std::cin >> numTwo;

    std::cout << std::endl << "Program used reference swap" << std::endl << std::endl;
    swap(numOne, numTwo);

    std::cout << "First num after swap: " << numOne << std::endl;
    std::cout << "Second num after swap: " << numTwo << std::endl;

    std::cout << std::endl << "Program used ptr swap" << std::endl << std::endl;
    swap(&numOne, &numTwo);

    std::cout << "First num after swap: " << numOne << std::endl;
    std::cout << "Second num after swap: " << numTwo << std::endl;

    return 0;
}
