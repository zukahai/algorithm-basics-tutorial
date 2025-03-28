Cho dãy a gồm N phần tử, đếm số lượng dãy con có tổng chia hết cho K.

**Dữ liệu**:
- Dòng đầu tiên chứa 2 số nguyên N, K (1 ≤ N ≤ 10^5, 1 ≤ K ≤ 10^9)
- Dòng thứ 2 chứa N số nguyên a1, a2, ..., aN (-10^9 ≤ ai ≤ 10^9)

**Kết quả**: In ra số lượng dãy con có tổng chia hết cho K.

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 3<br>1 2 3 4 5 | 7 |

7 dãy là
- 1 2 3
- 1 2 3 4 5
- 2 3 4
- 3
- 3 4 5
- 4 5

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 2<br>2 4 6 8 10 | 15 |

## Bài 2:
Cho dãy a gồm N phần tử, đếm số lượng dãy con có số lượng số chẵn bằng số lượng số lẻ.

**Dữ liệu**:

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^5)
- Dòng thứ 2 chứa N số nguyên a1, a2, ..., aN (-10^9 ≤ ai ≤ 10^9)

**Kết quả**: In ra số lượng dãy con có số lượng số chẵn bằng số lượng số lẻ.

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5<br>1 2 4 1 5 | 5 |

Có 5 dãy con là
- 1 2
- 4 1
- 1 5
- 1 2 4 1
- 2 4 1 5

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5<br>1 1 1 1 1 | 0 |