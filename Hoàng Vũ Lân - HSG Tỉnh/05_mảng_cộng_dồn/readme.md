## Bài 1: Dãy con có tổng bằng 0

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

## Bài 2: Dãy con chia hết cho k

Cho dãy số nguyên a1, a2, ..., an. Hãy đếm số lượng dãy con liên tiếp của dãy đã cho sao cho tổng các phần tử trong dãy con này chia hết cho k.

**Input**

Dòng đầu tiên chứa 2 số nguyên n và k (1 ≤ n ≤ 10^5, 1 ≤ k ≤ 10^9).

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^9).

**Output**

In ra một số nguyên duy nhất là số lượng dãy con thỏa mãn

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 5 3 <br> 1 1 2 3 2 | 4 |

## Bài 3: Dãy con bằng 0 dài nhất

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
