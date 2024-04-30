## Bài 1

Cho một dãy số gồm N số nguyên, hãy viết chương trình tìm ra 2 số có tổng bé nhất lớn hơn 0.

**Ví dụ:**

- Với dãy số `[-1, 2, 3, 4, 5]` thì kết quả là `-1` và `2` vì `-1 + 2 = 1` là tổng bé nhất lớn hơn 0.
- Với dãy số `[1, 1, 1, 1, 1]` thì kết quả là `1` và `1` vì `1 + 1 = 2` là tổng bé nhất lớn hơn 0.
- Với dãy số `[-3, 3, 2, 1]` thì kết quả là `2` và `1` vì `2 + 1 = 3` là tổng bé nhất lớn hơn 0.

## Bài 2

Có N quả bóng được đánh số từ 1 đến N, đếm xem có bao nhiêu các cách chọn 2 quả bóng i, j (i < j) sao cho tổng số trên 2 quả bóng đó chia hết cho K.

**Ví dụ:**

- Với `N = 5` và `K = 2` thì kết quả là `6` vì có 6 cách chọn 2 quả bóng sao cho tổng số trên 2 quả bóng đó chia hết cho 2: `(1, 3), (1, 5), (2, 4), (3, 5), (4, 5), (2, 3)`.
- Với `N = 5` và `K = 3` thì kết quả là `3` vì có 3 cách chọn 2 quả bóng sao cho tổng số trên 2 quả bóng đó chia hết cho 3: `(1, 2), (2, 5), (3, 4)`.
- Với `N = 5` và `K = 10` thì kết quả là `0` vì không có cách chọn 2 quả bóng sao cho tổng số trên 2 quả bóng đó chia hết cho 10.