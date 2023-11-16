#include <iostream>

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int main() {
	std::cout << "Enter the num: ";
	int num{ getNum() };
	if ((num % 5 == 0) && (num % 11 == 0)) {
		std::cout << "Number is divisible by 5 and 11" << std::endl;
	}
	else
	{
		std::cout << "Number is'n divisible by 5 and 11" << std::endl;
	}

	return 0;
}