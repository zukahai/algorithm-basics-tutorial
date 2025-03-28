## Bài 1: Tìm số fibonacci thứ n

1 1 2 3 5 8 13 21 ...

dp[k]: Số dpibonacci thứ k

dp[1] = dp[2] = 1

Với k >= 3
dp[k] = dp[k - 1] + dp[k - 2]

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

dp[k]: Số gấp đôi thứ 

dp[1] = 1
k >= 2
dp[k] = dp[k - 1] * 2


## Bài 3: Tiền lương

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm 3 đồng.

Ví dụ về dãy tiền lương: 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, ...

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

## Bài 4: Tiền lương 2

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm số tiền được thưởng. Nếu ngày đang là ngày chẵn, người lao động sẽ được thưởng 1 đồng, ngược lại sẽ được thưởng 2 đồng.

Ví dụ về dãy tiền lương: 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, ...

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

dp[k]: Số tiền lương người lao động nhận được ngày thứ k

dp[1] = 1

dp[k] = ?

```
dp[1] = 1
Với k >= 2
Nếu k là số chẵn:
    dp[k] = dp[k - 1] + 1
Nếu k là số lẻ:
    dp[k] = dp[k - 1] + 2
```

## Bài 1: Dãy con tăng dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp tăng dài nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

**Output**<br>

Dãy con liên tiếp tăng dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 7 9 0 | 4 7 9 |


#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 2 5 | 2 8 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 8<br> 1 3 2 1 3 6 7 2 | 1 3 6 7 |

**dp[k]: Độ dài dãy con tăng dài nhất kết thúc tại vị trí k**

```
8
2 3 2 1 3 6 7 20

dp[0] = 1
dp[1] = 2
dp[2] = 1
dp[3] = 1
dp[4] = 2
dp[5] = 3
dp[6] = 4
dp[7] = 1

-----------------
d[0] = 1
Với k >= 1

Nếu a[k] > a[k - 1]:
    dp[k] = dp[k - 1] + 1
Ngược lại:
    dp[k] = 1

```

## Bài 2: Dãy con toàn số chẵn dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp chứa toàn số chẵn dài nhất. Nếu không có dãy con nào thoả mãn in ra -1.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp chứa toàn số chẵn dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 7 4 2 8 9 | 4 2 8 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 2 8 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 <br> 1 3 5 | -1 |

dp[k]: Độ dài của dãy con chứa toàn số chẵn dài nhất **Kết thúc tại vị trí k**

```
5
7 4 2 8 9

Nếu a[0] % 2 == 0:
    dp[0] = 1
Ngược lại:
    dp[0] = 0

dp[0] = 0
dp[1] = 1
dp[2] = 2
dp[3] = 3
dp[4] = 1

Nếu a[k] % 2 != 0:
    dp[k] = 0
Ngược lại:
    dp[k] = dp[k - 1] + 1

```

## Bài 3: Dãy con lẻ giảm dần

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp chứa toàn số lẻ giảm dần dài nhất. Nếu không có dãy in ra -1.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp chứa toàn số lẻ giảm dần dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 7 5 3 1 9 | 7 5 3 1 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 9 5 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 <br> 2 4 0 | -1 |

dp[k]: Độ dài của dãy con chứa toàn số lẻ giảm dần dài nhất **Kết thúc tại vị trí k**

```

11
1 7 5 3 1 9 7 2 5 1 2

dp[0] = 1
dp[1] = 1
dp[2] = 2
dp[3] = 3
dp[4] = 4
dp[5] = 1
dp[6] = 2
dp[7] = 0
dp[8] = 1
dp[9] = 2
dp[10] = 0

Nếu a[0] % 2 != 0:
    dp[0] = 1
Ngược lại:
    dp[0] = 0

Nếu a[k] % 2 == 0:
    dp[k] = 0
Ngược lại:
    Nếu a[k] < a[k - 1]:
        dp[k] = dp[k - 1] + 1
    Ngược lại:
        dp[k] = 1
```

## Bài 4: Dãy con có tổng lớn nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp có tổng lớn nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp có tổng lớn nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 -2 3 -1 2 -6 | 3 -1 2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 4 -2 3 -1 -2 | 4 -2 3 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 <br> -1 -3 -5 | -1 |

**dp[k]: Tổng lớn nhất của dãy con liên tiếp kết thúc tại vị trí k**

```
6
1 -2 3 -1 2 -6

dp[0] = 1
dp[1] = -1
dp[2] = 3
dp[3] = 2
dp[4] = 4
dp[5] = -2

b[k] = dp[k - 1] + a[k]
b[k] = a[k]

Nếu dp[k - 1] > 0:
    dp[k] = dp[k - 1] + a[k]
Ngược lại:
    dp[k] = a[k]


```

## Bài 5: Dãy con có tổng bé nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp có tổng bé nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp có tổng bé nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> -1 -2 3 -1 2 -6 | -1 -2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 4 -5 3 -1 -2 | -5 3 -1 -2 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 <br> -1 -3 -5 | -5 |