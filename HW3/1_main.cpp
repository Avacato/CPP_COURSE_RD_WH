#include <iostream>

class TConverter
{
public:
	TConverter(int tVar) {
		this->setData(tVar);
		this->showInfo();
	}

	void setData(int t) {
		tHours = t / 3600;
		tMinuts = (t / 60) % 60;
		tSeconds = t % 60;
	}

	void showInfo() {
		std::cout << tHours << " hours, " << tMinuts << " minutes " << "and " << tSeconds << " seconds." << std::endl;
	}

	~TConverter() {
	}

private:
	int tHours;
	int tMinuts;
	int tSeconds;
};

int getSeconds() {
	int a;
	std::cin >> a;
	return a;
}

int main() {

	std::cout << "Please enter time in seconds: ";
	int secTime{ getSeconds() };
	TConverter myTime(secTime);

	return 0;
}