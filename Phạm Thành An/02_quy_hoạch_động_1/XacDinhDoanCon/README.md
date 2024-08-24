# Xác định dãy con

Cho trước một dãy số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (1 ≤ n ≤ 10<sup>5</sup>, 0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

- Cho trước 2 số nguyên **s**, **e**. Hãy xác định dãy con liên tiếp từ chỉ số **s** đến chỉ số **e**.
- Cho trước 2 số nguyên **s**, **l**. Hãy xác định dãy con liên tiếp có độ dài **l** bắt đầu từ chỉ số **s**.
- Cho trước 2 số nguyên **e**, **l**. Hãy xác định dãy con liên tiếp có độ dài **l** kết thúc tại chỉ số **e**.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10<sup>5</sup>).
- Dòng thứ hai chứa **n** số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).
- Dòng thứ ba chứa 2 số nguyên **s**, **e**.
- Dòng thứ tư chứa 2 số nguyên **s2**, **l2**.
- Dòng thứ năm chứa 2 số nguyên **e3**, **l3**.

**Đầu ra**:

- Dòng đầu tiên chứa dãy con từ chỉ số **s** đến chỉ số **e**.
- Dòng thứ hai chứa dãy con độ dài **l2** bắt đầu từ chỉ số **s2**.
- Dòng thứ ba chứa dãy con độ dài **l3** kết thúc tại chỉ số **e3**.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-|:-|
| 5 <br> 2 3 4 5 6 <br> 1 3 <br> 3 2 <br> 4 3 | 3 4 5 <br> 5 6 <br>4 5 6 |

**Giải thích**:

- Dãy con từ chỉ số 1 đến chỉ số 3 là 3 4 5.
- Dãy con độ dài 2 bắt đầu từ chỉ số 3 là 5 6.
- Dãy con độ dài 3 kết thúc tại chỉ số 4 là 4 5 6.

**Ví dụ 2**:

| Input | Output |
|:-|:-|
| 5 <br> 2 3 4 5 6 <br> 0 4 <br> 3 1<br> 4 4| 2 3 4 5 6 <br> 5 <br> 3 4 5 6 |