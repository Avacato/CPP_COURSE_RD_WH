#include <iostream>
#include <iomanip>

struct dConversion
{
public:
	void putInfo(double a) {
		dVar = a;
		iVar = static_cast<int>(dVar);
	}
	void showInfo() {
		std::cout << "Double var is:\t\t" << dVar << std::endl
			<< "Convert to int:\t\t" << iVar << std::endl
			<< "Out to the line:\t" << std::setfill('$') << std::setw(20) << iVar << std::endl;
	}
private:
	double dVar;
	int iVar;
};


int main()

{
	dConversion form;
	form.putInfo(27.3698);
	form.showInfo();
}