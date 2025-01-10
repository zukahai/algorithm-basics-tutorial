## Bài 1: Biến đổi dãy

Cho một dãy a gồm N số nguyên.

Mỗi số trong dãy có thể biến đổi thành 1 số nguyên lớn hơn nó.

Kiểm tra xem có thể biến đổi dãy a thành dãy b hay không?

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^5).
- Dòng thứ 2 chứa N số nguyên a1, a2, ..., aN (1 ≤ ai ≤ 10^9).
- Dòng thứ 3 chứa N số nguyên b1, b2, ..., bN (1 ≤ bi ≤ 10^9).

**Đầu ra**:

- In ra "YES" nếu có thể biến đổi dãy a thành dãy b, ngược lại in ra "NO".

**Ví dụ**:

| Input | Output |
|:---|:---|
| 3 <br> 2 2 3 <br> 2 5 4 | YES |

| Input | Output |
|:---|:---|
| 3 <br> 2 2 3 <br> 3 1 4 | NO |

| Input | Output |
|:---|:---|
| 3 <br> 1 2 3 <br> 3 2 1 | NO |