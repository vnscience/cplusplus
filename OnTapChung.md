# **Đề bài 1: Chương trình Quản lý Danh sách Sản phẩm**

Giả sử mỗi sản phẩm được biểu diễn bằng **tên** (string) và **giá** (số thực).
Hai thông tin này sẽ được lưu **song song** trong hai mảng 1 chiều:

* `string names[100];`
* `double prices[100];`

Biến `n` lưu số lượng sản phẩm hiện có.


## **Yêu cầu chương trình**

Xây dựng chương trình cho phép người dùng thao tác qua **menu** dạng:

```
===== MENU QUẢN LÝ SẢN PHẨM =====
1. Thêm sản phẩm
2. Xoá sản phẩm theo vị trí
3. Tìm sản phẩm theo tên
4. Hiển thị toàn bộ danh sách
5. Tìm sản phẩm có giá cao nhất và thấp nhất
6. Tính giá trung bình của các sản phẩm
7. Sắp xếp danh sách theo giá tăng dần
0. Thoát
Nhập lựa chọn: 
```

Chương trình lặp *mãi cho đến khi* chọn 0.


## **Yêu cầu về hàm**

Sinh viên *bắt buộc* tách chương trình thành các hàm sau:

### **1. Hàm thêm sản phẩm**

```cpp
void addProduct(string names[], double prices[], int &n);
```

### **2. Hàm xoá sản phẩm theo vị trí**

```cpp
void removeProduct(string names[], double prices[], int &n, int pos);
```

### **3. Hàm tìm kiếm sản phẩm theo tên (linear search)**

```cpp
int findProduct(string names[], int n, string key);
```

### **4. Hàm hiển thị danh sách**

```cpp
void printProducts(string names[], double prices[], int n);
```

### **5. Hàm tìm giá cao nhất / thấp nhất**

```cpp
double maxPrice(double prices[], int n);
double minPrice(double prices[], int n);
```

### **6. Hàm tính giá trung bình**

```cpp
double averagePrice(double prices[], int n);
```

### **7. Hàm sắp xếp theo giá tăng dần (selection sort hoặc bubble sort)**

```cpp
void sortByPrice(double prices[], string names[], int n);
```

> Gợi ý thuật toán theo *Introduction to Algorithms* (Cormen et al., 2009) cho selection sort.

----

# **ĐỀ BÀI 2: Chương trình Quản lý Quán NET**

Giả sử quán NET có **tối đa 100 máy**.
Mỗi máy được quản lý bằng **hai mảng song song**:

* `string computerName[100]` - tên máy (ví dụ: “PC01”, “VIP01”)
* `int status[100]` - trạng thái

  * 0 = đang trống
  * 1 = đang có khách
* `int timeUsed[100]` - số phút mà khách đã chơi
* Biến `n` lưu tổng số máy đang quản lý.

## **MENU CHƯƠNG TRÌNH**

Chương trình yêu cầu sinh viên xây dựng menu sau:

```
========= QUẢN LÝ QUÁN NET =========
1. Thêm máy mới
2. Cập nhật trạng thái máy (bật/tắt)
3. Ghi nhận phút chơi cho một máy
4. Hiển thị toàn bộ danh sách máy
5. Tìm máy theo tên
6. Thống kê số máy trống và máy đang sử dụng
7. Tìm máy có thời gian sử dụng nhiều nhất
8. Sắp xếp danh sách theo thời gian sử dụng tăng dần
0. Thoát chương trình
===================================
Nhập lựa chọn:
```

Chương trình chạy lặp “vô hạn”, chỉ thoát khi chọn 0.

## **YÊU CẦU HÀM (bắt buộc)**

### **1. Thêm máy mới**

```cpp
void addComputer(string name[], int status[], int timeUsed[], int &n);
```

* Khi thêm máy mới → `status = 0`, `timeUsed = 0`.


### **2. Cập nhật trạng thái: bật/tắt máy**

```cpp
void updateStatus(int status[], int n, int pos, int newStatus);
```


### **3. Ghi nhận phút chơi cho một máy**

```cpp
void addTime(int timeUsed[], int n, int pos, int minutes);
```


### **4. Hiển thị toàn bộ danh sách**

```cpp
void printAll(string names[], int status[], int timeUsed[], int n);
```

Thông tin hiển thị:

* Tên máy
* Trạng thái (Trống/Đang có khách)
* Tổng phút đã chơi


### **5. Tìm máy theo tên (linear search)**
```cpp
int findComputer(string names[], int n, string key);
```

* Trả về vị trí đầu tiên tìm được
* Trả về -1 nếu không có


### **6. Thống kê số máy trống và đang sử dụng**

```cpp
void statistics(int status[], int n, int &emptyCount, int &usedCount);
```


### **7. Tìm máy có thời gian sử dụng **nhiều nhất**

```cpp
int maxTimePosition(int timeUsed[], int n);
```

* Trả về vị trí máy có minutes lớn nhất


### **8. Sắp xếp theo thời gian sử dụng tăng dần**

Sắp xếp **đồng bộ 3 mảng**: tên – trạng thái – thời gian.

```cpp
void sortByTime(string names[], int status[], int timeUsed[], int n);
```

Gợi ý thuật toán: **Selection Sort** (Cormen et al., *Introduction to Algorithms*, 2009).


## **YÊU CẦU BỔ SUNG**

* Validation đầu vào: không cho nhập phút âm.
* Không cho bật máy đang bật hoặc tắt máy đang trống.
* Tự động in thông báo:

  * “Máy đã bật”
  * “Máy đã tắt”
  * “Tên máy không tồn tại”
 
---

# **ĐỀ BÀI 3: Chương trình Quản lý Bàn ăn trong Nhà hàng**

Nhà hàng có tối đa **100 bàn ăn**.
Mỗi bàn ăn được biểu diễn bằng **ba mảng song song**:

* `int tableNumber[100]` - số hiệu bàn
* `int status[100]` - trạng thái bàn

  * 0 = Trống
  * 1 = Đang có khách
* `double bill[100]` - tổng tiền hiện tại của bàn

Biến `n` lưu tổng số bàn mà nhà hàng đang quản lý.

---

## **MENU CHƯƠNG TRÌNH**

Sinh viên phải xây dựng chương trình với menu như sau:

```
============= QUẢN LÝ BÀN ĂN =============
1. Thêm bàn ăn mới
2. Gọi món cho bàn (cộng tiền vào hóa đơn)
3. Thanh toán và giải phóng bàn
4. Hiển thị danh sách tất cả các bàn
5. Tìm bàn theo số hiệu
6. Thống kê số bàn trống và bàn đang sử dụng
7. Tìm bàn có hóa đơn cao nhất
8. Sắp xếp danh sách theo hóa đơn tăng dần
0. Thoát chương trình
==========================================
Nhập lựa chọn:
```

## **YÊU CẦU VỀ HÀM (bắt buộc)**

### **1. Thêm bàn ăn**

```cpp
void addTable(int tableNumber[], int status[], double bill[], int &n);
```

Khi thêm bàn mới:

* `status = 0`
* `bill = 0`


### **2. Gọi món (cộng tiền vào hóa đơn bàn)**

```cpp
void addBill(double bill[], int status[], int n, int pos, double amount);
```

* Nếu bàn đang trống → báo lỗi.
* Nếu amount ≤ 0 → không hợp lệ.


### **3. Thanh toán – giải phóng bàn**

```cpp
void checkout(int status[], double bill[], int n, int pos);
```

* In tổng tiền
* Reset `status = 0`, `bill = 0`


### **4. Hiển thị danh sách bàn**

```cpp
void printTables(int tableNumber[], int status[], double bill[], int n);
```


### **5. Tìm bàn theo số hiệu**

Dùng tìm kiếm tuyến tính:

```cpp
int findTable(int tableNumber[], int n, int key);
```


### **6. Thống kê số bàn trống và đang sử dụng**

```cpp
void statistics(int status[], int n, int &emptyCount, int &usedCount);
```


### **7. Tìm bàn có hóa đơn cao nhất**

```cpp
int maxBillPos(double bill[], int n);
```


### **8. Sắp xếp danh sách theo hóa đơn tăng dần**

Phải sắp xếp **đồng bộ 3 mảng**: số bàn – trạng thái – hóa đơn.

```cpp
void sortByBill(int tableNumber[], int status[], double bill[], int n);
```

Gợi ý: dùng **Selection Sort** hoặc **Bubble Sort**.

## **YÊU CẦU THÊM**

Sinh viên nên kiểm tra hợp lệ:

* Không cho nhập số bàn trùng
* Khi tính tiền món → kiểm tra amount > 0
* Khi thanh toán bàn trống → báo lỗi
* Khi gọi món cho bàn trống → báo lỗi
