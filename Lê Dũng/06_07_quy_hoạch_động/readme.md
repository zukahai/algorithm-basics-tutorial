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
| 5<br> 6 4 7 4 20 | 4 7 |

**Giải thích:** Dãy con tăng dài nhất là 4 7

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 2 8 9 |

**Giải thích:** Dãy con tăng dài nhất là 2 8 9

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 8<br> 1 3 2 1 3 6 7 2 | 1 3 6 7 |

## Bài 5: Dãy con chẵn giảm dần liên tiếp dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con chẵn giảm dần liên tiếp dài nhất. Nếu không có dãy con chẵn giảm dần nào, in ra -1.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^6).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

**Output**<br>

Dãy con chẵn giảm dần liên tiếp dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 8 6 2 1 6| 8 6 2 |

**Giải thích:** Dãy con chẵn giảm dần liên tiếp dài nhất là 8 6 2

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 8 6 4 2 1 | 8 6 4 2 |

**Giải thích:** Dãy con chẵn giảm dần liên tiếp dài nhất là 8 6 4 2

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 5<br> 1 3 5 7 9 | -1 |

----------------------------
6
1 8 10 2 1 6

f[k]: độ dài dãy con chẵn giảm dần liên tiếp dài nhất kết thúc tại chỉ số k

f[0] = 0
f[1] = 1
f[2] = 2
f[3] = 3
f[4] = 0
f[5] = 1

```
f[0] = (a[0] % 2 == 0) ? 1 : 0

Nếu a[k] % 2 != 0 :
    f[k] = 0
Ngược lại:
    Nếu a[k] < a[k - 1]:
        f[k] = f[k - 1] + 1
    Ngược lại:
        f[k] = 1
```
    

## Bài 6: Dãy con liên tiếp có tổng lớn nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con có tổng lớn nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^6).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).<br>

**Output**<br>

Dãy con có tổng lớn nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 -3 4 -1 7 -5 | 4 -1 7 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 6 -4 7 2 -4 | 6 -4 7 2 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 5<br> -1 -2 -3 -4 -5 | -1 |

f[k]: tổng lớn nhất của dãy con kết thúc tại chỉ số k

```
6
1 -3 4 -1 7 -5

f[0] = 1
f[1] = -2
f[2] = 4
f[3] = 3
f[4] = 10
f[5] = 5

f[0] = a[0]
k từ 1 trở đi:

Nếu f[k - 1] > 0:
    f[k] = f[k - 1] + a[k]
Ngược lại:
    f[k] = a[k]

```

## Bài 7: Dãy số cùng tính chất chẵn lẻ

Cho một dãy số nguyên a1, a2, ..., an.<br>
Xác định dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chẵn hoặc toàn số lẻ. Nếu có nhiều dãy con thỏa mãn, in ra dãy con có chỉ số bắt đầu nhỏ nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^6).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).<br>

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chẵn hoặc toàn số lẻ.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 2 4 8 6 11 | 2 4 8 6|

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 8<br> 2 1 1 1 2 2 2 2| 2 2 2 2|

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 5<br> 1 2 4 3 5 | 2 4|


