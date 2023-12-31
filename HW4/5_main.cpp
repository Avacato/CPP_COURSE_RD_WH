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
		std::cout << "January" << std::endl;
		break;
	case Mounth::February:
		std::cout << "February" << std::endl;
		break;
	case Mounth::March:
		std::cout << "March" << std::endl;
		break;
	case Mounth::April:
		std::cout << "April" << std::endl;
		break;
	case Mounth::May:
		std::cout << "May" << std::endl;
		break;
	case Mounth::June:
		std::cout << "June" << std::endl;
		break;
	case Mounth::July:
		std::cout << "July" << std::endl;
		break;
	case Mounth::August:
		std::cout << "August" << std::endl;
		break;
	case Mounth::September:
		std::cout << "September" << std::endl;
		break;
	case Mounth::October:
		std::cout << "October" << std::endl;
		break;
	case Mounth::November:
		std::cout << "November" << std::endl;
		break;
	case Mounth::December:
		std::cout << "December" << std::endl;
		break;
	default:
		std::cout << "WRONG entered!" << std::endl;
		break;
	}
}