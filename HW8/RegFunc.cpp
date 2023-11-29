#include <iostream>

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int getPositiveNum() {
	int num;

	do {
		std::cin >> num;
		if (num <= 0) {
			std::cout << "Please enter a positive value: ";
		}
	} while (num <= 0);

	return num;
}

void printCount(int a) {
	int positive = 0;
	int negative = 0;
	int zeroes = 0;

	std::cout << "Enter a number: ";

	for (int i = 0; i < a; i++) {
		int num = getNum();

		if (num > 0) {
			positive++;
		}
		else if (num < 0) {
			negative++;
		}
		else {
			zeroes++;
		}
	}
	std::cout << "Positive: " << positive << ", " << "negative: " << negative << ", " << "zeroes: " << zeroes << "." << std::endl;
}

int factorialLoop(int a) {
	unsigned long long factorialL = 1;

	for (int i = 1; i <= a; i++) {
		factorialL *= i;
	}

	return factorialL;
}

void printNaturalNumbersA(int a) {
	for (int i = a, j = 1; i >= j; i--) {
		std::cout << i << " ";
	}
}

void printNaturalNumbersB(int a) {
	for (int i = 1; i <= a; i++) {
		std::cout << i << " ";
	}
}

