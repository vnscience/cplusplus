// Viet chuong trinh yeu cau nhap vao hai canh hinh chu nhat, sau do tinh va in ra dien tich hinh chu nhat.
#include <iostream>
using namespace std;

int main()
{
	// Input
	int a, b; // canh hinh chu nhat
	cout << "Nhap canh hinh chu nhat: ";
	cin >> a >> b;

	// Processing
	// Tinh dien tich
	int dt = a * b;

	// Output
	// In ra dien tich hinh CN
	cout << "Dien tich hinh CN: " << dt << endl;
	system("pause");
	return 0;
}