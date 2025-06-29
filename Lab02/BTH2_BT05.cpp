#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// input 3 canh tam giac (int) a + b > c || 
	int a, b, c;
	cout << "Nhap vao 3 canh cua tam giac: ";
	cin >> a >> b >> c;

	// process
	// Step 1: p = (a + b + c) / 2
	double p = (a + b + c) / 2;

	// Step 2: heron = sqrt(p*(p - a) * (p - b) * (p - c))
	double heron = sqrt(p * (p - a) * (p - b) * (p - c));

	// output in dien tich tam giac
	cout << "Dien tich tam giac: "
		<< setprecision(2) << fixed << heron << "\n";
	system("pause");
	return 0;
}