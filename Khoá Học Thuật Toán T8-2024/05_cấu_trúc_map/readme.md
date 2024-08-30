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
|-------|--------|
| 5 6 <br> 1 2 3 4 5 | YES |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 5)** hoặc **(2, 4)**


**Ví dụ 2**:


| Input | Output |
|-------|--------|
| 5 6 <br> 1 2 3 4 6 | NO |


