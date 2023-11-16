#include <iostream>

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int main() {
	std::cout << "Please enter the firs num: ";
	int numOne{ getNum() };
	std::cout << "Enter second num: ";
	int numTwo{ getNum() };
	bool lessThan = numOne < numTwo, equal = numOne == numTwo, moreThan = numOne > numTwo, lessOrEqual = numOne <= numTwo;
	std::cout << "Firs num lessThan second num: " << std::boolalpha << lessThan << std::endl;
	std::cout << "Firs num equal second num: " << equal << std::endl;
	std::cout << "Firs num moreThan second num: " << moreThan << std::endl;
	std::cout << "Firs num lessOrEqual second num: " << lessOrEqual << std::endl;

	return 0;
}