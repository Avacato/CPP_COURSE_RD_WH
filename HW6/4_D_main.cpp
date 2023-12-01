#include <iostream>


int main() {
	int height, width;

	std::cout << "Enter the height: ";
	std::cin >> height;

	std::cout << "Enter the width: ";
	std::cin >> width;

	for (int i = 0; i < height; i++) {

		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		}

		for (int k = 1; k <= width; k++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
