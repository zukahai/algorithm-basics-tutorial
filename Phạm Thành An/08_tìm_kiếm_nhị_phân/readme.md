

Cho một dãy a đã sắp xếp tăng dần có n phần tử.
Tìm kiếm vị trí của số x trong dãy
Nếu không có thì in ra -1

- Dòng đầu là số n và x
- Dòng 2 là n số nguyên

13 20
1 2 2 2 3 5 10 20 30 35 40 50 100

- i
- a[i]

Tìm số 45
[1, 13] -> m = 7, a[7] = 10, 10 < 45
[8, 13] -> m = 10, a[10] = 35, 35 < 45
[11, 13] -> m = 12, a[12] = 50, 50 > 45
[11, 11] -> m = 11, a[11] = 40, 40 < 45
[12, 11]

int l = 1, r = n;

while (l <= r){
	int m = (l + r) / 2;
	if (a[m] == x)
		return m;
	else if (a[m] < x) {
		l =  m + 1;
	else {
		r = m - 1;
	}
}
return -1;

---------------------------------------
13 20
1 2 2 2 3 20 20 20 20 20 40 50 100
Tìm vị trí cuối cùng của x, không có in ra -1

int l = 1, r = n;
int res = -1;

while (l <= r){
	int m = (l + r) / 2;
	if (a[m] == x) {
		res = m;
		l = m + 1;
	}
	else if (a[m] < x) {
		l =  m + 1;
	else {
		r = m - 1;
	}
}
return res;
 

--------------------------------------
Cửa hàng bán bút.
Cứ mua 5 cây thì tặng thêm 3 cây

An cần có đủ N cây bút.
Hỏi An cần mua ít nhất bao nhiêu cây bút

Ví dụ
N = 10, thì cần mua 7
N = 20, thì cần mua 14


Mua: m cây bút.
Tổng bút: m + (m / 5) * 3

res = 14
Cần 20 cây bút
[1, 20] -> mua 10 cây thì được 16 cây bút
[11, 20] -> mua 15 cây thì được 21 cây bút
[11, 14] -> mua 12 cây thì được 18 cây
[13, 14] -> mua 13 cây thì được 19 cây
[14, 14] -> mua 14 cây thì được 20 cây


------------------------------------
Một rạp chiếu phim thiết kế như sau
Dãy 1 có 1 ghế
Dãy 2 có 2 ghế
Dãy 3 có 3 ghế
....
Dãy k có k ghế

Rạp cần tính toán để đủ số chỗ cho n khách
Hỏi rạp cần xây ít nhất bao nhiêu dãy

Ví dụ:
- n = 5, xây 3 dãy
- n = 3, xây 2 dãy

- Số dãy: k
- Tổng số ghế: k * (k + 1) / 2