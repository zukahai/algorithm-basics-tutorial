Phương pháp sinh
- Tìm số thoả mãn
- Tìm ra danh sách
- Đếm số lượng

In ra các số chia hết cho K
Từ 1 tới N

K*1  K*2  k*3 ... K*x

In ra các số chia hết cho K
Trong khoảng A đến B

Ví dụ A = 10, B = 30, K = 4
Kết quả: 12 16 20 24 28
A <= B

k*3  k*4  k*5  k*6  k*7
k*x1 ... k*x2

A <= K*x <= B

A <= K*x, tìm x1
K*x >= A
x >= A/K

x >= 10/4
x >= 2.5
x = 2, x = ceil(A/K)
x1 = ceil(1.0 * A/K)


K*x <= B, tìm x2

10 <= 4*x <= 30
x1 = 3, x2 = 7






Đếm số lượng số chia hết cho K
Từ 1 đến N
(1 <= N, K <= 10^18)

1 <= K*x <= N

K*x >= 1
x >= 1 / K
x1 = 1, x2 = N/K

Ví dụ N = 22, K = 4
cout << N / K;
k*1  k*2 k*3 ... k*x 

Đếm số lượng số chia hết cho K
Từ A đến B
(1 <= A <= B, K <= 10^18)

A = 10, B = 30, K = 4
12 16 20 24 28

k*3 k*4 k*5 k*6 k*7
x1 -> x2
x2 - x1 + 1


Đếm xem trong khoảng A đến B
Có bao nhiêu số chính phương
(1 <= A <= B <= 10^18)

Ví dụ A = 10, B = 50
Kết quả là 4

A <= x * x <= B
16 25 36 49

4*4      7*7

Tìm số chính phương chẵn lớn nhất
Bé hơn hoặc bằng N

Ví du:
N = 30, Kết quả là 16
N = 17, kết quả là 16

Công thức sinh số chính phương chẵn
4 16 36 64 100

2^2  4^2  6^2  8^2  10^2 12^2 14^2 100^2
4*x^2

= bình phương của số chẵn

Sinh số chẵn: (2*x) * (2*x) = 4*x^2

4*x^2 <= N
x^2 <= N / 4
x <= sqrt(N / 4.0)
x <= 2.7
x = 2

Công thức sinh
- Số lẻ
- Số chính phương lẻ
- Số chẵn chia hết cho K
- Số chia a dư b (b < a)
a = 5, b = 2
2 7 12 17 






