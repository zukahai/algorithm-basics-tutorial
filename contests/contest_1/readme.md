# Ôn tập kiến thức cơ bản

## Bài 1

Cho một số nguyên dương **N.** Hãy kiểm tra xem trong **N** có đầy đủ các chữ số từ **1 đến 9** hay không?

**Ví dụ:**

- Với N = 123456789, kết quả là `true`.
- Với N = 12345678, kết quả là `false`.
- Với N = 1234567890, kết quả là `true`.
- Với N = 1234567899, kết quả là `true`.
- Với N = 234567899, kết quả là `false`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s với C++, 0.6s với Java và C#, 0.8s với Python, Go và JavaScript.
- [Đầu vào] Integer N, 1 ≤ N ≤ 10^15.
- [Đầu ra] Boolean

## Bài 2

Cho một số tự nhiên **N**. Sắp xêp các chữ số của **N** thành số lớn nhất có thể.

**Ví dụ:**

- Với N = 123, kết quả là `321`.
- Với N = 38293367, kết quả là `98763332`.
- Với N = 100, kết quả là `100`.
- Với N = 0, kết quả là `0`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s với C++, 0.6s với Java và C#, 0.8s với Python, Go và JavaScript.
- [Đầu vào] Integer N, 1 ≤ N ≤ 10^15.
- [Đầu ra] Integer

## Bài 3

Cho 2 số nguyên dương **A** và **B**. Hãy kiểm tra xem khi viết liền **A** và **B** có thể tạo ra một số nguyên tố hay không?

**Ví dụ:**

- Với A = 3 và B = 7, kết quả là `true` vì 37 là số nguyên tố.
- Với A = 3 và B = 8, kết quả là `false` vì 38 không phải là số nguyên tố.
- Với A = 13 và B = 5, kết quả là `false` vì 135 không là số nguyên tố.
- Với A = 2 và B = 3, kết quả là `true` vì 23 là số nguyên tố.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s với C++, 0.6s với Java và C#, 0.8s với Python, Go và JavaScript.
- [Đầu vào] Integer A, B, 1 ≤ A, B ≤ 10^8.
- [Đầu ra] Boolean

## Bài 4

Cho 2 số nguyên dương **N** và **K**. Hãy đếm xem có bao nhiều số nguyên dương từ **1** đến **N** có tổng các chữ số chia hết cho **K**.

**Ví dụ:**

- Với N = 24 và K = 4, kết quả là `5` vì có 5 số từ 1 đến 24 có tổng các chữ số chia hết cho 4 là 4, 8, 13, 17, 22
- Với N = 100 và K = 5, kết quả là `19`.
- Với N = 123 và K = 1, kết quả là `123`.
- Với N = 123456 và K = 10, kết quả là `12345`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s với C++, 0.6s với Java và C#, 0.8s với Python, Go và JavaScript.
- [Đầu vào] Integer N, K, 1 ≤ N, K ≤ 10^6.
- [Đầu ra] Integer


## Bài 5

Cho một mảng gồm **N** số nguyên dương đã được sắp xếp tăng dần. Hãy đếm xem trong mảng đó có bao nhiêu số có giá trị **K**.

**Ví dụ:**

- Với arr = [1, 2, 3, 3, 3, 4, 5, 6] và K = 3, kết quả là `3` vì có 3 số 3 trong mảng.
- Với arr = [1, 2, 3, 3, 3, 4, 5, 6] và K = 5, kết quả là `1` vì có 1 số 5 trong mảng.
- Với arr = [1, 2, 3, 3, 3, 4, 5, 6] và K = 7, kết quả là `0` vì không có số 7 trong mảng.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s với C++, 0.6s với Java và C#, 0.8s với Python, Go và JavaScript.
- [Đầu vào] Array arr, Integer K, 1 ≤ arr.length ≤ 10^6<br>0 ≤ arr[i] ≤ 10^6.
- [Đầu ra] Integer

