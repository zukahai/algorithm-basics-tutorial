# Dãy con liên tiếp chẵn hoặc lẻ dài nhất

Cho dãy số **a** gồm **n** số nguyên dương. Hãy tìm ra dãy con liên tiếp có độ dài lớn nhất sao cho dãy con đó chỉ chứa số chẵn hoặc chỉ chứa số lẻ. Nếu có nhiều dãy con có độ dài lớn nhất thì in ra dãy con có chỉ số bắt đầu nhỏ nhất.

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10<sup>6</sup>)

- Dòng thứ hai chứa **n** số nguyên **a<sub>0</sub>, a<sub>1</sub>, . . ., a<sub>n-1</sub>** (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

**Output:**

- Dòng đầu tiên chứa số nguyên **m** là độ dài của dãy con lớn nhất tìm được.

- Dòng thứ hai chứa **m** số nguyên là dãy con lớn nhất tìm được.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 7 <br> 4 2 6 1 3 5 7 | 4 <br> 1 3 5 7 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 2 8 1 3 2 | 2 <br> 2 8 |

# Dãy con liên tiếp là số chính phương chẵn tăng dần dài nhất

Cho dãy số **a** gồm **n** số nguyên dương. Hãy tìm ra dãy con liên tiếp có độ dài lớn nhất sao cho dãy con đó chỉ chứa số chính phương chẵn và dãy con đó tăng dần. Nếu có nhiều dãy con có độ dài lớn nhất thì in ra dãy con có chỉ số bắt đầu nhỏ nhất, nếu không có dãy con nào thì in ra -1.

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10<sup>6</sup>)

- Dòng thứ hai chứa **n** số nguyên **a<sub>0</sub>, a<sub>1</sub>, . . ., a<sub>n-1</sub>** (-10<sup>18</sup> ≤ a<sub>i</sub> ≤ 10<sup>18</sup>)

**Output:**

- Dòng đầu tiên chứa số nguyên **m** là độ dài của dãy con lớn nhất tìm được. Nếu không có dãy con nào thì in ra -1.

- Dòng thứ hai chứa **m** số nguyên là dãy con lớn nhất tìm được.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 7 <br> 1 4 16 100 121 3 9 | 3 <br> 4 16 2 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 6 7 9 | -1 |

# Dãy con số siêu nguyên tố dài nhất

Số siêu nguyên tố là một số nguyên tố và khi lần lượt xóa các chữ số cuối cùng của nó thì các số mới thu được cũng là số nguyên tố. Ví dụ số 2333 là số siêu nguyên tố vì 2333, 233, 23, 2 đều là số nguyên tố.

Cho dãy số **a** gồm **n** số nguyên dương. Hãy tìm ra dãy con liên tiếp có độ dài lớn nhất sao cho dãy con đó chỉ chứa số siêu nguyên tố. Nếu có nhiều dãy con có độ dài lớn nhất thì in ra dãy con có chỉ số bắt đầu nhỏ nhất, nếu không có dãy con nào thì in ra -1.

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10<sup>6</sup>)

- Dòng thứ hai chứa **n** số nguyên **a<sub>0</sub>, a<sub>1</sub>, . . ., a<sub>n-1</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>18</sup>)

**Output:**

- Dòng đầu tiên chứa số nguyên **m** là độ dài của dãy con lớn nhất tìm được. Nếu không có dãy con nào thì in ra -1.

- Dòng thứ hai chứa **m** số nguyên là dãy con lớn nhất tìm được.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 7 <br> 13 2333 2 37 5 17 11| 4 <br> 2333 2 37 5 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 4 6 20 15 | -1 |
