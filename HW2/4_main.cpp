#include <iostream>

enum class WeekDays
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};

int main()
{
	WeekDays day1 = WeekDays::Monday;
	WeekDays day2 = WeekDays::Tuesday;
	WeekDays day3 = WeekDays::Wednesday;
	WeekDays day4 = WeekDays::Thursday;
	WeekDays day5 = WeekDays::Friday;
	WeekDays day6 = WeekDays::Saturday;
	WeekDays day7 = WeekDays::Sunday;
	

	std::cout << static_cast<int>(day1) << std::endl
			  << static_cast<int>(day2) << std::endl
			  << static_cast<int>(day3) << std::endl
	          << static_cast<int>(day4) << std::endl
			  << static_cast<int>(day5) << std::endl
			  << static_cast<int>(day6) << std::endl
			  << static_cast<int>(day7) << std::endl;
}