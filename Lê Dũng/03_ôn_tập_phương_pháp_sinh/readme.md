# Số siêu nguyên tố

Số siêu nguyên tố là số nguyên dương mà nó là số nguyên tố và khi xóa từng chữ số bên phải của nó ra thì các số mới này vẫn là số nguyên tố.<br>
Ví dụ số 2333 là số siêu nguyên tố vì nó là số nguyên tố và khi xóa từng chữ số bên phải ra ta được các số 233, 23, 2 đều là số nguyên tố.

Cho một số nguyên dương N (1 <= N <= 10^18). Nhiệm vụ của bạn là hãy in ra các số siêu nguyên tố không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**INPUT**

Dong đầu chứa số nguyên dương N (1 <= N <= 10^18).

**OUTPUT**

In ra các số siêu nguyên tố không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 100   | 2 3 5 7 23 29 31 37 53 59 71 73 79 |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 1000  | 2 3 5 7 23 29 31 37 53 59 71 73 79 233 239 293 311 313 317 373 379 593 599 719 733 739 797 |

**Ví dụ 3**

| Input | Output |
|-------|--------|
| 100000 | 2 3 5 7 23 29 31 37 53 59 71 73 79 233 239 293 311 313 317 373 379 593 599 719 733 739 797 2333 2339 2393 3119 3137 3733 3739 3793 5939 7193 7331 7333 7393 23333 23339 23399 23993 31193 31379 37337 37339 37397 59393 59399 71933 73331 73939|

# Số đối xứng

Một số nguyên dương được gọi là số đối xứng nếu đọc từ trái sang phải hoặc từ phải sang trái số đó vẫn giống nhau. Ví dụ số 121, 1331, 1221 là số đối xứng.

Cho một số nguyên dương N (1 <= N <= 10^18). In ra số đối xứng nhỏ nhất lớn hơn hoặc bằng N.

**INPUT**

Dong đầu chứa số nguyên dương N (1 <= N <= 10^18).

**OUTPUT**

In ra số đối xứng nhỏ nhất lớn hơn hoặc bằng N.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 1000   | 1001    |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 1234  | 1331   |

**Ví dụ 3**

| Input | Output |
|-------|--------|
| 1234567890 | 1234664321 |

**Ví dụ 4**

| Input | Output |
|-------|--------|
| 12555 | 12621 |
