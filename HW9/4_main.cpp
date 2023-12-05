#include <iostream>
#include "4_RegHeader.h"

int main() {
    char usrStr[255];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, 255);

    int vowels = 0, consonants = 0;

    parseStringLetters(usrStr, vowels, consonants);

    std::cout << std::endl;
    std::cout << "Vowels Count: " << vowels << std::endl;
    std::cout << "Consonants Count: " << consonants << std::endl;

    return 0;
}
