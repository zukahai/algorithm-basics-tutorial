Tìm số lớn nhất nhỏ hơn hoặc bằng N
Mà chia hết cho K
(1 <= N, K <= 10^18)

Ví dụ:
N = 23, Kết quả là 20
N = 38, kết quả là 35
N = 4, kết quả là 0

-----------------------------
N = 23, Kết quả là 20

4

for (int i = n; i >= 0; i--)
	if (i % K == 0) {
		cout << i;
		return 0;
	}


----------------------------------
Tìm số M lớn nhất nhỏ hơn hoặc bằng N
Mà chia hết cho K

N = 745, K = 100 

M = K * X       (x là số tự nhiên, x >= 0)

M <= N
K * X <= N

X <= N / K
X <= 7.45
X = 7


cin >> N >> K;
long long X = N / K;
cout << K * X;

-------------------------------------------
Tìm số M nhỏ nhất lớn hơn hoặc bằng N
Mà chia hết cho K
(1 <= N, K <= 10^18)

Ví dụ
N = 16, K = 5
Kết quả: 20

N = 20, K = 5
Kết quả: 20

K * X >= N
X >= N / K

X >= 3.2
X = 4, N / K + 1

X >= 4
X = 4, N / K

X = ceil(1.0 * N / K)

Nếu N chia hết cho K
	Thì x = N / K
Ngược:
	Thì x = N / K + 1

In ra K * X

ceil(5) = 5
ceil(5.012) = 6

X = ceil(N / K)

---------------------------------
Nhập N và K.
(1 <= K, N <= 10^18, N / K <= 10^7)

In ra các số chia hết cho K từ 1 đến N
Theo thứ tự tăng dần

Ví dụ 1:
N = 20, K = 6
Kết quả là: 6 12 18

Ví dụ 2:
N = 28, K = 7
Kết quả là: 7 14 21 28


k*1  K*2  K*3 ... k*x


k*x <= N
x <= N / K

x <= 3.333
x = 3, X = N / K

x <= 4
x = 4, X = N / K

--------------------------------
In ra số chính phương lớn nhất
bé hơn hoặc bằng N
(1 <= N <= 10^18)

Ví dụ:
N = 10, Kết quả là 9
N = 20, kết quả là 16

bool check(int n) {
	int k = sqrt(n);
	return k * k == n;
}

1, 4, 9, ..., 625, 9801

M = x * x         (x là số nguyên dương)

M <= N
x * x <= N
x <= sqrt(N)

N = 20
x <= sqrt(20)
x <= 4.5
x = sqrt(N)

--------------------------------
In ra số chính phương trong khoảng 1 đến N
Theo thứ tự tăng dần
(1 <= N <= 10^14)

Ví dụ:
N = 20
In ra 1 4 9 16

N = 36
In ra 1 4 9 16 25 36