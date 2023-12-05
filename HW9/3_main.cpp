#include <iostream>
#include "3_RegHeader.h"

int main() {
    char usrStr[255];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, 255);

    bool usrPalindrom = isPalindrom(usrStr);

    std::cout << usrStr << " is " << std::boolalpha << usrPalindrom << std::endl;

    return 0;
}
