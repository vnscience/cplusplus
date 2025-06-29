#include <iostream>
using namespace std;

int main()
{
	// Input: so nguyen n co ba chu so [100, 999]
	int n;
	cout << "Nhap 1 so co 3 chu so: ";
	cin >> n;

	// Processing:
	// Tach tung chu so
	int t = n; // 123 c b a
	int a, b, c;

	a = t % 10; // 123 % 10 = 3
	t = t / 10; // 12

	b = t % 10; // 2
	t /= 10; // 1

	c = t % 10; // 1
	t /= 10; // 0

	 // Tinh tong chu so
	int tongCS = a + b + c;
	 // Tinh so dao nguoc
	int sdn = (a * 10 + b) * 10 + c;
	
	// 123 = 10*(1*10 + 2) + 3
	// a = 3
	// b = 2
	// c = 1

	// (3 * 10 + 2) * 10 + 1

	// Output: sdn va tongchuso
	cout << "Tong 3 chu so cua " << n << " la: " << tongCS
		<< "\nSo dao nguoc cua " << n << " la: " << sdn << endl;
	system("pause");
	return 0;
}