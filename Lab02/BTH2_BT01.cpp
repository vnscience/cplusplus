// Viet chuong trinh yeu cau nhap vao canh hinh vuong,
// sau do tinh va in ra dien tich hinh vuong.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Input
	int n; // canh hinh vuong
	cout << "Nhap canh hinh vuong: ";
	cin >> n;

	// Processing
	// Tinh dien tich
	double dt = pow(n*1.0, 2);
	// Output
	// In ra dien tich hinh vuong
	cout << "Dien tich hinh vuong: " << dt << endl;
	system("pause");
	return 0;
}