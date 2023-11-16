#include <iostream>

int getNum() {
    int a;
    std::cin >> a;
    return a;
}

int main()
{
    std::cout << "Please enter the first integer number: ";
    int num1 { getNum() };
    std::cout << "Enter second integer: ";
    int num2 { getNum() };
    
    int* pBuffer = new int;
    *pBuffer = num1;
    num1 = num2;
    num2 = *pBuffer;
    delete pBuffer;

    std::cout << "First number:\t" << num1 << std::endl
			  << "Second number:\t" << num2 << std::endl;
}