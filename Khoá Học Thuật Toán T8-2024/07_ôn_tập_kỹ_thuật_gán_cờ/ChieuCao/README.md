## Bài 4: Chiều cao

Có **n** cây cột được xếp thành 1 hàng ngang, cột thứ **i** có chiều cao là **a<sub>i</sub>**. Để đảm tính thẩm mỹ, chiều cao các cột cạnh nhau không chênh lệch nhau quá 2 đơn vị. Hãy kiểm tra xem có thể cắt bớt một số cột để đảm bảo điều kiện trên hay không.

In ra "YES" nếu có thể cắt bớt, ngược lại in ra "NO".

**Đầu vào:**

- Số nguyên **n** (1 ≤ n ≤ 10<sup>5</sup>).

- **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**

- In ra "YES" nếu có thể cắt bớt, ngược lại in ra "NO".

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 4 6 | YES |

**Giải thích:**

- Chiều cao của các cột cạnh nhau không chênh lệch nhau quá 2 đơn vị.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 4 7 | NO |

**Giải thích:**

- Chiều cao của 2 cột cuối cùng chênh lệch nhau 3 đơn vị.