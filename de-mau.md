## **Đề thi mẫu – Bài giải C++**

### Tóm tắt

| Phần       | Nội dung chính                 | Kỹ thuật C++ sử dụng                           |
| ---------- | ------------------------------ | ---------------------------------------------- |
| **Câu 1**  | Tính tổng nghịch đảo giai thừa | Hàm `for`, hàm `tinhGiaiThua()`, kiểu `double` |
| **Câu 2a** | Tính tổng số chẵn trong mảng   | Duyệt mảng, kiểm tra chẵn (`% 2`)              |
| **Câu 2b** | Tìm số nguyên tố lớn nhất      | Hàm `laSoNguyenTo()`, biến cờ `bool`           |
| **Câu 2c** | Kiểm tra và sắp xếp tăng       | Hàm `mangTang()`, sắp xếp nổi bọt              |
| **Câu 2d** | Chèn phần tử x vào mảng tăng   | Dịch phần tử, chèn đúng vị trí                 |

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// ---------------------------
// Câu 1: Tính s = 1/0! + 1/1! + ... + 1/n!
// ---------------------------

// Hàm tính giai thừa
long long tinhGiaiThua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++)
        gt *= i;
    return gt;
}

void bai1() {
    int n;
    double s = 0;
    do {
        cout << "Nhap n (0 ≤ n ≤ 15): ";
        cin >> n;
    } while (n < 0 || n > 15);

    for (int i = 0; i <= n; i++)
        s += 1.0 / tinhGiaiThua(i);

    cout << "Gia tri cua s = " << s << endl;
}

// ---------------------------
// Câu 2: Mảng số nguyên
// ---------------------------

// Hàm nhập mảng
void nhapMang(int a[], int &n) {
    cout << "Nhap so phan tu n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// a) Tính tổng các số chẵn
int tongSoChan(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            tong += a[i];
    return tong;
}

// b) Kiểm tra số nguyên tố
bool laSoNguyenTo(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

// Tìm số nguyên tố lớn nhất trong mảng
int soNguyenToLonNhat(int a[], int n, bool &coNguyenTo) {
    int maxNT = -1;
    coNguyenTo = false;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            if (!coNguyenTo || a[i] > maxNT)
                maxNT = a[i];
            coNguyenTo = true;
        }
    }
    return maxNT;
}

// c) Kiểm tra mảng tăng
bool mangTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return false;
    return true;
}

// Hàm sắp xếp tăng dần (Bubble sort)
void sapXepTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

// d) Chèn phần tử x vào mảng tăng
void chenPhanTu(int a[], int &n, int x) {
    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
}

// In mảng
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// ---------------------------
// Hàm chính
// ---------------------------
int main() {
    cout << "===== BAI 1 =====" << endl;
    bai1();

    cout << "\n===== BAI 2 =====" << endl;
    int a[100], n;
    nhapMang(a, n);

    // a)
    cout << "Tong cac so chan trong mang: " << tongSoChan(a, n) << endl;

    // b)
    bool coNguyenTo;
    int maxNT = soNguyenToLonNhat(a, n, coNguyenTo);
    if (coNguyenTo)
        cout << "So nguyen to lon nhat trong mang: " << maxNT << endl;
    else
        cout << "Khong co so nguyen to trong mang -> Xuat dau *" << endl;

    // c)
    if (mangTang(a, n))
        cout << "Mang da tang dan." << endl;
    else {
        cout << "Mang chua tang dan -> Tien hanh sap xep tang." << endl;
        sapXepTang(a, n);
        cout << "Mang sau khi sap xep: ";
        xuatMang(a, n);
    }

    // d)
    int x;
    cout << "Nhap so nguyen x can chen: ";
    cin >> x;
    chenPhanTu(a, n, x);
    cout << "Mang sau khi chen: ";
    xuatMang(a, n);

    return 0;
}
```
