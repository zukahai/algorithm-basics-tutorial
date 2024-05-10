# Thực hành vét cạn

## Bài 1

Cho một dãy số nguyên, hãy tìm 2 số liên tiếp có tổng lớn nhất. Đưa ra tổng của 2 số đó.

Ví dụ:

- Với `a = [1, 2, 3, 4, 5]`, kết quả `maxSumOfTwoConsecutive(a) = 9`.
- Với `a = [2, 22, 3, 4, 5, 6]`, kết quả `maxSumOfTwoConsecutive(a) = 25`.

Đầu vào/Đầu ra:

- [Thời gian chạy] 0.5 giây
- [Đầu vào] Array of integers `a`. 2 ≤ a.length ≤ 10^5. <br>-10^5 ≤ a[i] ≤ 10^5.

## Bài 2

Cho 3 só nguyên `n`, `b`, `c`. Hãy đếm xem từ 1 đến `n` có bao nhiêu số **không** chia hết cho `b` và `c`.

Ví dụ:

- Với `n = 10`, `b = 2`, `c = 3`, kết quả `countNumbers(n, b, c) = 3`.
Giải thích: Các số không chia hết cho 2 và 3 là 1, 5, 7.
- Với `n = 10`, `b = 2`, `c = 4`, kết quả `countNumbers(n, b, c) = 5`.
Giải thích: Các số không chia hết cho 2 và 4 là 1, 3, 5, 7, 9.

Đầu vào/Đầu ra:

- [Thời gian chạy] 0.5 giây
- [Đầu vào] Integer `n`. 1 ≤ n ≤ 10^15.
- [Đầu vào] Integer `b`. 1 ≤ b ≤ 10^5.
- [Đầu vào] Integer `c`. 1 ≤ c ≤ 10^5.

## Bài 3

Cho một dãy số nguyên `a`, hãy tìm độ dài của dãy tăng liên tiếp dài nhất.

Ví dụ:

- Với `a = [1, 3, 2, 4, 5, 6, 5]`, kết quả `longestIncreasingSubsequence(a) = 4`.
Giải thích: Dãy tăng liên tiếp dài nhất là `[2, 4, 5, 6]`.
- Với `a = [1, 2, 3, 4, 5, 6, 7]`, kết quả `longestIncreasingSubsequence(a) = 7`.
- Với `a = [7, 6, 5, 4, 3, 2, 1]`, kết quả `longestIncreasingSubsequence(a) = 1`.

Đầu vào/Đầu ra:

- [Thời gian chạy] 0.5 giây
- [Đầu vào] Array of integers `a`. 1 ≤ a.length ≤ 10^5.<br> -10^5 ≤ a[i] ≤ 10^5.

