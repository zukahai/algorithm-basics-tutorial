# Bài 1: A mũ B

Nhập vào 2 số tự nhiên A và B. Tính A mũ B. Kết quả có thể rất lớn nên chỉ cần in ra phần dư khi chia cho 10<sup>9</sup> + 7.

**Dữ liệu:**

- Một dòng duy nhất chứa 2 số nguyên A và B (0 ≤ A, B ≤ 10<sup>18</sup> (A + B != 0) ). 

**Kết quả:**

- Một dòng duy nhất chứa một số nguyên là phần dư khi A mũ B chia cho 10<sup>9</sup> + 7.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 2 3    | 8      |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 3 4    | 81     |

# Bài 2: Tính toán biểu thức

Tính toán giá trị của biểu thức sau: (a * b) / c

Kết quả có thể rất lớn, nên chỉ cần in ra phần dư khi chia cho 10<sup>9</sup> + 7

**Đầu vào**

- Dòng thứ nhất chứa một số nguyên dương **a** (1 ≤ **a** ≤ 10<sup>18</sup>)
- Dòng thứ hai chứa một số nguyên dương **b** (1 ≤ **b** ≤ 10<sup>18</sup>)
- Dòng thứ ba chứa một số nguyên dương **c** (1 ≤ **c** ≤ 10<sup>18</sup>)
Dầu vào đảm bảo \(a.b\) chia hết cho \(c\)

**Đầu ra**

In ra một số nguyên duy nhất là phần dư khi chia giá trị của biểu thức cho 10<sup>9</sup> + 7

**Ví dụ**

**Ví dụ 1**

|Đầu vào|Đầu ra|
|:--|:--|
|3 <br> 4<br> 2|6|

**Ví dụ 2**

|Đầu vào|Đầu ra|
|:--|:--|
|1000000000000000000 <br> 1000000000000000000 <br> 1000000000000000000|49|

# Bài 3: Sơn ghế ngồi

Trên công viên vừa chế tạo **N** ghế ngồi trên 1 hàng dài. Các ghế ngồi được đánh số từ 1 đến **N**. Có đúng N thùng sơn trong đó có **X** thùng sơn màu đỏ và **Y** thùng sơn màu xanh. Công việc sơn ghế ngồi được thực hiện bằng cách sơn các ghế ngồi từ 1 đến **N** theo thứ tự từ trái qua phải. Mỗi ghế được sớn màu đỏ hoặc màu xanh. Mỗi thùng sơn chỉ đủ sơn một màu.

Hãy xác định tất cả cách sơn. Kết quả có thể rất lớn, hãy in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Dữ liệu:**

- Một dòng chứa 3 số nguyên **X**, **Y** (1 ≤ **N** ≤ 10<sup>6</sup>, 0 ≤ **X**, **Y** ≤ 10<sup>5</sup>).

**Kết quả:**

- Một số nguyên - số cách sơn ghế ngồi. Kết quả có thể rất lớn, hãy in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 2 1 | 3 |

**Giải thích:** Có 3 cách sơn đó là:
- DDX (đỏ, đỏ, xanh)
- DXD (đỏ, xanh, đỏ)
- XDD (xanh, đỏ, đỏ)

| Input | Output |
| :--- | :--- |
| 3 2 | 10 |

**Giải thích:** Có 10 cách sơn.

- DDDXX (đỏ, đỏ, đỏ, xanh, xanh)
- DDXDXX (đỏ, đỏ, xanh, đỏ, xanh)
- DDXDX (đỏ, đỏ, xanh, đỏ, xanh)
- DXDDXX (đỏ, xanh, đỏ, đỏ, xanh)
- DXDXDX (đỏ, xanh, đỏ, xanh, đỏ)
- DXDXXD (đỏ, xanh, đỏ, xanh, đỏ)
- XDDXDX (xanh, đỏ, đỏ, xanh, đỏ)
- XDDXXD (xanh, đỏ, đỏ, xanh, đỏ)
- XDXXDD (xanh, đỏ, xanh, đỏ, đỏ)
- XXDDD (xanh, xanh, đỏ, đỏ, đỏ)

