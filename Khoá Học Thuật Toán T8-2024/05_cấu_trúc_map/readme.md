## Bài 1: Tổng bằng S

Cho một mảng số nguyên **a** gồm **n** phần tử. Hãy kiểm tra xem có tồn tại cặp chỉ số **i, j** (i != j)  sao cho **a[i] + a[j] = S** hay không. Nếu tồn tại cặp chỉ số thì trả về **YES**, ngược lại trả về **NO**.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** và **S** (1 ≤ n ≤ 10^6, -10^18 ≤ S ≤ 10^18)
- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10^18 ≤ a[i] ≤ 10^18)

**Output**:

- In ra **YES** hoặc **NO**

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 6 <br> 1 2 3 4 5 | YES |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 5)** hoặc **(2, 4)**


**Ví dụ 2**:


| Input | Output |
|:-------|:--------|
| 5 8 <br> 1 2 3 4 6 | NO |


## Bài 2: Tổng bằng S (phần 2)

Cho một mảng số nguyên **a** gồm **n** phần tử. Đếm xem có bao nhiêu cặp chỉ số **i, j** (i < j)  sao cho **a[i] + a[j] = S**.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** và **S** (1 ≤ n ≤ 10^6, -10^18 ≤ S ≤ 10^18)

- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10^18 ≤ a[i] ≤ 10^18)

**Output**:

- In ra số lượng cặp chỉ số thỏa mã

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 6 <br> 1 2 3 4 5 | 2 |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 5)** hoặc **(2, 4)**

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 4 <br> 2 2 2 1 3 | 4 |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5 6 <br> 1 2 3 4 7 | 0 |


## Bài 3: Số cặp chia hết cho 3

Cho một mảng số nguyên **a** gồm **n** phần tử. Hãy đếm số cặp chỉ số **i, j** (i < j) sao cho **a[i] + a[j]** chia hết cho 3.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10^6)

- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10<sup>18</sup> ≤ a[i] ≤ 10<sup>18</sup>)

**Output**:

- In ra số lượng cặp chỉ số thỏa mã

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 3 |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 3)**, **(1, 5) và (2, 4)**

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 6 | 2 |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 4 7 10 13 | 0 |


