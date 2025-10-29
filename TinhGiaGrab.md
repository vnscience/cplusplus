```cpp
#include <iostream>
using namespace std;

const double GIA_GRABBIKE_2KM = 12000;
const double GIA_GRABBIKE_SAU = 9000;

const double GIA_GRABCAR4_2KM = 15000;
const double GIA_GRABCAR4_SAU = 11000;

const double GIA_GRABCAR7_2KM = 17000;
const double GIA_GRABCAR7_SAU = 13000;

const double PHI_TANG_CAO_DIEM = 0.1;

double tinhCuocCoBan(int loai, double soKm);
bool laGioCaoDiem(int gio);
void inHoaDon(string loaiXe, double soKm, int gioKhoiHanh, double cuocCoBan, bool caoDiem);

int main()
{
    int chon;
    double soKm;
    int gioKhoiHanh;
    
    do {
        cout << "\n-- CHON LOAI PHUONG TIEN --\n"
             << "1. GrabBike\n"
             << "2. GrabCar (4 cho)\n"
             << "3. GrabCar (7 cho)\n"
             << "0. Thoat\n"
             << "Chon: ";
        cin >> chon;
        
        if (chon == 0)
        {
            cout << "Tam biet!\n";
            break;
        }
        
        if (chon < 1 || chon > 3)
        {
            cout << "Lua chon khong hop le!\n";
            continue;
        }
        
        cout << "Nhap so km di chuyen: ";
        cin >> soKm;
        cout << "Nhap gio khoi hanh (0-23): ";
        cin >> gioKhoiHanh;
        
        double cuocCoBan = tinhCuocCoBan(chon, soKm);
        
        if (cuocCoBan < 0)
        {
            cout << "Du lieu khong hop le!\n";
            continue;
        }
        
        bool caoDiem = laGioCaoDiem(gioKhoiHanh);
        double tongTien = cuocCoBan;
        
        if (caoDiem)
            tongTien += cuocCoBan * PHI_TANG_CAO_DIEM;
        
        string loaiXe = (chon == 1) ? "GrabBike" : (chon == 2 ? "GrabCar (4 cho)" : "GrabCar (7 cho)");
        inHoaDon(loaiXe, soKm, gioKhoiHanh, cuocCoBan, caoDiem);
        cout << "- Tong cong: " << tongTien << " VND\n";
        
    } while (chon != 0);
    
    return 0;
}

double tinhCuocCoBan(int loai, double soKm)
{
    if (soKm <= 0)
        return -1;
        
    double gia2km, giaSau;
    
    switch (loai)
    {
        case 1:
            gia2km = GIA_GRABBIKE_2KM;
            giaSau = GIA_GRABBIKE_SAU;
            break;
        case 2:
            gia2km = GIA_GRABCAR4_2KM;
            giaSau = GIA_GRABCAR4_SAU;
            break;
        case 3:
            gia2km = GIA_GRABCAR7_2KM;
            giaSau = GIA_GRABCAR7_SAU;
            break;
        default:
            return -1;
    }
    
    if (soKm <= 2)
        return soKm * gia2km;
    else
        return 2 * gia2km + (soKm - 2) * giaSau;
}

bool laGioCaoDiem(int gio)
{
    return ( (gio >= 7 && gio <= 9) || (gio >= 17 && gio <= 19) );
}

void inHoaDon(string loaiXe, double soKm, int gioKhoiHanh, double cuocCoBan, bool caoDiem)
{
    cout << "\n--- HOA DON ---\n";
    cout << "- Loai xe: " << loaiXe << "\n";
    cout << "- So km di chuyen: " << soKm << " km\n";
    cout << "- Gio khoi hanh: " << gioKhoiHanh << "h\n";
    cout << "- Cuoc co ban: " << cuocCoBan << " VND\n";
    
    if (caoDiem)
        cout << "- Phu phi gio cao diem (+10%): " << cuocCoBan * PHI_TANG_CAO_DIEM << "\n";
}


```
