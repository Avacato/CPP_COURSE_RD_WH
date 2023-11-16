#include <iostream>

void getNum(int& a) {
	std::cin >> a;
}

void isTriangle(int a, int b, int c) {
	bool firstRequirement = (a + b + c == 180);
	bool secondRequirement = (a + b >= c && a + c >= b && b + c >= a);
	bool thirdRequirement = (a + b != 180 && a + c != 180 && c + b != 180);
	if (firstRequirement && secondRequirement && thirdRequirement) {
		std::cout << "This is triangle" << std::endl;
	}
	else
	{
		std::cout << "This is not triangle" << std::endl;
	}
}

int main()
{
	int sideA, sideB, sideC;
	std::cout << "Enter the lengths of the three sides of the triangle\n";
	std::cout << "Side A: ";
	getNum(sideA);
	std::cout << "Side B: ";
	getNum(sideB);
	std::cout << "Side C: ";
	getNum(sideC);

	isTriangle(sideA, sideB, sideC);

	return 0;
}