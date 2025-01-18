Cho một chuỗi S, in ra các ký tự số trong chuỗi S,
Nếu không có ký tự số nào thì in ra -1.

Ví dụ:
S = "abc123abc456"
Kết quả: 123456

S = "abc3245abc"
Kết quả: 3245

S = "abcabc"
Kết quả: -1


Cho một chuỗi S, In ra chuỗi ký tự số dài nhất,
Nếu không có ký tự số nào thì in ra -1.

Ví dụ:

S = "abc123aoi4567"
Kết quả: 4567

S = "abc324oks45ks945867"
Kết quả: 945867

S = "abcabc"
Kết quả: -1

string max = "324"
string t = "945867"
t = t + '4'


A B C K

Số lượng chia hết cho A và B nhưng không chia hết cho C
Nằm trong khoảng từ 1 đến K


A = 1, B = 2, C = 3, K = 10

lcm(A, B) = 2
2 4 6 8 10

Từ 1 đến K có mấy số là bội của lcm(A, B)
K / lcm(A, B)

lcm(A, lcm(B, C)) = 6

res = K / lcm(A, B) - K / lcm(A, lcm(B, C))

A = 2, B = 4, C = 8, K = 25

lcm(A, B) = 4
Có 6 chia hết cho 4
lcm(A, lcm(B, C)) = 8
Có 3 số chia hết cho 8

- Các số chia hết cho a và b, là các số chia hết cho lcm(a, b)
- Trong khoảng từ 1 đến N sẽ có N / K số chia hết cho K

4 12 20



6 * (1 3 6 10 15 21)

1 3 6 10 15 21

1 = 1
3 = 1 + 2
6 = 1 + 2 + 3
10= 1 + 2 + 3 + 4
15= 1 + 2 + 3 + 4 + 5
21= 1 + 2 + 3 + 4 + 5 + 6

1 =  1 * (1 + 1) / 2 = (1^2 + 1) / 2
3 =  2 * (2 + 1) / 2 = (2^2 + 2) / 2
6  = 3 * (3 + 1) / 2 = (3^2 + 3) / 2
10 = 4 * (4 + 1) / 2 = (4^2 + 4) / 2
15 = 5 * (5 + 1) / 2 = (5^2 + 5) / 2
21 = 6 * (6 + 1) / 2 = (6^2 + 6) / 2

((1 + 2 + 3 + ... + n) + (1^2 + 2^2 + ... + n^2)) / 2

6 *(n * (n + 1) / 2 + n * (n + 1) * (2*n + 1) / 6) / 2

n * (n + 1) * (n + 2)

((n % m) * (n + 1) % m) % m * (n + 2) % m

