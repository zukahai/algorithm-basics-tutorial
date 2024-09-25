# Số fibonacci thứ n

Dãy số Fibonacci là dãy số bắt đầu bằng hai phần tử 1 và 1, các phần tử sau đó được tạo ra bằng cách cộng hai phần tử trước đó. Ví dụ: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Hãy tính số Fibonacci thứ n. Kết quả có thể rất lớn nên bạn cần in ra phần dư của kết quả khi chia cho 10^9 + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10<sup>5</sup>) — số lượng test.
- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

**Output:**

- Với mỗi test, in ra một số nguyên — số Fibonacci thứ n.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 <br> 2 <br> 3 <br> 5 | 1 <br> 1 <br> 2 <br> 5 |

**Giải thích:**

- Test 1: Số Fibonacci thứ 1 là 1.
- Test 2: Số Fibonacci thứ 2 là 1.
- Test 3: Số Fibonacci thứ 3 là 2.
- Test 4: Số Fibonacci thứ 5 là 5.

# Tính giai thừa

Hãy tính giai thừa của một số nguyên dương n. Kết quả có thể rất lớn nên bạn cần in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

```
n! = 1 * 2 * 3 * ... * n
```

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10<sup>5</sup>) — số lượng test.
- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

**Đầu ra:**

- Với mỗi test, in ra một số nguyên — giai thừa của n.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 <br> 2 <br> 3 <br> 5 | 1 <br> 2 <br> 6 <br> 120 |

**Giải thích:**

- Test 1: 1! = 1.
- Test 2: 2! = 2.
- Test 3: 3! = 6.
- Test 4: 5! = 120.
