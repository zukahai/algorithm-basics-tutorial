## Bài 1: Đếm số dãy con bằng 0

Cho dãy số nguyên a1, a2, ..., an. Hãy đếm số lượng dãy con liên tiếp của dãy đã cho sao cho tổng các phần tử trong dãy con này bằng 0.

**Input: **
- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^5).
- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).

**Output:**
- In ra một số nguyên duy nhất là số lượng dãy con thỏa mãn

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 9 <br> 2 1 -1 3 -2 -1 7 2 -2 | 4 |

## Bài 2: Dãy con bằng 0 dài nhất

Cho dãy số nguyên a1, a2, ..., an. Hãy tìm dãy con liên tiếp dài nhất của dãy đã cho sao cho tổng các phần tử trong dãy con này bằng 0.

**Input**

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^5).

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).

**Output**

In ra 2 số nguyên l và r là chỉ số bắt đầu và kết thúc của dãy con cần tìm. Nếu có nhiều cách chọn thì in ra cách chọn có l nhỏ nhất. Nếu không có dãy con nào thỏa mãn thì in ra -1

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 8 <br> 1 -2 3 -1 2 -2 -3  | 2 6 |

| Input | Output |
|:-------|:--------|
| 3 <br> 1 2 3 | -1 |


