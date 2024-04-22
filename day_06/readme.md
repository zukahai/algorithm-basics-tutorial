## Bài 1

Một cửa hàng cứ mua **5** cây bút thì được tặng **2** cây bút. Nam đang cần mua đủ **N** cây bút, hỏi Nam cần mua ít nhất bao nhiêu cây bút.

*(N ≤ 10^15)*

**Ví dụ:**

- Với `N = 6`, kết quả `minimumPens(N) = 5`.
- Với `N = 10`, kết quả `minimumPens(N) = 8`.
- Với `N = 14`, kết quả `minimumPens(N) = 10`.

Khi Nam mua **K** cây bút thì Nam được tặng bao nhiêu cây bút?

Áp dụng tìm kiếm nhị phân để tìm ra kết quả.
[1, 100], 50 => số bút tổng (cả tặng)
Nếu mua dư thì số bút cần mua nằm trong khoảng [1, 50]
Nếu mua thiếu thì số bút cần mua nằm trong khoảng [51, 100]
