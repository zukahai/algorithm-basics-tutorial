# Mảng đánh dấu

## Bài 1: Các số trong mảng

Cho một mảng số nguyên `a` gồm `n` phần tử. Liệt kê các số xuất hiện trong mảng.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$).

**Output:**

- In ra các số xuất hiện trong mảng theo thứ tự xuất hiện trong mảng trên 1 dòng, mỗi số cách nhau bởi dấu cách.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 <br> 1 2 2 3 1000     |1 2 3 1000 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 3 3 3 3 3     |3  |

## Bài 2: Các số trong mảng và số lần xuất hiện

Cho một mảng số nguyên `a` gồm `n` phần tử. Liệt kê các số xuất hiện trong mảng và số lần xuất hiện của chúng.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$).

**Output:**

- Mỗi dòng chứa một số xuất hiện trong mảng và số lần xuất hiện của nó, mỗi số cách nhau bởi dấu cách.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 <br> 1 2 2 3 1000     |1 1 <br> 2 2 <br> 3 1 <br> 1000 1|

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 3 3 3 3 3     |3 5  |

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 7 <br> 4 1 2 1 2 1 4    |1 3 <br> 2 2 <br> 4 2 |

## Bài 3: Các số xuất hiện 1 lần

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy liệt kê các số chỉ xuất hiện 1 lần trong mảng. Nếu không có số nào thì in ra -1.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$).

**Output:**

- In ra các số chỉ xuất hiện 1 lần trong mảng theo thứ tự xuất hiện trong mảng trên 1 dòng, mỗi số cách nhau bởi dấu cách.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 <br> 1 2 2 3 1000     |1 3 1000 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 3 3 8 3 3     | 8|

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 7 <br> 4 1 2 1 2 1 4    |  -1|

## Bài 4: Số xuất hiện nhiều nhất

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tìm số xuất hiện nhiều nhất trong mảng.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$).

**Output:**

- In ra số xuất hiện nhiều nhất trong mảng.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 <br> 1 8 8 3 1000     |8 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 3 3 8 3 3     | 3|

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 7 <br> 4 1 2 1 2 1 4    | 1|

## Bài 5: Chia kẹo

Bảo có `n` viên kẹo, mỗi viên kẹo có một màu. Bảo muốn chia kẹo cho Quyết và Hoàng sao cho mỗi loại kẹo đều phải chia đều cho cả hai. Hãy giúp Bảo xác định xem có thể chia kẹo hay không.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$) - màu của các viên kẹo.

**Output:**

- In ra "YES" nếu có thể chia kẹo, ngược lại in ra "NO".

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 6 <br> 1 7 1 7 7 7| YES |

**Giải thích:**
Có 6 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 7 có 4 viên. Bảo có thể chia 2 viên kẹo màu 1 và 4 viên kẹo màu 7 cho Quyết và Hoàng.

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 1 1 5 5 5 | NO |

**Giải thích:**
Có 5 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 5 có 3 viên. Bảo không thể chia đều 3 viên kẹo loại 5 cho Quyết và Hoàng.





