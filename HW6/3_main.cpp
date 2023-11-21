#include <iostream>

int main()
{
	std::cout << "Enter the number to calculate the factorial: ";
	int factNum;
	do {
		std::cin >> factNum;
		if (factNum <= 0) {
			std::cout << "Please enter a positive value: ";
		}
	} while (factNum <= 0);

	unsigned long long factorial = 1;

	for (int i = 1; i <= factNum; i++) {
		factorial = factorial * i;
	}

	std::cout << factorial << std::endl;

	return 0;
}
