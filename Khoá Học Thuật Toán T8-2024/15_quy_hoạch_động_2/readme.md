## Bài 1: Tính số fibonacci thứ n trong dãy fibonacci
1 1 2 3 5 8 13 21 ...

dp[k]: Số fibonacci thứ k

dp[1] = 1
dp[2] = 1

Với k >= 3
dp[k] = dp[k-1] + dp[k-2]

## Bài 2: Số gấp đôi

Dãy số gấp đôi được định nghĩa như sau:

Số đầu tiên là sẽ bằng 1

Từ số thứ 2 trở đi, số gấp đôi thứ n sẽ bằng số gấp đôi thứ n-1 nhân 2.

Ví dụ: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, ...

Cho số nguyên dương n. Hãy tính số gấp đôi thứ n.

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

## Bài 4: Tiền lương

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

**dp[k]: Số tiền lương người lao động nhận được ngày thứ k**

```dp[k] = ?

dp[1] = 1

k >= 2
Nếu k là số chẵn:
    dp[k] = dp[k-1] + 1
Nếu k là số lẻ:
    dp[k] = dp[k-1] + 2
```

[1, 3, 4, 5, 6, 7, 8]

Bắt đầu từ chỉ số: start
Kết thúc ở chỉ số: end
Độ dài: len = end - start + 1

2 -> 5

## Bài 4: Dãy con liên tiếp tăng dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định độ dài dãy con liên tiếp tăng dài nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

**Output**<br>

Độ dài dãy con liên tiếp tăng dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 7 4 50 | 2 |

**Giải thích:** Dãy con tăng dài nhất là 4 7

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 3 |

**Giải thích:** Dãy con tăng dài nhất là 2 8 9

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 8<br> 1 3 2 1 3 6 7 2 | 4 |

**Giải thích:** Dãy con tăng dài nhất là 1 3 6 7

8
2 1 4 2 6 7 10 

**dp[k]: Độ dài dãy con tăng dài nhất kết thúc tại chỉ số k**

8
1 3 2 1 3 6 7 2

dp[0] = 1
dp[1] = 2
dp[2] = 1
dp[3] = 1
dp[4] = 2
dp[5] = 3
dp[6] = 4
dp[7] = 1

dp[0] = 1
k >= 1
dp[k]:

```
Nếu a[k] > a[k-1]:
    dp[k] = dp[k-1] + 1
Ngược lại:
    dp[k] = 1
```



