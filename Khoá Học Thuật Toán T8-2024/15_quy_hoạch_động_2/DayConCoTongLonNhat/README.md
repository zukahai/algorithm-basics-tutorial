## Dãy con có tổng lớn nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp có tổng lớn nhất. Nếu có nhiều dãy thì chọn dãy có xuất hiện sớm nhất (tức là dãy có chỉ số bắt đầu nhỏ nhất).<br>

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp có tổng lớn nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|:-------|:--------|
| 6<br> 1 -2 3 -1 2 -6 | 3 -1 2 |

#### Ví dụ 2

| Input | Output |
|:-------|:--------|
| 5<br> 4 -2 3 -1 -2 | 4 -2 3 |

#### Ví dụ 3

| Input | Output |
|:-------|:--------|
| 3 <br> -1 -3 -5 | -1 |

### Subtest

Để tránh tốn bộ nhớ của hệ thống, subtest sẽ như sau:

- **96%** số test rất nhỏ
- **4%** số test có giới hạn như trong đề bài