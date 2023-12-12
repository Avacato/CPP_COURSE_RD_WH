#include <iostream>

void translateArray(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		numbers[i] = (numbers[i] > 0) ? numbers[i] * 2 : 0;
		std::cout << "Element " << i + 1 << ": " << numbers[i] << " " << std::endl;
	}
	std::cout << std::endl;
}