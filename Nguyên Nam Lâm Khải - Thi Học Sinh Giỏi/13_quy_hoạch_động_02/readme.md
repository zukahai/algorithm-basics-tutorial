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
| 6 <br> 1 2 -3 -4 -2 3 | -3 -4 -2 |

**Ví dụ 3:**

| Input | Output |
|:--|:--|
| 5 <br> 0 -2 3 -4 5 | -2 |

**Ví dụ 4:**

| Input | Output |
|:--|:--|
| 5 <br> 0 0 0 0 0 | -1 |

# Bài 2: Con thỏ

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1, 2 đơn vị. Tại mỗi vị trí sẽ có một số nguyên mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output:**

- In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

- Dòng thứ 2 in ra các số mà con thỏ nhặt được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 7<br>2 -1 3 -1 -7 8 1 | 13 <br> 2 3 -1 8 1 |

**Giải thích:**

Cách nhảy:<br>Các vị trí: 0 → 2 → 3 → 5 → 6. Tổng số lớn nhất: 2 + 3 -1 + 8 + 1 = 13.