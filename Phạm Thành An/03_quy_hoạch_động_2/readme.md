## Bài 1: Dãy con có tổng lớn nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp có tổng lớn nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp có tổng lớn nhất.<br>

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6<br> 1 -2 3 -1 2 -6 | 3 -1 2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 4 -2 3 -1 -2 | 4 -2 3 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 <br> -1 -3 -5 | -1 |

dp[k]: Dãy con liên tiếp có tổng lớn nhất kết thúc tại vị trí k

```

6
1 -2 3 -1 2 -6

dp[0] = 1
dp[1] = -1
dp[2] = 3
dp[3] = 2
dp[4] = 4
dp[5] = -2


dp[k] = a[k]
dp[k] = dp[k - 1] + a[k]

dp[0] = a[0]
Nếu dp[k - 1] > 0
    dp[k] = dp[k - 1] + a[k]
ngược lại
    dp[k] = a[k]

```

# Bài 4: Con thỏ

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