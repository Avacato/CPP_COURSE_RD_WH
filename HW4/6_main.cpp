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

	case static_cast<int>(Mounth::February):
		std::cout << "Winter" << std::endl;
		break;
	case static_cast<int>(Mounth::March):

	case static_cast<int>(Mounth::April):

	case static_cast<int>(Mounth::May):
		std::cout << "Spring" << std::endl;
		break;
	case static_cast<int>(Mounth::June):

	case static_cast<int>(Mounth::July):

	case static_cast<int>(Mounth::August):
		std::cout << "Summer" << std::endl;
		break;
	case static_cast<int>(Mounth::September):

	case static_cast<int>(Mounth::October):

	case static_cast<int>(Mounth::November):
		std::cout << "Autumn" << std::endl;
		break;
	case static_cast<int>(Mounth::December):
		std::cout << "Winter" << std::endl;
		break;
	default:
		std::cout << "WRONG entered!" << std::endl;
		break;
	}
}

int main()
{
	int mounthNum;
	std::cout << "Please enter the month number: ";
	std::cin >> mounthNum;
	printMounth(mounthNum);

	return 0;
}