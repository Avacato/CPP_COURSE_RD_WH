#include <iostream>


const float PI = 3.1415f;

float getNum() {
	float a;
	std::cin >> a;
	return a;
}


int main() {
	std::cout << "Enter the radius of the circle: ";
	float radius{ getNum() };
	std::cout << "The area of the circle is: " << PI * radius * radius << std::endl;
	std::cout << "The length of the circle is: " << PI * radius * 2 << std::endl;

	return 0;
}