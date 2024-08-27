# Bài 1: Con thỏ

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1, 2 đơn vị. Tại mỗi vị trí sẽ có một số nguyên mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output:**

- In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 7<br>2 -1 3 -1 -7 8 1 | 13     |

**Giải thích:**

Cách nhảy:<br>Các vị trí: 0 → 2 → 3 → 5 → 6. Tổng số lớn nhất: 2 + 3 -1 + 8 + 1 = 13.

# Bài 2: Dãy con tăng dài nhất

Cho dãy số a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub>. Hãy tìm dãy con tăng dài nhất của dãy số đó (các phần tử không nhất thiết phải liên tiếp nhau).

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>5</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**

- In ra độ dài của dãy con tăng dài nhất.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 10<br>4 6 1 3 2 3 9 7 8 3 |  1 2 3 7 8 |

b[k]: độ dài dãy con tăng dài nhất kết thúc tại chỉ số k.

```
10
4 6 1 3 2 3 9 7 8 3

db[0] = 1
db[1] = 2
db[2] = 1
db[3] = 2
db[4] = 2
db[5] = 3
db[6] = 4
db[7] = 4
db[8] = 5
db[9] = 3

db[0] = 1
db[k] = max(db[j]) + 1 với 0 ≤ j < k và a[k] > a[j]

```
