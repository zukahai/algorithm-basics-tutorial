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

# Dãy con độ dài K có nhiều số phân biệt nhất

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài K chứa nhiều số phân biệt nhất.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra số lượng số phân biệt lớn nhất trong dãy con có độ dài K.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 10 4 <br>  1 2 2 2 2 5 4 4 8 -9 | 3 |

**Giải thích:**

Dãy con liên tiếp có độ dài 4 chứa nhiều số phân biệt nhất là 2 5 4 4.

# Dãy con độ dài K tăng dần

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn là đếm số dãy con liên tiếp có độ dài K tăng dần.

Dãy tăng dần là dãy số mà số sau lớn hơn số trước.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra số lượng dãy con có độ dài K tăng dần.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 11 4 <br>  1 2 2 4 5 6 7 1 9 10 12 | 3 |

**Giải thích:**

Có 3 dãy con liên tiếp có độ dài 4 tăng dần là
- 2 4 5 6
- 4 5 6 7
- 1 9 10 12.

# Tất cả dãy con độ dài K gồm các số phân biệt

Cho một dãy số nguyên A gồm N phần tử và một số nguyên K. Nhiệm vụ của bạn kiểm tra xem có phải tất cả dãy con liên tiếp có độ dài K đều chứa các số phân biệt hay không.

**Input:**

- Dòng đầu tiên chứa hai số nguyên N và K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ N),

- Dòng thứ hai chứa N số nguyên A1, A2, ..., AN (0 ≤ |Ai| ≤ 10<sup>9</sup>).

**Output:**

- In ra "YES" nếu tất cả dãy con có độ dài K đều chứa các số phân biệt, ngược lại in ra "NO".

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 10 3 <br>  1 2 3 4 5 6 7 8 9 10 | YES |

# Chuỗi con độ dài K chứa 3 ký tự 'H', 'A', 'I'

Cho một chuỗi S chỉ chứa các ký tự 'H', 'A', 'I'. Nhiệm vụ của bạn là tìm số lượng chuỗi con liên tiếp có độ dài K chứa 3 ký tự 'H', 'A', 'I'.

**Input:**

- Dòng đầu tiên chứa một chuỗi S có độ dài không vượt quá 10<sup>6</sup>,
- Dòng thứ hai chứa một số nguyên K (1 ≤ K ≤ |S|).

**Output:**

- In ra số lượng chuỗi con có độ dài K chứa 3 ký tự 'H', 'A', 'I'.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| HHHAAIIIH <br> 5 | 3 |