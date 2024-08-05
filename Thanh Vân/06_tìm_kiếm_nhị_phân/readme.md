# Bộ 3 tam giác

Nhập vào một số nguyên dương N. <br>
Đếm xem có bao nhiêu bộ 3 số nguyên dương (a, b, c) thỏa mãn điều kiện sau: <br>
- 1 <= a <= b <= c <= n
- a, b, c là 3 cạnh của một tam giác

**INPUT** <br>

- Dòng đầu tiên chứa số nguyên dương N (1 ≤ N ≤ 10^9)

**OUTPUT** <br>

- Một số nguyên là số bộ 3 số nguyên dương thỏa mãn

**VÍ DỤ** <br>

**Ví dụ 1** <br>

| Input | Output |
|-------|--------|
| 3     | 7      |

Có 7 bộ 3 thoả mãn như sau: 
- (1, 1, 1)
- (1, 2, 2)
- (1, 3, 3)
- (2, 2, 2)
- (2, 2, 3)
- (2, 3, 3)
- (3, 3, 3)

n = 10

a = 3, b = 5
c chạy từ b đến a + b - 1
Có mấy giá trị của c sẽ có a trường hợp

a = 3, b = 4
c: 4 -> 6
b = 3: +a truong hop
b = 4: +a truong hop


x < y, từ x -> y sẽ có (y - x + 1) số
Từ b đến 

for a in range(1, n + 1):
    for b in range(a, n + 1):




Nghĩ trong đầu 1 số từ 1 đến 100

Nhiều nhất đoán 7 lần.

