#include <iostream>

int getNum();

int main()
{
	std::cout << "Enter the first element of progression: ";
	int firstNum{ getNum() };

	std::cout << "Enter the step for the arithmetic progression: ";
	int arithmeticProg{ getNum() };

	std::cout << "Enter the last element of progression: ";
	int lastNum{ getNum() };
	int currentNumber = firstNum;

	if (firstNum > lastNum) {
		std::cout << "The first number of an arithmetic sequence cannot be less than the last." << std::endl;
		return 0;
	}
	else if (arithmeticProg > lastNum) {
		std::cout << "The step number of the arithmetic sequence cannot be less than the last one." << std::endl;
		return 0;
	}

	for (int i = 0; i <= lastNum - 1; i++) {
		std::cout << firstNum + i * arithmeticProg << " ";
	}

	return 0;
}

int getNum() {
	int a;
	std::cin >> a;
	return a;
}