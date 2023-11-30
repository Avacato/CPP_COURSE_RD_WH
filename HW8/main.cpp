#include <iostream>
#include "RegHeader.h"
#include "RecursionHeader.h"


int main() {
	std::cout << "<___1___>" << std::endl;
	std::cout << "Enter the number of iterations: ";
	int userIter = getNum();
	printCount(userIter);
	std::cout << "<___1_END___>" << std::endl << std::endl << std::endl;

	std::cout << "<___2___>" << std::endl;
	std::cout << "Factorial calculation" << std::endl;
	std::cout << "Enter a number: ";
	int userNum = getPositiveNum();

	std::cout << "Loop factorial: " << factorialLoop(userNum) << std::endl;
	std::cout << "Recursion factorial: " << factorialRecursion(userNum) << std::endl;
	std::cout << "<___2_END___>" << std::endl << std::endl << std::endl;

	std::cout << "<___3___>" << std::endl;
	std::cout << "Natural numbers" << std::endl;
	std::cout << "Enter a number: ";

	userNum = getPositiveNum();

	std::cout << "Loop from largest to smallest: ";
	printNaturalNumbersA(userNum);
	std::cout << std::endl;

	std::cout << "Loop from smallest to largest: ";
	printNaturalNumbersB(userNum);
	std::cout << std::endl;

	std::cout << "Recursion from largest to smallest: ";
	printNaturalNumbersC(userNum);
	std::cout << std::endl;

	std::cout << "Recursion smallest to largest: ";
	printNaturalNumbersD(userNum);
	std::cout << std::endl;
	std::cout << "<___3_END___>" << std::endl << std::endl << std::endl;

	return 0;
}
