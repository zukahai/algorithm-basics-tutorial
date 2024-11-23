## Bài 7

3
-3 -5 -10
- s = a[1] * a[2]
- s1 = a[n] * a[n - 1]
cout << max(s, s1)


-----------------------------
## Bài 7 (2)
5
-10 -2 -2 -2 -1
->

- Dãy full số <= 0, thì kq là a[n - 1] * a[n]
- Dãy có cả số âm và dương, thì kq là a[1] * a[n]
- Dãy full số >= 0 thì in ra a[1] * a[2]

- Kiểm tra dãy toàn số <= 0, kiểm tra a[n] <= 0
- Kiểm tra dãy toàn số >= 0, kiểm tra a[1] >= 0
- Kiểm tra dãy có cả số âm và số dương: a[n] > 0 và a[1] < 0

-----------------------------

## Bài 9: Dãy tăng

11
3 2 3 4 0 7 9 10 6 7 10 11 23 60

s = 1
smax = 4
cscuoi = 8


- độ dài của dãy tăng dài nhất: 4
Biến smax: Lưu độ dài của dãy tăng dài nhất
Biến s: Lưu độ dài của dãy tăng

s = 1
For i: 1 tới n
	Nếu a[i] > a[i - 1] {
		s++;
	} Ngược lại {
		s = 1;
	}
	if (smax < s) {
		smax = s;
		cscuoi = i;
	}

-------------------------------

6
1 2 -3 10 -5 -3
Tìm dãy con liên tiếp dài nhất
Mà các số liên tiếp của chúng trái dấu
s = 1
smax = 1;
cscuoi = 1

for i: 2 đến n
	if (a[i] * a[i - 1] < 0)
	....

-------------------------------
Tìm dãy con liên tiếp liền kề chẵn lẻ

Ví dụ 1:
5
1 2 2 1 4 6
Kết quả là 2 1 4

Ví dụ 2:
5
1 1 2 1 1
Kết quả là 1 2 1