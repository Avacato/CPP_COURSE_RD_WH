#include <iostream>
#include "2_RegHeader.h"

int main() {
    char usrStr[255];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, 255);

    toUppercase(usrStr);

    std::cout << "String in upper case: " << usrStr << std::endl;

    return 0;
}
