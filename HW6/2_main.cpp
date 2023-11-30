#include <iostream>

int main()
{
	int usrNum;
	std::cout << "Enter the element number of the Fibonacci sequence: ";
	do {
		std::cin >> usrNum;
		if (usrNum <= 0) {
			std::cout << "Please enter a positive value: ";
		}
	} while (usrNum <= 0);

	int a = 0;
	int b = 1;
	int c;

	for (int i = 1; i <= usrNum; i++) {

		std::string ending = ", ";

		if (i == usrNum) {
			ending = ".";
		}
		else
		{
			ending = ", ";
		}

		std::cout << "F" << i << " = " << b << ending;

		c = a + b;
		a = b;
		b = c;
	}

	return 0;
}