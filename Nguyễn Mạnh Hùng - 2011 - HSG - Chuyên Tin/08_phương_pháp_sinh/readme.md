6 2 5
2 3 4 5 6 7
2 6 5 4 3 7

swap(a[2], a[5])
swap(a[3], a[4])

while(s < e) {
	swap(a[s], a[e])
	s++, e--;
}

for (int i = 1; i <= n; i++)
	cout << a[i] << " ";

-------------------------------------------
Phương pháp sinh

Cho trước số n và k, tìm số m bé nhất
sao cho m >= n và m chia hết cho k
(1 <= n, k <= 10^18

Ví dụ
n = 7, k = 5
Thì kết quả m = 10

Số chia hết cho k là: k * x

m >= n
k * x >= n
x >= n / k
x >= n / k

x = ceil(1.0 * n / k)


-------------------------------------------

Phương pháp sinh

Cho trước số n,
tìm số chính phương m lớn nhất
sao cho m <= n.
(1 <= n <= 10^18)

Ví dụ
n = 7
Thì kết quả m = 4

Số chính phương x * x
m >= n
x * x >= n
x >= sqrt(n)
x = ceil(sqrt(n))
cout << x * x;

-----------------------------------------
Cho trước số n,
tìm số chính phương m nhỏ nhất
sao cho m > n.
(1 <= n <= 10^18)

Ví dụ 1
n = 7
Thì kết quả m = 9

Ví dụ 2
n = 9
Thì kết quả m = 16

-----------------------------------------
In ra tất cả các số chính phường
Trong khoảng từ 1 đến N
(1 <= N <= 10^12)

Ví dụ:

N = 23
Kết quả: 1 4 9 16



