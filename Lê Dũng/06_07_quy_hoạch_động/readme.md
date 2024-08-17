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

## Bài 3: Doanh số nhà hàng

Một nhà hàng ghi chép doanh số bán hàng hàng ngày. Doanh số bán hàng của ngày đầu tiên là 30 đồng.

Các ngày tiếp theo, doanh số bán hàng của ngày hôm trước tăng thêm 10%.

Ví dụ: 30, 33, 36.3, 39.93, 43.923, 48.3153, ...


Cho số nguyên dương n. Hãy tính doanh số bán hàng của ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 10^3)

**Output:**

Doanh số bán hàng của ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 36.3   |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 6     | 48.3153| 

## Bài 4: Dãy con liên tiếp tăng dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp tăng dài nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^6).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

**Output**<br>

Dãy con liên tiếp tăng dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 7 4 50 | 4 50 |

**Giải thích:** Dãy con tăng dài nhất là 4 50

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 2 8 9 |

**Giải thích:** Dãy con tăng dài nhất là 2 8 9

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 8<br> 1 3 2 1 3 6 7 2 | 1 3 6 7 |