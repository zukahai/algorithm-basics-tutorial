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

# Tiền lương

Một công ty trả tiền lương cho nhân viên như sau:
- Ngày đầu tiên được trả 1 đồng.
- Từ ngày thứ 2 trở đi, mỗi ngày được trả số tiền gấp đôi so với ngày trước đó.

Hãy tính số tiền lương mà một nhân viên nhận được sau n ngày. Kết quả có thể rất lớn nên bạn cần in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10<sup>5</sup>) — số lượng test.
- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

**Output:**

- Với mỗi test, in ra một số nguyên — số tiền lương mà nhân viên nhận được sau n ngày.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 <br> 2 <br> 3 <br> 5 | 1 <br> 2 <br> 4 <br> 16 |

# Giá trị tăng trưởng

Bạn có số tiền ban đầu là **a** và bạn muốn đầu tư vào một ngân hàng. Ngân hàng này có quy luật tính lãi rất đăc biệt:
- Ở mỗi ngày, số tiền của bạn sẽ được tăng lên **x**, trong đó **x** là chữ số cuối cùng của số tiền hiện có.

Ví dụ, nếu số tiền hiện có là 123, thì số tiền sau một ngày sẽ là 123 + 3 = 126, ngày tiếp theo sẽ là 126 + 6 = 132, ...

Hãy tính số tiền mà bạn có được sau **n** ngày. Kết quả có thể rất lớn nên bạn cần in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên T và a (1 ≤ T ≤ 10<sup>5</sup>, 1 ≤ a ≤ 10<sup>6</sup>) — số lượng test và số tiền ban đầu.

- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>) — số ngày bạn muốn tính.

**Output:**

- Với mỗi test, in ra một số nguyên — số tiền mà bạn có được sau n ngày.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 123 <br> 1 <br> 2 <br> 3 <br> 5 | 126 <br> 132 <br> 134 <br> 146 |


# Giá trị tăng trưởng 2

Bạn có số tiền ban đầu là **a** và bạn muốn đầu tư vào một ngân hàng. Ngân hàng này có quy luật tính lãi rất đăc biệt:
- Ở mỗi ngày, số tiền của bạn sẽ được tăng lên **x**, trong đó **x** là chữ số **lớn nhất** của số tiền hiện có.

Ví dụ, nếu số tiền hiện có là 31, thì số tiền sau một ngày sẽ là 31 + 3 = 34, ngày tiếp theo sẽ là 34 + 4 = 38, ...

Hãy tính số tiền mà bạn có được sau **n** ngày. Kết quả có thể rất lớn nên bạn cần in ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên T và a (1 ≤ T ≤ 10<sup>5</sup>, 1 ≤ a ≤ 10<sup>6</sup>) — số lượng test và số tiền ban đầu.

- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>) — số ngày bạn muốn tính.

**Output:**

- Với mỗi test, in ra một số nguyên — số tiền mà bạn có được sau n ngày.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 5 31 <br> 1 <br> 2 <br> 3 <br> 4 <br> 5 | 34 <br> 38 <br> 46 <br> 52 <br> 57 |

# Giá trị nhỏ nhất QHD

Cho một dãy số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub>. Tìm số nhỏ nhất trong đoạn từ a<sub>0</sub> đến a<sub>k</sub> (0 ≤ k < n).

**Input:**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>) — số lượng phần tử của dãy.
- Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).
- Dòng thứ ba chứa số nguyên q (1 ≤ q ≤ 10<sup>5</sup>) — số lượng truy vấn.
- q dòng tiếp theo, mỗi dòng chứa số nguyên k (0 ≤ k < n) — chỉ số cuối cùng của đoạn cần xét.

**Output:**

- Với mỗi truy vấn, in ra số nhỏ nhất trong đoạn từ a<sub>0</sub> đến a<sub>k</sub>.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 5 <br> 2 3 1 4 5 <br> 4 <br> 0 <br> 1 <br> 2 <br> 3 | 2 <br> 2 <br> 1 <br> 1|

# Tổng chữ số

Một chuỗi **S** được tạo ra bằng cách viết các số nguyên từ 1 đến n liên tiếp nhau. Ví dụ, với n = 5, chuỗi S sẽ là "12345". Hãy tính tổng giá trị của chuỗi S khi biết n.

**Input:**

- Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10<sup>5</sup>) — số lượng test.

- T dòng tiếp theo, mỗi dòng chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

**Output:**

- Với mỗi test, in ra một số nguyên — tổng giá trị của chuỗi S.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 <br> 2 <br> 3 <br> 11 | 1 <br> 3 <br> 6 <br> 48 |

# Tổng chữ số (Tiếp theo)

Một chuỗi **S** được tạo ra bằng cách viết các số nguyên từ **a** đến **b** liên tiếp nhau. Ví dụ, với a = 2, b = 5, chuỗi S sẽ là "2345". Hãy tính tổng giá trị của chuỗi S khi biết a và b

**Input:**

- Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10<sup>5</sup>) — số lượng test.

- T dòng tiếp theo, mỗi dòng chứa 2 số nguyên a, b (1 ≤ a ≤ b ≤ 10<sup>6</sup>).

**Output:**

- Với mỗi test, in ra một số nguyên — tổng giá trị của chuỗi S.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 1 <br> 2 3 <br> 3 3 <br> 10 13 | 1 <br> 5 <br> 3 <br> 10 |