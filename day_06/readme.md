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

## Bài 2

Cho một mảng số nguyên `a` gồm **n** phần tử đã được sắp xếp tăng dần. Cho một số nguyên **X**

Hãy viết hàm kiểm tra xem **X** có tồn tại trong mảng `a` hay không.

**Ví dụ:**

- Với `a = [1, 2, 3, 4, 5]` và `X = 3`, kết quả `search(a, X) = True`.
- Với `a = [1, 2, 3, 4, 5]` và `X = 6`, kết quả `search(a, X) = False`.

## Bài 3

Cho một mảng số nguyên `a` gồm **n** phần tử đã được sắp xếp tăng dần. Cho một số nguyên **X**

Hãy viết hàm tìm vị trí đầu tiên của **X** trong mảng `a`. Nếu **X** không tồn tại trong mảng `a` thì trả về `-1`.

**Ví dụ:**

- Với `a = [1, 2, 3, 3, 3, 4, 5]` và `X = 3`, kết quả `searchFirst(a, X) = 2`.
- Với `a = [1, 2, 3, 4, 5]` và `X = 6`, kết quả `searchFirst(a, X) = -1`.

## Bài 4

Cho một mảng số nguyên `a` gồm **n** phần tử đã được sắp xếp tăng dần. Cho một số nguyên **X**

Hãy viết hàm tìm vị trí cuối cùng của **X** trong mảng `a`. Nếu **X** không tồn tại trong mảng `a` thì trả về `-1`.

**Ví dụ:**

- Với `a = [1, 2, 3, 3, 3, 4, 5]` và `X = 3`, kết quả `searchLast(a, X) = 4`.
- Với `a = [1, 2, 3, 4, 5]` và `X = 6`, kết quả `searchLast(a, X) = -1`.