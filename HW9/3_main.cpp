#include <iostream>
#include "3_RegHeader.h"

int main() {
    const int STR_SIZE = 255;
    char usrStr[STR_SIZE];

    std::cout << "Enter the string: ";
    std::cin.getline(usrStr, STR_SIZE);

    bool usrPalindrom = isPalindrom(usrStr);

    std::cout << usrStr << " is " << std::boolalpha << usrPalindrom << std::endl;

    return 0;
}
