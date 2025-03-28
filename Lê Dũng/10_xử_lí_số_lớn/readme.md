# Bài 1: Dãy ghế công viên

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

