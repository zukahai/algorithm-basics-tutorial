# Bài 1: Con thỏ

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1 hoặc 2 đơn vị. Tại mỗi vị trí sẽ có một số nguyên dương mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

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

Cách nhảy:<br>Các vị trị: 0 → 2 → 3 → 5 → 6. Tổng số lớn nhất: 2 + 3 -1 + 8 + 1 = 13.

```
b[k]: Tổng điểm lớn nhất khi nhảy đến vị trí k.

7
2 -1 3 -1 -7 8 1

b[0] = 2
b[1] = 1
b[2] = 5
b[3] = 4
b[4] = -2
b[5] = 12
b[6] = 13

------------------------------
b[0] = a[0]
b[1] = a[0] + a[1]

k >= 2
Nếu b[k - 1] > b[k - 2]:
    b[k] = b[k - 1] + a[k]
Ngược lại:
    b[k] = b[k - 2] + a[k]

```

# Bài 2: Dãy con tăng dài nhất

Cho dãy số A gồm N phần tử. Hãy tìm dãy con tăng dài nhất của dãy A. In ra độ dài của dãy con tăng dài nhất. (Dãy con không nhất thiết phải liên tục).

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 5 x 10<sup>4</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output:**

- In ra độ dài của dãy con tăng dài nhất.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 6<br>1 3 5 4 5 2 | 4     |

**Giải thích:**

Dãy con tăng dài nhất: 1 3 4 5

```
b[k]: Độ dài dãy con tăng dài nhất kết thúc tại vị trí k.

6
1 3 5 4 5 2

b[1] = 1
b[2] = 2
b[3] = 3
b[4] = 3
b[5] = 4
b[6] = 2

for (int i = 1; i <= N; i++) {
    b[i] = 1;
    for (int j = 1; j < i; j++) {
        if (a[j] < a[i]) {
            if (b[i] < b[j] + 1) {
                b[i] = b[j] + 1;
            }
        }
    }
}

```

