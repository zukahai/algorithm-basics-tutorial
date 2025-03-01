# Dãy con có độ dài K có tổng lớn nhất

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài K có tổng lớn nhất.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra tổng lớn nhất của dãy con có độ dài K.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 10 3 <br> 2 3 4 2 5 6 -2 8 -9 1 | 13 |

**Giải thích:**

Dãy con liên tiếp có độ dài 3 có tổng lớn nhất là 2 + 5 + 6 = 13.

**Subtask:**

- Subtask 1 (50%): 1 ≤ N ≤ 10<sup>3</sup>.
- Subtask 2 (50%): 1 ≤ N ≤ 10<sup>6</sup>.

# Dãy con độ dài K chứa nhiều số chẵn nhất

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài K chứa nhiều số chẵn nhất.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra số lượng số chẵn lớn nhất trong dãy con có độ dài K.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 10 4 <br>  1 2 3 4 2 5 6 -2 8 -9 | 3 |

**Giải thích:**

Dãy con liên tiếp có độ dài 3 chứa nhiều số chẵn nhất là 2 3 4 2.

**Subtask:**

- Subtask 1 (50%): 1 ≤ N ≤ 10<sup>3</sup>.
- Subtask 2 (50%): 1 ≤ N ≤ 10<sup>6</sup>.

# Số lượng dãy con có độ dài K chứa toàn số chẵn

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn là tìm số lượng dãy con liên tiếp có độ dài K chứa toàn số chẵn.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra số lượng dãy con có độ dài K chứa toàn số chẵn.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 10 3 <br>  1 2 6 4 0 5 6 -2 8 -9 | 3 |

**Giải thích:**

Có 2 dãy con liên tiếp có độ dài 3 chứa toàn số chẵn là 
- 2 6 4
- 6 4 0
- 6 -2 8.

**Subtask:**

- Subtask 1 (50%): 1 ≤ N ≤ 10<sup>3</sup>.
- Subtask 2 (50%): 1 ≤ N ≤ 10<sup>6</sup>.