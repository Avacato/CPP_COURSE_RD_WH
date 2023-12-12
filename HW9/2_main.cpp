#include <iostream>
#include "2_RegHeader.h"

int main() {
    const int STR_SIZE = 255;
    char usrStr[STR_SIZE];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, STR_SIZE);

    toUppercase(usrStr);

    std::cout << "String in upper case: " << usrStr << std::endl;

    return 0;
}
