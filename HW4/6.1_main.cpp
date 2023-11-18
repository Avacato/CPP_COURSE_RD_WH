#include <iostream>

void printMounth(int mNum);

enum class Mounth
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};


int main()
{
	std::cout << "Please enter the month number: ";
	int mounthNum;
	std::cin >> mounthNum;

	if (mounthNum >= static_cast<int>(Mounth::January) && mounthNum <= static_cast<int>(Mounth::December)) {
		printMounth(mounthNum);
	}
	else
	{
		std::cout << "Check the entered information and try again." << std::endl;
	}

	return 0;
}

void printMounth(int mNum) {

	Mounth checkMounth = static_cast<Mounth>(mNum);

	switch (checkMounth)
	{
	case Mounth::January:
	case Mounth::February:
		std::cout << "Winter" << std::endl;
		break;
	case Mounth::March:
	case Mounth::April:
	case Mounth::May:
		std::cout << "Spring" << std::endl;
		break;
	case Mounth::June:
	case Mounth::July:
	case Mounth::August:
		std::cout << "Summer" << std::endl;
		break;
	case Mounth::September:
	case Mounth::October:
	case Mounth::November:
		std::cout << "Autumn" << std::endl;
		break;
	case Mounth::December:
		std::cout << "Winter" << std::endl;
		break;
	default:
		std::cout << "WRONG entered!" << std::endl;
		break;
	}
}