//Пофіксив min та max, перевантажена функція тут була зайва, додав прототипи. 

#include <iostream>

int funcMin(int& a, int& b);
int funcMax(int& a, int& b, int& c);

int getNum() {
	int a;
	std::cin >> a;
	return a;
}

int funcMin(int& a, int& b) {
	return (a < b ? a : b);
}

int funcMax(int& a, int& b, int& c) {
	int temp = a > b ? a : b;
	return (temp > c ? temp : c);
}

int main() {
	int numOne, numTwo, numThree;
	std::cout << "Enter firs num: ";
	numOne = getNum();
	std::cout << "Enter second num: ";
	numTwo = getNum();
	std::cout << "Enter third num: ";
	numThree = getNum();
	std::cout << "The minimum of the first two numbers is: " << funcMin(numOne, numTwo) << std::endl;
	std::cout << "The maximum of three numbers is: " << funcMax(numOne, numTwo, numThree) << std::endl;

	return 0;
}
