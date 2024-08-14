# Dãy con

## Bài 1: Xác định dãy con liên tiếp

Cho một dãy số nguyên a1, a2, ..., an.<br>
Xác định dãy con bắt đầu từ m và kết thúc tại k

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

Dòng thứ ba chứa số nguyên m, k (1 ≤ m ≤ k ≤ n).<br>

**Output**<br>

Dãy con bắt đầu từ chỉ số m và kết thúc tại chỉ số k.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 2 4 | 3 4 5 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 4 6 3 2 4<br> 1 3 | 6 3 2 |

## Bài 2: Xác định dãy con liên tiếp 2

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp kết thúc tại chỉ số **k** và có độ dài là **m**

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

Dòng thứ ba chứa số nguyên m, k (1 ≤ m ≤ n).<br>

**Output**<br>

Dãy con liên tiếp kết thúc tại chỉ số **k** và có độ dài là **m**.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 2 4 5<br> 3 4 | 2 4 5 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 10 3 2 5 7<br> 2 3 | 2 5 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 6<br> 1 2 3 4 5 6<br> 6 5 | 1 2 3 4 5 6 |

Kết thúc tại 40 (k)
độ dài là 3 (m)
38 39 40
Từ 40 - (m - 1) -> 40


Kết thúc tại k
Độ dài m
Từ k - (m - 1) -> 

## Bài 3: Xác định dãy con liên tiếp 3

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp bắt đầu từ chỉ số **k** và có độ dài là **m**

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

Dòng thứ ba chứa số nguyên m, k (1 ≤ m ≤ n).<br>

**Output**<br>

Dãy con liên tiếp bắt đầu từ chỉ số **k** và có độ dài là **m**.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 7 4 5<br> 3 2 | 7 4 5 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 10 3 2 5 7<br> 2 3 | 5 7 |

## Bài 4: Dãy con tăng dài nhất

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
| 5<br> 6 4 7 4 5 | 2 |

**Giải thích:** Dãy con tăng dài nhất là 4 5

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 7 2 8 9 5 | 3 |

**Giải thích:** Dãy con tăng dài nhất là 2 8 9

## Bài 5: Độ dài dãy con chẵn dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định độ dài dãy con chứa toàn số chẵn dài nhất. Đầu vào đảm bảo tồn tại ít nhất một dãy con chứa toàn số chẵn.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ |ai| ≤ 10^9).<br>

**Output**<br>

Độ dài dãy con chứa toàn số chẵn dài nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 6 4 7 4 5 | 2 |

**Giải thích:** Dãy con chứa toàn số chẵn dài nhất là 6 4

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 8 6 5 | 3 |

**Giải thích:** Dãy con chứa toàn số chẵn dài nhất là 2 8 6






