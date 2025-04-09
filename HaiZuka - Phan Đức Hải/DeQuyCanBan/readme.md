# Bài tập đề quy căn bản

## Bài 1: Tính ước chung lớn của 2 số nguyên dương

Ước chung lớn nhất (UCLN) của 2 số nguyên dương là số nguyên dương lớn nhất mà chia hết cho cả 2 số đó. Ví dụ, UCLN(8, 12) = 4.

Để tính ước chung lớn nhất của 2 số nguyên dương **a** và **b** ta có thể sử dụng thuật toán Euclid như sau:

1. Nếu **b** = 0 thì ước chung lớn nhất là **a**.
2. Nếu **b** khác 0 thì ta tính ước chung lớn nhất của **b** và **a** mod **b**.
3. Lặp lại bước 1 và bước 2 cho đến khi **b** = 0.

**Đầu vào**:

- 2 số nguyên dương **a** và **b**. (1 ≤ a, b ≤ 10<sup>18</sup>)

**Đầu ra**:

- Ước chung lớn nhất của **a** và **b**.

**Ví dụ**:

|Đầu vào |Đầu ra|
|:--------|:-------|
|35 20|5|

## Bài 2: Tính ước chung lớn nhất của n số nguyên dương

Cho một dãy số nguyên dương **a** = [a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>]. Hãy tính ước chung lớn nhất của dãy số này.


**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **n** (1 ≤ n ≤ 10<sup>5</sup>).
- Dòng thứ hai là n số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>18</sup>).

**Đầu ra**:

- Ước chung lớn nhất của dãy số.

**Ví dụ**:

|Đầu vào |Đầu ra|
|:--------|:-------|
|5 <br>2 10 6 8 10|2|

## Bài 3: Tính bội chung nhỏ nhất của 2 số nguyên dương

Bội chung nhỏ nhất (BCNN) của 2 số nguyên dương là số nguyên dương nhỏ nhất mà chia hết cho cả 2 số đó. Ví dụ, BCNN(8, 12) = 24.

Bội chung nhỏ nhất của 2 số nguyên dương **a** và **b** được tính bằng công thức sau:

BCNN(a, b) = (a * b) / UCLN(a, b)

Cho 2 số nguyên dương **a** và **b**. Hãy tính bội chung nhỏ nhất của 2 số này.

**Đầu vào**:

- 2 số nguyên dương **a** và **b**. (1 ≤ a, b ≤ 10<sup>9</sup>)

**Đầu ra**:

- Bội chung nhỏ nhất của **a** và **b**.

**Ví dụ**:

|Đầu vào |Đầu ra|
|:--------|:-------|
| 8 12|24|

## Bài 4: Tính số fibonaci thứ n

Cho số nguyên dương **n** (1 ≤ n ≤ 10<sup>18</sup>). Hãy tính số fibonaci thứ n. Kết quả chia lấy dư cho 10<sup>9</sup> + 7.

Công thức tính số fibonaci nâng cao như sau:

- f<sub>1</sub> = 1
- f<sub>2</sub> = 1
- f<sub>2n</sub> = f<sub>n</sub> * ( f<sub>n-1</sub> + f<sub>n+1</sub>)
- f<sub>2n+1</sub> = f<sub>n</sub><sup>2</sup> + f<sub>n+1</sub><sup>2</sup>

**Đầu vào**:

- Số nguyên dương **n** (1 ≤ n ≤ 10<sup>18</sup>).

**Đầu ra**:

- Số fibonaci thứ n. Kết quả chia lấy dư cho 10<sup>9</sup> + 7.

**Ví dụ**:

|Đầu vào |Đầu ra|
|:--------|:-------|
| 8 |21|

## Bài 5: Số hạnh phúc

Một số nguyên dương được gọi là số hạnh phúc nếu nó có thể được chuyển thành 1 bằng cách thay thế nó bằng tổng bình phương các chữ số của nó cho đến khi nó trở thành 1 hoặc lặp lại một chu trình không bao giờ kết thúc.
Ví dụ: 19 là số hạnh phúc vì 1<sup>2</sup> + 9<sup>2</sup> = 82, 8<sup>2</sup> + 2<sup>2</sup> = 68, 6<sup>2</sup> + 8<sup>2</sup> = 100, 1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1.

Nhập vào một số nguyên dương n. Hãy kiểm tra xem nó có phải là số hạnh phúc hay không.
Nếu có thì in ra "YES", nếu không thì in ra "NO".

**Đầu vào**:

- Số nguyên dương n (1 ≤ n ≤ 10<sup>9</sup>).

**Đầu ra**:

- "YES" nếu n là số hạnh phúc, "NO" nếu không phải.

# Bài 6: Đề HSG Tỉnh Bình Dương câu 1

# Bài 7: Số cách biến đổi số

Một số nguyên dương N có thể biến đổi thành n + 1 hoặc thành 2 * n. Từ số 2, có bao nhiêu cách biến đổi thành số N?

**Đầu vào**:

- Số nguyên dương N (1 ≤ N ≤ 10<sup>5</sup>).

**Đầu ra**:

- Số cách biến đổi từ 2 thành N. Kết quả chia lấy dư cho 10<sup>9</sup> + 7.

**Ví dụ**:

|Đầu vào |Đầu ra|
|:--------|:-------|
| 10 |7|

**Giải thích**:

Có 7 cách biến đổi từ 2 thành 10 như sau:

- 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
- 2 -> 3 -> 4 -> 5 -> 10
- 2 -> 3 -> 4 -> 8 -> 9 -> 10
- 2 -> 3 -> 6 -> 7 -> 8 -> 9 -> 10
- 2 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
- 2 -> 4 -> 5 -> 10
- 2 -> 4 -> 8 -> 9 -> 10


