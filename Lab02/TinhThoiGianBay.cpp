#include <iostream>
using namespace std;

int main()
{
	// Input: gio bay, gio dap
	int h1, m1, h2, m2;

	int muiGioCatCanh, muiGioHaCanh;

	cout << "Nhap mui gio cat canh: ";
	cin >> muiGioCatCanh;
	cout << "Nhap gio va phut cat canh (h1 m1): "; // UTC + 7
	cin >> h1 >> m1; // 07 00

	cout << "Nhap mui gio ha canh: ";
	cin >> muiGioHaCanh;
	cout << "Nhap gio va phut ha canh (h2 m2): "; // UTC + 1
	cin >> h2 >> m2; // 07 00

	// Process: Tinh thoi gian bay
	// Quy doi gio bay sang UTC (phut)
	int phutCatCanh = (h1 - muiGioCatCanh) * 60 + m1; // 00g00p = 0
	int phutHaCanh = (h2 - muiGioHaCanh) * 60 + m2; // 06g00p = 360
	
	// tinh thoi gian bay, phong truong hop ha canh vao hom sau
	int tgBay = (phutHaCanh - phutCatCanh + 1440) % 1440; // don vi: phut 360
	
	// Output: Thoi gian bay thuc te
	cout << "Thoi gian bay: " << tgBay / 60 << " gio " << tgBay % 60 << " phut!\n";
	system("pause");
	return 0;
}