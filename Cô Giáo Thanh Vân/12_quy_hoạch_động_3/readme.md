
```
b[k]: Tổng của dãy con dài nhất kết thúc tại vị trí k

8
2 -3 4 -2 5 2 -7 2

b[0] = 2
b[1] = -1
b[2] = 4
b[3] = 2
b[4] = 7
b[5] = 9
b[6] = 2
b[7] = 4

So sánh a[k] và a[k] + b[k-1]

```

# Bài 1: Con thỏ

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1, 2 hoặc 3 đơn vị. Tại mỗi vị trí sẽ có một số nguyên mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

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

```
b[k]: Tổng điểm lớn nhất khi con thỏ nhảy đến vị trí k.

t[k]: Vị trí trước khi nhảy đến vị trí k.


7
2 -1 3 -1 -7 8 1

b[0] = 2, t[0] = -1 
b[1] = 1, t[1] = 0
b[2] = 5, t[2] = 0
b[3] = 4, t[3] = 2
b[4] = -2, t[4] = 2
b[5] = 13, t[5] = 2
b[6] = 14, t[6] = 5

a[6] -> a[5] -> a[2] -> a[0]






b[0] = a[0]
b[1] = a[0] + a[1]

Nếu b[0] > b[1]:
    b[2] = b[0] + a[2]
Ngược lại:
    b[2] = b[1] + a[2]

Với k >= 3:

m = b[k - 3]
Nếu b[k - 2] > m:
    m = b[k - 2]
Nếu b[k - 1] > m:
    m = b[k - 1]
    
b[k] = m + a[k]

```

# Bài 2: Dãy con tăng dài nhất

Cho dãy số a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub>. Hãy tìm dãy con tăng dài nhất của dãy số đó (các phần tử không nhất thiết phải liên tiếp nhau).

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**

- In ra độ dài của dãy con tăng dài nhất.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 10<br>4 6 1 3 2 3 9 7 8 3 |  1 2 3 7 8 |

```
b[k]: Độ dài lớn nhất của dãy con tăng kết thúc tại vị trí k.

t[k]: Vị trí trước khi đi đến vị trí k.

10
4 6 1 3 2 3 9 7 8 3

b[0] = 1
b[1] = 2
b[2] = 1
b[3] = 2
b[4] = 2
b[5] = 3
b[6] = 4
b[7] = 4
b[8] = 5
b[9] = 3

b[0] = 1
t[0] = -1

Với k >= 1:
    m = 0
    t[k] = -1
    Cho i chạy từ 0 đến k - 1:
        Nếu a[k] > a[i] và b[i] > m:
            m = b[i]
            t[k] = i
    b[k] = m + 1
    


```