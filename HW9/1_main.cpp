#include <iostream>
#include "1_RegHeader.h"

int main()
{
	std::cout << "Hi, please enter 10 integer elements." << std::endl;
	const int arrSize = 10;
	int num[arrSize]{ 0 };

	for (int i = 0; i < arrSize; i++) {
		std::cout << "Enter a element number " << i + 1 << ": ";
		std::cin >> num[i];
	}

	translateArray(num, arrSize);

	return 0;
}
