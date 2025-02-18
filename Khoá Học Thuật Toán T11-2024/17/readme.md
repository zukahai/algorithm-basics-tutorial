Quy hoạch động

Quy hoạch động (dynamic programming) là một kỹ thuật giải quyết vấn đề bằng cách chia nhỏ thành các bài toán con, giải quyết từng bài toán con một lần và lưu trữ kết quả để sử dụng lại sau này. Quy hoạch động thường được sử dụng để giải các bài toán tối ưu, tức là bài toán tìm kiếm giá trị lớn nhất hoặc nhỏ nhất của một hàm mục tiêu.

------------------------------------------------
Số fibonacci là số có tổng bằng 2 số trước nó trong dãy số fibonacci. Số fibonacci thứ n được tính bằng công thức:
 
1 1 2 3 5 8 13 21 34 55 89 144

dp[k]: Chính là số fibonacci thứ k

dp[k] = dp[k-1] + dp[k-2]

Nhập vào số N, tìm số N số fibonacci đầu tiên.
Ví dụ:
N = 5, output = 5
N = 6, output = 8
N = 7, output = 13

N = 6
dp[6] = dp[5] + dp[4]
dp[5] = dp[4] + dp[3]
dp[4] = dp[3] + dp[2]
dp[3] = dp[2] + dp[1]
dp[2] = 1
dp[1] = 1

dp[1] = dp[2] = 1
for (int i = 3; i <= N; i++) {
    dp[i] = dp[i-1] + dp[i-2];
}

dp[k]: Chính là số fibonacci thứ k
In ra:
Số fibonacci thứ 1: dp[1]
Số fibonacci thứ 2: dp[2]
Số fibonacci thứ 3: dp[3]
Số fibonacci thứ 4: dp[4]
...
Số fibonacci thứ N: dp[N]


dp[k]: Chính là số fibonacci thứ k
dp[1]  : Chính là số fibonacci thứ 1


-----------------------------------------
Tính N giai thừa

N! = 1 * 2 * 3 * ... * N

dp[k]: Chính là k!

6! = 1 * 2 * 3 * 4 * 5 * 6
6! = 5! * 6


5! = 1 * 2 * 3 * 4 * 5
5! = 4! * 5

k! = (k-1)! * k
dp[k] = dp[k-1] * k



dp[k]: Chính là k!

...  : Chính là (k - 1)!

dp[k] = dp[k-1] * k

dp[5] = dp[4] * 5 = 120
dp[4] = dp[3] * 4 = 24
dp[3] = dp[2] * 3 = 6
dp[2] = dp[1] * 2 = 2
dp[1] = dp[0] * 1 = 1
dp[0] = 1

dp[0] = 1;
for (int i = 1; i <= N; i++) {
    dp[i] = dp[i-1] * i;
}
cout << dp[N] << endl;

dp[k]: Chính là k!
dp[n]:  Chính là n!
....:  Chính t!
....: Chính là (2 * n + 7)!

----------------------------------
In ra các số 2^1, 2^2, 2^3, 2^4, 2^5, ..., 2^n

2^5 = 2 * 2 * 2 * 2 * 2
2^5 = 2 * 2^4
2^4 = 2 * 2^3
2^k = 2 * 2^(k-1)
dp[k] = 2 * dp[k-1]

dp[k]: Chính là 2^k
Kết quả:    


dp[k]: Chính là 2^k
...  : Chính là 2^n

dp[5] = 2 * dp[4]
dp[4] = 2 * dp[3]
dp[3] = 2 * dp[2]
dp[2] = 2 * dp[1]
dp[1] = 2 * dp[0]
dp[0] = 1

dp[0] = 1;
for (int i = 1; i <= N; i++) {
    dp[i] = 2 * dp[i-1];
}
In ra các số 2^1, 2^2, 2^3, 2^4, 2^5, ..., 2^n
// Ngân + Mạnh
for (int i = 1; i <= N; i++) {
    cout << dp[i] << " ";
}

cout << dp[1];
cout << dp[2];
cout << dp[3];
cout << dp[4];
...
cout << dp[N];

Đưa ra 2^10

dp[k]: Chính là 2^k
...    Chính là 2^10

In ra giá trị 2 ^ (x + 7)

dp[k]: Chính là 2^k
dp[x + 7]: Chính là 2 ^ (x + 7)
dp[a + b]

--------------------------------------------
dp[k]: số tiền mà bạn có được sau k ngày

dp[k] = dp[k-1] + dp[k-1] % 10

a = 123
126 129 138 146 152 154

dp[3] = dp[2] + dp[2] % 10
dp[2] = dp[1] + dp[1] % 10
dp[1] = a + a % 10

dp[1] = a + a % 10
for (int i = 2; i <= N; i++) {
    dp[i] = dp[i-1] + dp[i-1] % 10;
}

-----------------------------------------
dp[1] a + maxDigit(a)
dp[k] = dp[k - 1] + maxDigit(dp[k - 1]).
Trong đó, maxDigit(n) là chữ số lớn nhất của số n.

N = 1234, 123, 12

Xử lí N % 10 // 4
N /= 10;

Xử lí N % 10 // 3
N /= 10;

Xử lí N % 10 // 2
N /= 10;

Xử lí N % 10 // 1
N /= 10;


N = 12, output: 51
N = 13, output: 54
N = 14, output: 59
N = 15, output: 65
N = 16, output: 72
S = "1234567891011121314151617"

dp[k]: Tổng các chữ số trong S, khi ghép các số từ 1 đến k

dp[16] = dp[15] + sumDigit(16)

dp[k] = dp[k - 1] + sumDigit(k)
sumDigit(N): Tổng các chữ số của số N

dp[3] = dp[2] + sumDigit(3)
dp[2] = dp[1] + sumDigit(2)
dp[1] = dp[0] + sumDigit(1)
dp[0] = 0

Tính tổng các chữ số của S, với S viết viết liên tiếp các chữ số
từ 1 đến x

dp[k]: Tổng các chữ số trong S, khi ghép các số từ 1 đến k


dp[k] = dp[k - 1] + sumDigit(k)


N = 12, output: 51
N = 13, output: 54
N = 14, output: 59
N = 15, output: 65
N = 16, output: 72
S = "1234567891011121314151617"

dp[k]: Tổng các chữ số trong S, khi ghép các số từ 1 đến k
a = 10, b = 17
s = "1011121314151617"

dp[b] - dp[a - 1]

[a, b] = [1, b] - [1, a - 1]


dp[0] = 0
dp[1] = 1
dp[2] = 3
dp[3] = 6
dp[4] = 10
dp[5] = 15

a = 3, b = 5

s = "345"

Tiểu học: 1 2 3 4 5
Trung học cs: 6 7 8 9


[1 - 9]
[1 - 5]

[6 - 9] = [1 - 9] - [1 - 5]
[1 - 5] + [6 - 9] = [1 - 9]
