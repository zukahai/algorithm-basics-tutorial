## Bài 1: Số cặp chia hết cho 3

Cho một dãy số gồm N số tự nhiên. Đếm số cặp số (a, b) thỏa mãn a + b chia hết cho 3.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>)

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

**Output:**

- In ra số lượng cặp thoả mãn.

**Ví dụ:**

| Input | Output |
|-------|--------|
| 5<br>1 2 3 4 5 | 4 |

**Giải thích:**

Có 2 cặp số thoả mãn là (1, 2), (1, 5), (2, 4), (4, 5).


```
8
3 6 9 12    1 4     2 5 8

mp[k]: Số lượng số chia 3 dư k

mp[0] = 4
1 + 2 + 3 + ...+ (mp[0] - 1)
= mp[0] * (mp[0] - 1) / 2


mp[1] = 2
mp[2] = 3

res = mp[0] * (mp[0] - 1) / 2 + mp[1] * mp[2]

```

## Bài 2: Tổng từ 1 đến N

Cho số nguyên dương N. Tính tổng các số từ 1 đến N.<br>
Kết quả có thể rất lớn nên in ra kết quả dưới dạng modulo 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>18</sup>)

**Output:**

- In ra tổng các số từ 1 đến N theo modulo 10<sup>9</sup> + 7.

**Ví dụ:**

| Input | Output |
|-------|--------|
| 5     | 15     |

**Giải thích:**

1 + 2 + 3 + 4 + 5 = 15.

```
1 + 2 + 3 + ... + N = N * (N + 1) / 2

N * (N + 1) / 2
```

## Bài 3: A mũ B

Cho số nguyên dương A và B. Tính A<sup>B</sup>. Kết quả có thể rất lớn nên in ra kết quả dưới dạng modulo 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên A (1 ≤ A ≤ 10<sup>18</sup>)

- Dòng thứ 2 chứa số nguyên B (1 ≤ B ≤ 10<sup>18</sup>)

**Output:**

- In ra A<sup>B</sup> theo modulo 10<sup>9</sup> + 7.

**Ví dụ:**

| Input | Output |
|-------|--------|
| 2<br>3 | 8      |

**Giải thích:**

2<sup>3</sup> = 8.

----------------------------
a<sup>2k</sup> = (a<sup>2</sup>)<sup>k</sup> = (a * a)<sup>k</sup>

a và b
a %= mod
res = 1
if b chẵn:
    a = a * a % mod
    b /= 2
else:
    b -= 1
    res *= a % mod
    res %= mod

2^7| a = 2, b = 7, res = 1
2^6| a = 2, b = 6, res = 2
4^3| a = 4, b = 3, res = 2
4^2| a = 4, b = 2, res = 2 * 4 = 8
16^1| a = 16, b = 1, res = 8
16 * 16^0| a = 16, b = 0, res = 8 * 16 = 128

