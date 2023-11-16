#include <iostream>


void getNum(int* a) {
	std::cout << "Hi!\nPlease enter triangle size: ";
	std::cin >> *a;
	std::cout << std::endl;
}


void drawTriangle(int* a) {

	for (int i = 0; i < *a; i++) {
		for (int j = 0; j <= *a - i - 1; j++) {
			std::cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}


int main()
{
	std::cout << "I love C++!" << std::endl;
	int num;
	getNum(&num);
	drawTriangle(&num);
}