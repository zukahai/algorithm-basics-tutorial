## Bài 1: Chia K dãy con

Cho một dãy số a gồm n phần tử và một số nguyên k.

Hãy chia dãy số a thành k dãy con sao cho tổng lớn nhất của các dãy con là nhỏ nhất.

**Đầu vào**:

- Dòng đầu tiên chứa hai số nguyên n và k (1 ≤ n ≤ 10^5, 1 ≤ k ≤ n).

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^9).

**Đầu ra**:

- Tổng của dãy con có tổng lớn nhất nhỏ nhất.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 5 3 <br> 2 1 5 4 2 | 6 |

**Giải thích**:

- Chia dãy số thành 3 dãy con: [2, 1], [5], [4, 2]. Tổng lớn nhất của các dãy con là 6.





## Bài 2: Dãy số liên tiếp

Cho một dãy số a gồm n phần tử.
Mỗi lần biến đổi, bạn có quyền tăng một phần tử bất kỳ của dãy lên 1 đơn vị.
Hãy tìm số lần biến đổi ít nhất để dãy số a trở thành một dãy số nguyên liên tiếp.

**Dãy số nguyên liên tiếp** là dãy số mà mỗi phần tử sau phần tử trước nó đúng 1 đơn vị.

Ví dụ:

- Dãy số [1, 2, 3, 4, 5] là dãy số nguyên liên tiếp.

- Dãy số [1, 2, 3, 5, 6] không phải là dãy số nguyên liên tiếp.

**Đầu vào**:

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^5).

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^9).

**Đầu ra**:

- Số lần biến đổi ít nhất để dãy số a trở thành một dãy số nguyên liên tiếp.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 4 <br> 1 3 3 5 | 2 |

**Giải thích**:

- Biến đổi phần tử thứ 1 từ 1 thành 2. Biến đổi phần tử thứ 3 từ 3 thành 4. Dãy số trở thành [2, 3, 4, 5].

