## Bài 1

Cho một dãy A gồm các số nguyên N số nguyên. Tìm tổng của dãy con liên tiếp có tổng lớn nhất.

Ví dụ:

Với a = [1, -2, 3, -1, 2], kết quả `maxSubArray(a) = 4`.<br>
Vì dãy con liên tiếp có tổng lớn nhất là [3, -1, 2].

Với a = [-1, -2, -3, -4], kết quả `maxSubArray(a) = -1`.<br>

Đầu vào/Đầu ra:

[Thời gian chạy] 0.5 giây với 1 ≤ a.length ≤ 10^5 và -10^4 ≤ a[i] ≤ 10^4.<br>
[Đầu vào] Array of integer a.<br>
1 ≤ a.length ≤ 10^5.<br>
-10^4 ≤ a[i] ≤ 10^4.<br>
[Đầu ra] Integer

## Bài 2

Cho một dãy số nguyên A gồm N phần tử. Tìm tổng của dãy con có tổng bé nhất.

Ví dụ:

Với a = [1, 2, 3, 4, 5], kết quả `minSubArray(a) = 1`.<br>

Với a = [2, -1, -2, 1, -4, 2, 8], kết quả `minSubArray(a) = -6`.<br>
Giải thích: Dãy con có tổng bé nhất là [-1, -2, 1, -4, 2].

Với a = [1, -1, 1, -1, 1, -1, 1], kết quả `minSubArray(a) = -1`.<br>

Đầu vào/Đầu ra:

[Thời gian chạy] 0.5 giây với 1 ≤ a.length ≤ 10^5 và -10^4 ≤ a[i] ≤ 10^4.<br>
[Đầu vào] Array of integer a.<br>

1 ≤ a.length ≤ 10^5.<br>
-10^4 ≤ a[i] ≤ 10^4.<br>
[Đầu ra] Integer