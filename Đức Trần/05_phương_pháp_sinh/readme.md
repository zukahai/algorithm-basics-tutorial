# Mảng đánh dấu

## Bài 1: Cặp số chia hết cho 3

Cho một mảng số nguyên, Đếm số cặp số i và j sao cho i < j và a[i] + a[j] chia hết cho 3.

**Input:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^6) - số phần tử của mảng.
- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^9).

**Output:**

- Một số nguyên - số cặp số thỏa mãn.

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 4<br> 1 2 3 4 | 2 |

**Giải thích:**

Có 2 cặp số thỏa mãn là (1, 2) và (2, 4).

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 8<br> 3 6 9 1 4 2 5 8 |9 |

**Giải thích:**

Có 9 cặp số thỏa mãn là (3, 6), (3, 9), (6, 9), (1, 2) (1, 5), (1, 8), (4, 2) (4, 5), (4, 8)

- Tổng 2 số chia hết cho 3 thì cặp số đó chia hết cho 

3a + 1 
3b + 2
3a + 3b + 3
0 6 9 1 4 2 5 8
0 0 0 1 1 2 2 2

Có 3 số chia hết cho 3
Có 2 số chia 1 dư 1
Có 3 số chia 1 dư 2

b[k]: số lượng chia 3 dư k

b[0] = 3
b[1] = 2
b[2] = 3

res = b[1] * b[2] + b[0] * (b[0] - 1) / 2

3 6 9 12
3 6
3 9
3 12
6 9
6 12
9 12

NC2 = n * (n - 1) / 

## Bài 2: Cặp số chia hết cho K

Cho một mảng số nguyên và một số nguyên k, Đếm số cặp số i và j sao cho i < j và a[i] + a[j] chia hết cho k.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên n, k (1 ≤ n ≤ 10^6, 1 ≤ k ≤ 10^6) - số phần tử của mảng và số nguyên k.

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^9).

**Output:**

- Một số nguyên - số cặp số thỏa mãn.

**Ví dụ 1:**

| Input | Output |
|-------|--------|
|4  3<br> 1 2 3 4 | 2 |

**Giải thích:**

Có 2 cặp số thỏa mãn là (1, 2) và (2, 4).

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 4<br> 1 2 3 4 5 | 2 |

**Giải thích:**

Có 2 cặp số thỏa mãn là (1, 3), (3, 5)

K = 5
b[1] * b[4] + b[2] * b[3]

# Phương pháp sinh

## Bài 1: Tìm số nhỏ nhất lớn hơn hoặc bằng N và chia hết cho K

Cho số nguyên N và K, hãy tìm số nhỏ nhất lớn hơn hoặc bằng N và chia hết cho K.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên N, K (1 ≤ N, K ≤ 10^18).

**Output:**

- Một số nguyên - số nhỏ nhất lớn hơn N và chia hết cho K.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 3 | 6 |

**Giải thích:**

Số nhỏ nhất lớn hơn 5 và chia hết cho 3 là 6.

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 201 100 | 300 |


K = 10


K * x >= N
x >= N / K

K = 100
N = 201
x >= 2.01
x = 3

N = 5
K = 3
x >= 1.67
x = 2

## Bài 2: Số chính phương

Cho số nguyên dương N, hãy tìm số chính phương nhỏ nhất lớn hơn hoặc bằng N.

**Số chính phương** là số mà căn bậc 2 của nó là một số nguyên.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^18).

**Output:**

- Một số nguyên - số chính phương nhỏ nhất lớn hơn hoặc bằng N.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 | 9 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 10 | 16 |

x nguyên

x*x >= N
x >= sqrt(N)

## Bài 3: Dãy số chính phương

Cho số nguyên dương N, In ra các số chính phương không vượt quá N theo thứ tự tăng dần.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^14).

**Output:**

- In ra các số chính phương không vượt quá N theo thứ tự tăng dần.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 10 | 1 4 9 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 20 | 1 4 9 16 |

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 100 | 1 4 9 16 25 36 49 64 81 100 |

## Bài 4: Số siêu đối xứng

Số siêu đối xứng là số mà các chữ số trong nó đều giống nhau.

Ví dụ: 111, 222, 333, 55, 99999999, ...

Cho số nguyên dương N, hãy tìm số siêu đối xứng nhỏ nhất lớn hơn hoặc bằng N.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^18).

**Output:**

- Một số nguyên - số siêu đối xứng nhỏ nhất lớn hơn hoặc bằng N.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 54 | 55 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 26 | 33 |

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 782344| 888888 |

genSdx(len, num)

genSdx(4, 5) = 5555

111111
222222
333333
444444
555555
666666
777777
888888
999999

## Bài 5: Dãy số siêu đối xứng

Cho số nguyên dương N, In ra các số siêu đối xứng không vượt quá N theo thứ tự tăng dần.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^18).

**Output:**

- In ra các số siêu đối xứng không vượt quá N theo thứ tự tăng dần.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 89 | 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 434 | 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 99 111 222 333 |

**Ví dụ 3:**

| Input | Output |
|-------|--------|
| 1234| 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 99 111 222 333 444 555 666 777 888 999 1111|


