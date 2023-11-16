#include <iostream>

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int main() {

	std::cout << "Please enter the firs integer: ";
	int iOne{ getNum() };
	std::cout << "Enter second integer: ";
	int iTwo{ getNum() };
	std::cout << "Enter third integer: ";
	int iThree{ getNum() };

	std::cout << "The sum is: " << iOne + iTwo + iThree << std::endl;
	std::cout << "The multiplication is: " << iOne * iTwo * iThree << std::endl;
	std::cout << "The arithmetic mean is: " << (iOne + iTwo + iThree) / 3 << std::endl;
	std::cout << "First == Second: " << std::boolalpha << (iOne == iTwo) << std::endl;
	std::cout << "Second == Third: " << (iTwo == iThree) << std::endl;

	return 0;
}