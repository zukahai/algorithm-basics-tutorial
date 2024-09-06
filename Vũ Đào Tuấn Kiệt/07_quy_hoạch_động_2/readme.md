# Quy hoạch động

## Bài 1. Số fibonacci thứ n

Cho số nguyên dương n, hãy tìm số fibonacci thứ n.

Dãy số fibonacci được định nghĩa như sau:

- F(1) = 1
- F(2) = 1
- F(n) = F(n-1) + F(n-2) với n > 2

1 1 2 3 5 8 13 ...

f(1) = 1
f(2) = 1
f(3) = 2
f(4) = 3
f(5) = 5
f(6) = 8

## Bài 2: Số gấp đôi

Dãy số gấp đôi được định nghĩa như sau:

Số đầu tiên là sẽ bằng 1

Từ số thứ 2 trở đi, số gấp đôi thứ n sẽ bằng số gấp đôi thứ n-1 nhân 2.

Ví dụ: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, ...

Cho số nguyên dương n. Hãy tính số gấp đôi thứ n.

**dp[k]: Số gấp đôi thứ k**

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Số gấp đôi thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 4      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 64     |

```
f[k]: số gấp đôi thứ k
f[1] = 1

Với k >= 2:
f[k] = f[k - 1] * 2
```

## Bài 3: Tiền lương

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm 3 đồng.

Ví dụ các ngày tiếp theo: 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, ...

Cho số nguyên dương n. Hãy tính số tiền lương người lao động nhận được ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 10^6)

**Output:**

Số tiền lương người lao động nhận được ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 7      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 19     |

```
f[k]: Lưu số tiền lương người lao động nhận được ngày thứ k

f[1] = 1
Nếu k >= 2:
f[k] = f[k - 1] + 3


```

## Bài 4: Tiền lương 2

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm số tiền được thưởng. Nếu ngày đang là ngày chẵn, người lao động sẽ được thưởng 1 đồng, ngược lại sẽ được thưởng 2 đồng.

Ví dụ các ngày tiếp theo: 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, ...

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

```

f[1] = 1

Với k >= 2:

Nếu k là số chẵn:
f[k] = f[k - 1] + 1

Nếu k là số lẻ:
f[k] = f[k - 1] + 2

Công thức tổng quát:
f[k] = f[k - 1] + 1 + k % 2

```

## Bài 5: Doanh số nhà hàng

Một nhà hàng ghi chép doanh số bán hàng hàng ngày. Doanh số bán hàng của ngày đầu tiên là 30 đồng.

Các ngày tiếp theo, doanh số bán hàng của ngày hôm trước tăng thêm 10%.

Ví dụ: 30, 33, 36.3, 39.93, 43.923, 48.3153, ...

Cho số nguyên dương n. Hãy tính doanh số bán hàng của ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

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

```

f[1] = 30

Với k >= 2:
f[k] = f[k - 1] + 0.1 * f[k - 1]

```

## Bài 6: Dãy số HaiZuka

Dãy số HaiZuka được định nghĩa như sau:

Số đầu tiên là sẽ bằng 1
Số thứ 2 là 4
Số thứ 3 là 10

Từ số thứ 4 trở đi, số HaiZuka thứ n sẽ bằng tổng 3 số HaiZuka trước nó.

Ví dụ: 1, 4, 10, 15, 29, 54, 98, ...

Cho số nguyên dương n. Hãy tính số HaiZuka thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Số HaiZuka thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 10     |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 6     | 54     |

```

f[1] = 1
f[2] = 4
f[3] = 10

Với k >= 4:
f[k] = f[k - 1] + f[k - 2] + f[k - 3]

```


## Dãy con tăng dần liên tiếp dài nhất


**dp[k]: độ dài dãy con tăng dần liên tiếp dài nhất kết thúc tại ví trị thứ k**

```
6
2 1 3 5 2 3

dp[0] = 1
dp[1] = 1
dp[2] = 2
dp[3] = 3
dp[4] = 1
dp[5] = 2

dp[0] = 1
dp[k] = ?
Nếu a[k - 1] < a[k]:
    dp[k] = dp[k - 1] + 1
Ngược lại:
    dp[k] = 1
```