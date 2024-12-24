## Bài 1: Đường đi

Cho **n** thành phố và **m** con đường hai chiều giữa các thành phố. Mỗi còn đường gồm 2 số **u** và **v** (1 ≤ **u**, **v** ≤ **n, u** ≠ **v**) cho biết có con đường nối giữa thành phố **u** và thành phố **v**.

Hãy kiểm tra xem có thể đi từ thành phố **a** đến thành phố **b** không.
Nếu có in ra "YES", ngược lại in ra "NO".

**Dữ liệu**:

- Dòng đầu tiên chứa 2 số nguyên **n** và **m** (1 ≤ **n**, **m** ≤ 1000).
- **m** dòng tiếp theo, mỗi dòng chứa 2 số nguyên **u** và **v** (1 ≤ **u**, **v** ≤ **n, u** ≠ **v**).
- Dòng cuối cùng chứa 2 số nguyên **a** và **b** (1 ≤ **a**, **b** ≤ **n, a** ≠ **b**).

**Kết quả**: In ra "YES" hoặc "NO".

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 5 3 <br> 5 1 <br> 4 1 <br> 2 3 <br> 4 5   | YES    |

![alt text](image.png)

## Bài 2: Du lịch

Cho **n** thành phố và **m** con đường hai chiều giữa các thành phố. Mỗi con đường gồm 2 số **u** và **v** (1 ≤ **u**, **v** ≤ **n, u** ≠ **v**) cho biết có con đường bộ nối giữa thành phố **u** và thành phố **v**.

Đếm xem có bao nhiêu thành phố có thể đi đến từ thành phố **a**.

**Dữ liệu**:

- Dòng đầu tiên chứa 2 số nguyên **n** và **m** (1 ≤ **n**, **m** ≤ 1000).

- **m** dòng tiếp theo, mỗi dòng chứa 2 số nguyên **u** và **v** (1 ≤ **u**, **v** ≤ **n, u** ≠ **v**).

- Dòng cuối cùng chứa số nguyên **a** (1 ≤ **a** ≤ **n**).

**Kết quả**: In ra số lượng thành phố có thể đi đến từ thành phố **a**.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 5 3 <br> 5 1 <br> 4 1 <br> 2 3 <br> 4   | 3    |

![alt text](image.png)