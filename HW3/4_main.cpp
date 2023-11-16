#include <iostream>

float getNum() {
	float a;
	std::cin >> a;
	return a;
}

int main() {
	std::cout << "Please enter the width: ";
	float width{ getNum() };
	std::cout << "Enter height: ";
	float height{ getNum() };
	std::cout << "The area of the rectangle is: " << width * height << std::endl;
	std::cout << "The perimeter of the rectangle is: " << width * height * 4.0 << std::endl;

	return 0;
}