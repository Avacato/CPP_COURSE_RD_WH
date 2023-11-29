//#include <iostream>

int factorialRecursion(int a) {
	if (a <= 1) {
		return 1;
	}
	else {
		return (a * factorialRecursion(a - 1));
	}
}

void printNaturalNumbersC(int a) {
	if (a == 0) {
		return;
	}
	std::cout << a << " ";
	printNaturalNumbersC(a - 1);
}

void printNaturalNumbersD(int a) {
	if (a == 0) {
		return;
	}
	printNaturalNumbersD(a - 1);
	std::cout << a << " ";
}