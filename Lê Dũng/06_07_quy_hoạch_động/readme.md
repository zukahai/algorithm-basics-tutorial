## Bài 1: Tính số fibonacci thứ n

1 1 2 3 5 8 13

n = 5 -> 5
n = 7 -> 13

f1 = 1
f2 = 1
f3 = f1 + f2 = 2
f4 = f2 + f3 = 3
f5 = f3 + f4 = 5
f6 = f4 + f5 = 8
f7 = f5 + f6 = 13

f[k]: số fibonacci thứ k

f[1] = 1
f[2] = 1
Từ k = 3 trở đi:
f[k] = f[k - 1] + f[k - 2]

## Bài 2: Tiền lương

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm số tiền được thưởng. Nếu ngày đang là ngày chẵn, người lao động sẽ được thưởng 1 đồng, ngược lại sẽ được thưởng 2 đồng.

Ví dụ các ngày từ 1 đến N: 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, ...

Cho số nguyên dương n. Hãy tính số tiền lương người lao động nhận được ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 10^6)

**Output:**

Số tiền lương người lao động nhận được ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 4      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 8     | 11      |