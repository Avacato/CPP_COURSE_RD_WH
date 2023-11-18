#include <iostream>

void yearTime(int a);

int main()
{
	std::cout << "Please enter the month number: ";
	int mounthNum;
	std::cin >> mounthNum;

	if (mounthNum >= 1 && mounthNum <= 12) {
		yearTime(mounthNum);
	}
	else
	{
		std::cout << "Check the entered information and try again." << std::endl;
	}

	return 0;
}

void yearTime(int a) {
	if (a >= 1 && a <= 2 || a == 12) {
		std::cout << "Winter" << std::endl;
	}
	else if (a >= 3 && a <= 5) {
		std::cout << "Spring" << std::endl;
	}
	else if (a >= 6 && a <= 8) {
		std::cout << "Summer" << std::endl;
	}
	else if (a >= 9 && a <= 11) {
		std::cout << "Autumn" << std::endl;
	}
}