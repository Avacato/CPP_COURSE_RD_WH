#include <iostream>

int main()
{
	int height, width;

	std::cout << "Enter the height: ";
	std::cin >> height;

	std::cout << "Enter the width: ";
	std::cin >> width;

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}
