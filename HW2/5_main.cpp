#include <iostream>

int getNum() {
    int a;
    std::cin >> a;
    return a;
}

int main()
{
    std::cout << "Please enter the integer number: ";
    bool bVar = static_cast<bool>(getNum());
    std::cout << std::boolalpha;
    std::cout << "Bool var text =\t" << bVar << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "Bool var =\t" << bVar << std::endl;
}