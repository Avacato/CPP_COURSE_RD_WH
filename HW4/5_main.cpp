#include <iostream>

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

void printMounth(int mNum) {
	switch (mNum)
	{
	case static_cast<int>(Mounth::January):
		std::cout << "January" << std::endl;
		break;
	case static_cast<int>(Mounth::February):
		std::cout << "February" << std::endl;
		break;
	case static_cast<int>(Mounth::March):
		std::cout << "March" << std::endl;
		break;
	case static_cast<int>(Mounth::April):
		std::cout << "April" << std::endl;
		break;
	case static_cast<int>(Mounth::May):
		std::cout << "May" << std::endl;
		break;
	case static_cast<int>(Mounth::June):
		std::cout << "June" << std::endl;
		break;
	case static_cast<int>(Mounth::July):
		std::cout << "July" << std::endl;
		break;
	case static_cast<int>(Mounth::August):
		std::cout << "August" << std::endl;
		break;
	case static_cast<int>(Mounth::September):
		std::cout << "September" << std::endl;
		break;
	case static_cast<int>(Mounth::October):
		std::cout << "October" << std::endl;
		break;
	case static_cast<int>(Mounth::November):
		std::cout << "November" << std::endl;
		break;
	case static_cast<int>(Mounth::December):
		std::cout << "December" << std::endl;
		break;
	default:
		std::cout << "WRONG entered!" << std::endl;
		break;
	}
}

int main()
{
	std::cout << "Please enter the month number: ";
	int mounthNum;
	std::cin >> mounthNum;
	printMounth(mounthNum);

	return 0;
}