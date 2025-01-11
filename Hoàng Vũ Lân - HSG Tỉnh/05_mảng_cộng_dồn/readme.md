# Dãy con có tổng bằng 0

Cho dãy số nguyên a1, a2, ..., an. Hãy đếm số lượng dãy con liên tiếp của dãy đã cho sao cho tổng các phần tử trong dãy con này bằng 0.

**Input**

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^5).

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9).

**Output**

In ra một số nguyên duy nhất là số lượng dãy con thỏa mã

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 8 <br> 1 -2 3 -1 2 -1 -3  | 3 |

**Giải thích**

Có 3 dãy con:
- Dãy con bắt đầu từ vị trí 2 và kết thúc tại vị trí 4: -2 + 3 - 1 = 0
- Dãy con bắt đầu từ vị trí 3 và kết thúc tại vị trí 8: 3 - 1 + 2 - 1 - 3 = 0
- Dãy con bắt đầu từ vị trí 4 và kết thúc tại vị trí 6: -1 + 2 - 1 = 0

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 7 <br> 1 -2 2 -3 3 4 -4 | 6 |