Tìm kiếm nhị phân

Trò chơi
Nghĩ 1 số từ 1 - 100

Chỉ mất 7 lần đoán
[1, 100]
1: 50, [51, 100]
2: 75, [51, 74]
3: 62, [63, 74]
4: 68, [69, 74]
5: 71, [69, 70]
6: 69, [70, 70]

[1, 100]
1: 50, [1, 49]
2: 25, [26, 49]
3: 37, [26, 36]
4: 31, [26, 30]
5: 28, [26, 27]
6: 26, [27, 27]
7: 27

----------------------------------------
Cho một dãy a đã sắp xếp tăng dần
Các chữ số trong dãy a khác nhau

Nhập vào thêm 1 số x.
In ra vị trí của x trong dãy a,
Nếu không có thì in ra -1

Ví dụ
5 10
1 4 6 10 20
Thì kết quả là 4

Ví dụ 2:
5 10
1 4 6 9 20
Thì kết quả là -1





10 15
1 4 6 10 20 30 40 50 60 100

[1, 10]
mid = 5, a[5] = 20, 15 < 20
[1, 4]
mid = 2, a[2] = 4, 15 > 4
[3, 4]
mid = 3, a[3] = 6, 15 > 6
[4, 4]
mid = 4, a[4] = 10, 15 > 10
[5, 4]

l = 1, r = n;

while(l <= r) {
	mid = (l + r) / 2;
	if (a[mid] == x)
		return mid;
	else if (a[mid] > x)
		r = mid - 1;
	else 
		l = mid + 1;
}
return -1;


Thoát vòng lặp khi l > r
Tiếp tục vòng lặp khi l <= r
