/*
Viet chuong trinh yeu cau nhap ten, so ngay lam viec va tien cong 1 ngay, sau do in
ra ten va tien luong nhan duoc (tien luong = so ngay lam viec × tien cong 1 ngay).
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Input
	string ten;
	int soNgay;
	double luong1Ngay;

	cout << "Nhap Ho va Ten: ";
	getline(cin, ten, '\n');
	cout << "Nhap so ngay lam viec: ";
	cin >> soNgay;
	cout << "Nhap tien luong 1 ngay: ";
	cin >> luong1Ngay;

	// Processing
	double tienLuong = soNgay * luong1Ngay;

	// Output
	cout << "Tien luong thuc nhan: " << tienLuong << endl;
	
	system("pause");
	return 0;
}