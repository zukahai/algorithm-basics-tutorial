# Bài 1: Dãy con đồng chất

Cho dãy số nguyên a1, a2, ..., an. Một dãy con liên tiếp của dãy số đã cho là một dãy số ai, ai+1, ..., aj với 1 ≤ i ≤ j ≤ n. Một dãy con đồng chất của dãy số đã cho là một dãy con liên tiếp mà tất cả các phần tử trong dãy con đó đều là số âm hoặc đều là số dương.

Hãy tìm dãy con đồng chất dài nhất của dãy số đã cho.
Nếu có nhiều đáp án, hãy chọn dãy con đồng chất có chỉ số bắt đầu nhỏ nhất. Nếu không có dãy con đồng chất nào, hãy in ra một số nguyên -1.

**Dữ liệu:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^6),

- Dòng thứ 2 chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).

**Kết quả:**

- In ra dãy con liên tiếp đồng chất dài nhất của dãy số đã cho.

**Ví dụ 1:**

| Input | Output |
|:--|:--|
| 10 <br> 1 -2 3 4 5 1 0 -8 9 -10 | 3 4 5 1 |

**Ví dụ 2:**

| Input | Output |
|:--|:--|
| 6 <br> 1 2 -3 -4 -2 3 | 1 2 -3 -4 -2 3 |

**Ví dụ 3:**

| Input | Output |
|:--|:--|
| 5 <br> 0 -2 3 -4 5 | -2 |

**Ví dụ 4:**

| Input | Output |
|:--|:--|
| 5 <br> 0 0 0 0 0 | -1 |