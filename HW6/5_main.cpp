#include <iostream>


int main() {
	int sum = 0;
	bool firstLoop = true;
	char userChar = '.';

	bool numRequirement = false;
	bool lowCharRequirement = false;

	std::cout << "Hi! And wellcome to my program.\nThe program understands input from 0 to 9 and characters from a to z in lower case. To exit type '.'" << std::endl;
	while (firstLoop)
	{
		std::cout << "Enter the Char: ";

		//Get char, check the input and stop the program.
		do {
			std::cin >> userChar;

			numRequirement = isdigit(userChar);
			lowCharRequirement = islower(userChar);

			if (userChar == '.') {
				std::cout << "Goodbye!" << std::endl;
				firstLoop = false;
				break;
			}

			if (!(numRequirement || lowCharRequirement)) {
				std::cout << "Invalid character entered. Please try another one: ";
			}
		} while (!(numRequirement || lowCharRequirement));

		if (numRequirement) {
			sum += userChar - '0';
			std::cout << "The current amount is: " << sum << std::endl;
		}

		if (lowCharRequirement) {
			std::cout << "Uppercase characters: " << static_cast<char>(userChar - 32) << std::endl;
		}
	}

	return 0;
}