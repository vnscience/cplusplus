#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// input
	const double PI = 3.141593;
	double r, dt, cv;

	cout << "Nhap ban kinh: ";
	cin >> r;

	// processing
	dt = PI * r * r;
	cv = 2 * PI * r;

	// output
	cout << fixed << setprecision(2)
		<< "Dien tich hinh tron, ban kinh " << r << " la: " << dt
		<< "\nChu vi hinh tron: " << cv << "\n";
	system("pause");
	return 0;
}