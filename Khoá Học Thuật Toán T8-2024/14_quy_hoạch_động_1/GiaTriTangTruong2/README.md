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