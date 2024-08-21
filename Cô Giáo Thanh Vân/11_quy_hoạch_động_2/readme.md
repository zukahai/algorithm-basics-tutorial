# Quy hoạch động trong dãy con liên tiếp

a = [1, 2, 3, 4, 5, 6]

Xác định dãy con:
    - Vị trí bắt đầu: start
    - Vị trí kết thúc: end
    - Độ dài của dãy con: length = end - start + 1


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
| 5<br> 6 4 7 4 50 | 4 50 |


#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 2 8 9 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 8<br> 1 3 2 1 3 6 7 2 | 1 3 6 7 |

--------------------

b[k]: Độ dài của dãy con tăng dài nhất **Kết thúc tại vị trí k**

```
8
1 3 2 1 3 6 7 2

b[0] = 1
b[1] = 2
b[2] = 1
b[3] = 1
b[4] = 2
b[5] = 3
b[6] = 4
b[7] = 1

b[0] = 1

Nếu a[k] > a[k - 1]:
    b[k] = b[k - 1] + 1
Nếu a[k] <= a[k - 1]:
    b[k] = 1
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


b[k]: Độ dài của dãy con chứa toàn số chẵn dài nhất **Kết thúc tại vị trí k**

```
5
7 2 8 10 5

b[0] = 0
b[1] = 1
b[2] = 2
b[3] = 3
b[4] = 0


Nếu a[0] % 2 == 0:
    b[0] = 1
Ngược lại:
    b[0] = 0

Nếu a[k] % 2 == 0:
    b[k] = b[k - 1] + 1
Ngược lại:
    b[k] = 0
    

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
| 3 <br> 1 3 5 | -1 |

b[k]: Độ dài của dãy con chứa toàn số lẻ giảm dần dài nhất **Kết thúc tại vị trí k**

```
Nếu a[0] lẻ:
    b[0] = 1
Ngược lại:
    b[0] = 0

Nếu a[k] chẵn:
    b[k] = 0
Ngược lại:
    Nếu a[k] < a[k - 1]:
        b[k] = b[k - 1] + 1
    Ngược lại:
        b[k] = 1
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

b[k]: Tổng lớn nhất của dãy con liên tiếp **Kết thúc tại vị trí k**

```
6
-2 3 -1 2 -6 3

b[0] = -2
b[1] = 3
b[2] = 2
b[3] = 4
b[4] = -2
b[5] = 3

b[k] = a[k]
b[k] = b[k - 1] + a[k]

Nếu 0 > b[k - 1]:
    b[k] = a[k]
Ngược lại:
    b[k] = b[k - 1] + a[k]

```