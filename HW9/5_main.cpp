#include <iostream>
#include "5_RegHeader.h"


int main() {
    char usrStr1[255];
    char usrStr2[255];

    std::cout << "Enter the first string: ";
    std::cin.getline(usrStr1, 255);

    std::cout << "Enter the second string: ";
    std::cin.getline(usrStr2, 255);

    std::cout << std::endl;
    std::string equalStr = (isEqual(usrStr1, usrStr2)) ? " " : " not ";
    std::cout << "The strings are" << equalStr << "equal!" << std::endl;

    return 0;
}
