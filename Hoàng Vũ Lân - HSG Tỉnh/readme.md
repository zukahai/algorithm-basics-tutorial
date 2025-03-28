Cho a, b, n (1 <= a, b, n <= 10^18).

Hỏi từ 1 đến n có mấy số chia hết cho a hoặc chia hết cho b

a = 2, b = 3, n = 10
Kết quả là 7
2 3 4 6 8 9 10

a = 4, b = 6, n = 30
2: 2 4 6 8 10 12
3: 3 6 9 12

k = BCNN(a, b) = a * b / UCLN(a, b)

n / a + n  / b - n / k


mp[1] = 4
mp[2] = 6
mp[3] = 99
mp[4] = 44
mp[3]++;

{1, 4}, {2, 6}, {3, 99}, {4, 44}


Đếm xem trong khoảng từ a đến b, có mấy số chia hết cho c.

(1 <= a, b, c <= 10^18)

Ví dụ:

a = 5, b = 10, c = 3
Kết quả là 2

[1, 10]: Có 3 số
[1, 4] + [5, 10] = [1, 10]

1 + ? = 3

[a, b] = [1, b] - [1, a - 1]

1 tới n có bao nhiều số chính phương:
sqrt(n)

Đếm xem trong khoảng từ a đến b  có bao nhiêu số chính phương:

1^2 + 2^2 + ... + n^2 = n * (n + 1) * (2n + 1) / 6

s = a^2 + (a + 1)^2 + ... + b^2

Tìm ước số lẻ lớn nhất của N

(1 <= N <= 10^18)

Ví dụ:

N = 12

Kết quả là 3

12 = 3 

50 = 5 * 5 * 2

N = x1 * x2 * x3 * ... * xk

## Ma trận

Cho ma trận A kích thước n*n (1 <= n <= 10^9)
a[i][j] = i * j

Ví dụ:
n = 4
Thì ma trận là:

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

Cho một số m (1 <= m <= 10^14)
Đếm xem trong ma trận có bao nhiêu số bằng m

Ví dụ: n = 4, m = 12, kết quả là 2

i * j = 12
(1, 12), (6, 2), (4, 3), (3, 4), (2, 6), (12, 1)
m = 6
1 2 3 6

số lượng ước của n, <= log(n)


tổng ước khác n của n lớn hơn n thì là số tí hon

(1 <= n <= 10^4), (1 <= a[i] <= 10^8)

## Sàng nguyên tố

Cho một dãy số a (1 <= a[i] <= 10^7, 1 <= n <= 10^6)
Đếm xem trong dãy số có bao nhiêu số nguyên tố

Ví dụ:
5
1 2 3 4 5

Kết quả là 3