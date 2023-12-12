#include <iostream>
#include "5_RegHeader.h"


int main() {
    const int STR_SIZE = 255;

    char usrStr1[STR_SIZE];
    char usrStr2[STR_SIZE];

    std::cout << "Enter the first string: ";
    std::cin.getline(usrStr1, STR_SIZE);

    std::cout << "Enter the second string: ";
    std::cin.getline(usrStr2, STR_SIZE);

    std::cout << std::endl;
    std::string equalStr = (isEqual(usrStr1, usrStr2)) ? " " : " not ";
    std::cout << "The strings are" << equalStr << "equal!" << std::endl;

    return 0;
}
