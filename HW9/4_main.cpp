#include <iostream>
#include "4_RegHeader.h"

int main() {
    const int STR_SIZE = 255;
    char usrStr[STR_SIZE];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, STR_SIZE);

    int vowels = 0, consonants = 0;

    parseStringLetters(usrStr, vowels, consonants);

    std::cout << std::endl;
    std::cout << "Vowels Count: " << vowels << std::endl;
    std::cout << "Consonants Count: " << consonants << std::endl;

    return 0;
}
