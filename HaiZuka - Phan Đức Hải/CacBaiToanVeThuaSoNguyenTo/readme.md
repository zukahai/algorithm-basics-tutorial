# Phân tích thừa số nguyên tố

Cho một số nguyên dương n, hãy phân tích n thành các thừa số nguyên tố.

**Đầu vào:**

- Một số nguyên dương n (2 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**
- Các thừa số nguyên tố của n, xem định dạng đầu ra bên dưới.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|60 | 2 2 3 5|


**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|100 | 2 2 5 5|

# Phân tích thừa số nguyên tố 2

Cho một số nguyên dương n, hãy phân tích n thành các thừa số nguyên tố.

**Đầu vào:**

- Một số nguyên dương n (2 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**
- Các thừa số nguyên tố của n, xem định dạng đầu ra bên dưới.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|60 | 2^2 * 3^1 * 5^1|


**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|100 | 2^2 * 5^2|


**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|13 | 13^1|

# Tìm số x nhỏ nhất sao cho n * x là số chính phương

Cho một số nguyên dương n, hãy tìm số nguyên dương x nhỏ nhất sao cho n * x là số chính phương.

**Đầu vào:**
- Một số nguyên dương n (1 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**

- Một số nguyên dương x nhỏ nhất sao cho n * x là số chính phương.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 | 3|

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|7 | 7|


# Tìm số x nhỏ nhất sao cho n / x là số chính phương

Cho một số nguyên dương n, hãy tìm số nguyên dương x nhỏ nhất sao cho n / x là số chính phương.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**

- Một số nguyên dương x nhỏ nhất sao cho n / x là số chính phương.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 | 3|

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|7 | 7|


# Tìm số x và y nhỏ nhất sao cho n * x * y là số chính phương

Cho một số nguyên dương n, hãy tìm số nguyên dương x và y thoả mãn 1 < x < y

Và x * y nhỏ nhất sao cho n * x * y là số chính phương.

Có rất nhiều cách để chọn x và y, nhưng bạn chỉ cần tìm một cặp x và y sao cho x * y là nhỏ nhất.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**

Một số nguyên dương x * y nhỏ nhất sao cho n * x * y là số chính phương

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|60 | 15|

Hai số x và y thoã mãn có thể là 3 và 5

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 | 12|

Hai số x và y thoã mãn có thể là 2 và 6

# Tìm số nguyên tố x nhỏ nhất sao cho n * x có đúng k ước số

Cho một số nguyên dương **n**, và một số nguyên dương **k**, hãy tìm thừa số nguyên tố **x** nhỏ nhất sao cho **n * x** có đúng **k** ước số.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>12</sup>).
- Một số nguyên dương k (1 ≤ k ≤ 10<sup>3</sup>).

**Đầu ra:**

- Một số nguyên tố x nhỏ nhất sao cho n * x có đúng k ước số. Nếu không có số nguyên tố nào thoả mãn thì in ra -1.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|10 6| 2|

Giải thích: 10 * 2 = 20, số 20 có 6 ước số

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 9| 3|

Giải thích: 12 * 3 = 36, số 36 có 9 ước số

**Ví dụ 3:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|10 8| 3|

Giải thích: 10 * 3 = 30, số 30 có 8 ước số

**Ví dụ 4:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|10 5| -1|

Không tồn tại số nguyên tố x nào thoả mãm 10 * x có 5 ước số.


# Số lượng chữ số 0 cuối cùng của n!

n! là giai thừa của n, tức là tích của tất cả các số nguyên dương từ 1 đến n.
Giai thừa của n được ký hiệu là n! = 1 * 2 * 3 * ... * n.

Hãy tính số chữ số 0 cuối cùng của n!

**Đầu vào:**
- Một số nguyên dương n (1 ≤ n ≤ 10<sup>7</sup>).

**Đầu ra:**
- Một số nguyên dương k là số chữ số 0 cuối cùng của n!.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|6 | 1|

6! = 720, có 1 chữ số 0 cuối cùng

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|26 | 6|

26! = 403291461126605635584000000, có 6 chữ số 0 cuối cùng

**Substasks:**
- 50% số điểm cho n ≤ 10<sup>2</sup>
- 50% số điểm cho n ≤ 10<sup>18</sup>


# Số lượng chữ số 0 cuối cùng của tích các số chẵn từ 1 đến n

Cho một số nguyên dương n (1 ≤ n ≤ 10<sup>18</sup>), hãy tính số chữ số 0 cuối cùng của tích các số chẵn từ 1 đến n.

Tức là 2 * 4 * 6 * ... * n.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>18</sup>).

**Đầu ra:**

- Một số nguyên dương k là số chữ số 0 cuối cùng của tích các số chẵn từ 1 đến n.

**Ví dụ:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|10 | 2|

Giải thích: 2 * 4 * 6 * 8 * 10 = 3840, có 1 chữ số 0 cuối cùng.

# Số lượng chữ số 0 cuối cùng của tích các số từ a đến b

Cho hai số nguyên dương a và b (1 ≤ a ≤ b ≤ 10<sup>18</sup>), hãy tính số chữ số 0 cuối cùng của tích các số từ a đến b.

Tức là a * (a + 1) * (a + 2) * ... * b.

**Đầu vào:**

- Hai số nguyên dương a và b (1 ≤ a ≤ b ≤ 10<sup>18</sup>).

**Đầu ra:**

- Một số nguyên dương k là số chữ số 0 cuối cùng của tích các số từ a đến b.

**Ví dụ:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|13 16 | 1|

Giải thích: 13 * 14 * 15 * 16 = 43680, có 1 chữ số 0 cuối cùng


# Số nhỏ nhất có đúng K! ước số

Cho một số nguyên dương K (1 ≤ K ≤ 10<sup>6</sup>), hãy tìm số nguyên dương n nhỏ nhất sao cho n có đúng K! ước số.

n có thể rất lớn, vì vậy hãy in ra n modulo 10<sup>9</sup> + 7.

**Đầu vào:**

- Một số nguyên dương K (1 ≤ K ≤ 10<sup>6</sup>).

**Đầu ra:**

- Một số nguyên dương n nhỏ nhất sao cho n có đúng K! ước số, in ra n modulo 10<sup>9</sup> + 7.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|3 | 12|

Số 12 là số nhỏ nhất có 3! ước số (1, 2, 3, 4, 6, 12)

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|2|2|

Số 2 là số nhỏ nhất có 2! ước số (1, 2)

# Phân tích thành các số nguyên tố khác nhau

Cho một số nguyên dương n, Hãy kiểm tra xem n có thể phân tích thành các số nguyên tố khác nhau hay không.

Nếu có thì in ra các số nguyên tố đó, nếu không thì in ra -1.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>12</sup>).

**Đầu ra:**

- Các số nguyên tố khác nhau của n, xem định dạng đầu ra bên dưới.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|42 | 2 * 3 * 7|

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 | -1|

# Số lượng ước số của N!

Cho một số nguyên dương n, hãy tính số lượng ước số của n!.

Kết quả có thể rất lớn, vì vậy hãy in ra kết quả modulo 10<sup>9</sup> + 7.

Giai thừa của n được ký hiệu là n! = 1 * 2 * 3 * ... * n.

**Đầu vào:**

- Một số nguyên dương n (1 ≤ n ≤ 10<sup>7</sup>).

**Đầu ra:**

- Một số nguyên dương k là số lượng ước số của n!. Kết quả in ra modulo 10<sup>9</sup> + 7.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|4 | 8|

4! = 24, có 8 ước số (1, 2, 3, 4, 6, 8, 12, 24)

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|5 | 16|

5! = 120, có 16 ước số (1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, 120)

# Ước số lẻ lớn nhất của N

Cho một số nguyên dương **N** (1 ≤ N ≤ 10<sup>18</sup>), hãy tìm ước số lẻ lớn nhất của N.

**Đầu vào:**

- Một số nguyên dương N (1 ≤ N ≤ 10<sup>18</sup>).

**Đầu ra:**

- Một số nguyên dương k là ước số lẻ lớn nhất của N.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|12 | 3|

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|15 | 15|

# Ước số lẻ lớn nhất của N giai thừa

Cho một số nguyên dương **N** (1 ≤ N ≤ 10<sup>6</sup>), hãy tìm ước số lẻ lớn nhất của N!. Kết quả có thể rất lớn, vì vậy hãy in ra kết quả modulo 10<sup>9</sup> + 7.

Biết rằng N! = 1 * 2 * 3 * ... * N.

**Đầu vào:**

- Một số nguyên dương N (1 ≤ N ≤ 10<sup>6</sup>).

**Đầu ra:**

- Một số nguyên dương là ước số lẻ lớn nhất của N!. Kết quả in ra modulo 10<sup>9</sup> + 7.

**Ví dụ 1:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|5 | 15|

Giải thích: 5! = 120, có 15 là ước số lẻ lớn nhất của 5!

**Ví dụ 2:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|7 | 315|

Giải thích: 7! = 5040, có 315 là ước số lẻ lớn nhất của 7!

# Bể nước hình hộp chữ nhật

Cho một bể nước hình hộp chữ nhật có chiều dài là a, chiều rộng là b và chiều cao là c.
Thể tích của bể nước là a * b * c.

Hải là một người thích sử hoàn hảo, nên Hải muốn chia lượng nước trong bể thành các phần bằng nhau. 

Biết rằng bể đang chứa đầy nước, hãy đếm xem có bao nhiêu cách chia lượng nước trong bể thành các phần bằng nhau.

**Đầu vào:**

- Ba số nguyên dương a, b, c (1 ≤ a, b, c ≤ 10<sup>12</sup>).

**Đầu ra:**

- Một số nguyên dương k là số cách chia lượng nước trong bể thành các phần bằng nhau.

**Ví dụ:**

|Đầu vào | Đầu ra|
|:--------|:-------|
|1 2 3 | 4|

Giải thích: 1 * 2 * 3 = 6, có 4 cách chia lượng nước trong bể thành các phần bằng nhau:
- Chia thành 1 phần, mỗi phần có 6 lít nước
- Chia thành 2 phần, mỗi phần có 3 lít nước
- Chia thành 3 phần, mỗi phần có 2 lít nước
- Chia thành 6 phần, mỗi phần có 1 lít nước