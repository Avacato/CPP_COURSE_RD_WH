#include <iostream>

//Я об’єднав перше та друге завдання в одне, та додав перевантажену функцію

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int funcMax(const int& a, const int& b) {
	return (a > b ? a : b);
}

int funcMax(const int& a, const int& b, const int& c) {
	int temp = a > b ? a : b;
	return (temp > c ? temp : c);
}

int main() {
	int numOne, numTwo, numThree;
	std::cout << "Enter firs num: ";
	numOne = getNum();
	std::cout << "Enter second num: ";
	numTwo = getNum();
	std::cout << "Enter third num: ";
	numThree = getNum();
	std::cout << "The maximum of the first two numbers is: " << funcMax(numOne, numTwo) << std::endl;
	std::cout << "The maximum of three numbers is: " << funcMax(numOne, numTwo, numThree) << std::endl;

	return 0;
}
