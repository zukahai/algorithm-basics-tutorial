# Số chuỗi con khác nhau

Cho một xâu ký tự **s**. Bạn có thể tách xâu **s** thành các xâu con. Hãy tìm cách tách sao cho số lượng xâu con khác nhau là lớn nhất.

**Input**:

- Một chuỗi S có độ dài không vượt quá 16.

**Output**:

- Một số nguyên là số lượng xâu con khác nhau lớn nhất.

**Ví dụ**:

| Input | Output |
|:------|:-------|
| abab  | 3      |

Một cách tích đó là "a", "b", "ab".

| Input | Output |
|:------|:-------|
| aaaaa | 2      |

# Phân tách dãy con

Cho một dãy số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>**. Hãy tìm cách phân tách dãy số thành nhiều nhất các dãy con sao cho tổng các phần tử trong mỗi dãy con là bằng nhau.

**Input**:

- Dòng đầu tiên chứa một số nguyên **n** (1 ≤ **n** ≤ 10<sup>5</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Output**:

- In ra một số nguyên là số lượng dãy con.

**Ví dụ**:

| Input | Output |
|:------|:-------|
| 5     <br> 1 2 3 4 -1 | 3 |

Cách phân tách là: [1, 2], [3], [4, -1].

| Input | Output |
|:------|:-------|
| 3     <br> 1 2 7 | 1 |


