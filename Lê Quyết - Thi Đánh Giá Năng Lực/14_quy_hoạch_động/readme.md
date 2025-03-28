# Quy hoạch động

## Bài 1: Số Fibonacci

Dãy số Fibonacci được định nghĩa như sau:

2 số đầu tiên là sẽ bằng 1

Từ số thứ 3 trở đi, số Fibonacci thứ n sẽ bằng tổng của 2 số trước nó.

Ví dụ: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

Cho số nguyên dương n. Hãy tính số Fibonacci thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Số Fibonacci thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 2      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 13     |

Để tính được số thứ n, ta cần biết được số thứ n-1 và n-2.



Tạo mảng b

b[k]: Lưu số Fibonacci thứ k
b[hoangdu]: Lưu số Fibonacci thứ hoangdu

b[1] = 1
b[2] = 1
b[3] = b[1] + b[2]
b[4] = b[2] + b[3]
b[5] = b[3] + b[4]
b[6] = b[4] + b[5]
b[7] = b[5] + b[6]

b[k] = b[k-1] + b[k-2]


## Bài 2: Số gấp đôi

Dãy số gấp đôi được định nghĩa như sau:

Số đầu tiên là sẽ bằng 1

Từ số thứ 2 trở đi, số gấp đôi thứ n sẽ bằng số gấp đôi thứ n-1 nhân 2.

Ví dụ: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, ...

Cho số nguyên dương n. Hãy tính số gấp đôi thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Số gấp đôi thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 4      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 64     |

b[1] = 1
b[2] = b[1] * 2
b[k] = b[k - 1] * 

## Bài 3: Tiền lương

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm 3 đồng.

Ví dụ các ngày tiếp theo: 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, ...

Cho số nguyên dương n. Hãy tính số tiền lương người lao động nhận được ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 10^6)

**Output:**

Số tiền lương người lao động nhận được ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 7      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 19     |

## Bài 4: Tiền lương 2

Một người lao động được trả lương theo hình thức sau:

Ngày đầu tiên, người lao động được trả 1 đồng

Các ngày tiếp theo, người lao động được trả số tiền bằng tiền lương của ngày trước đó cộng thêm số tiền được thưởng. Nếu ngày đang là ngày chẵn, người lao động sẽ được thưởng 1 đồng, ngược lại sẽ được thưởng 2 đồng.

Ví dụ các ngày tiếp theo: 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, ...

Cho số nguyên dương n. Hãy tính số tiền lương người lao động nhận được ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 10^6)

**Output:**

Số tiền lương người lao động nhận được ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 4      |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 8     | 11      |

b[k]: Số tiền lương người lao động nhận được ngày thứ k


b[1] = 1
b[2] = b[1] + 1
b[3] = b[2] + 2
b[4] = b[3] + 1
b[5] = b[4] + 2

b[k] = b[k-1] + 2, Nếu k là số lẻ
b[k] = b[k-1] + 1, Nếu k là số chẵn

## Bài 5: Doanh số nhà hàng

Một nhà hàng ghi chép doanh số bán hàng hàng ngày. Doanh số bán hàng của ngày đầu tiên là 30 đồng.

Các ngày tiếp theo, doanh số bán hàng của ngày hôm trước tăng thêm 10%.

Ví dụ: 30, 33, 36.3, 39.93, 43.923, 48.3153, ...

b[1] = 30
b[2] = b[1] + 0.1 * b[1]


Cho số nguyên dương n. Hãy tính doanh số bán hàng của ngày thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Doanh số bán hàng của ngày thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 36.3   |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 7     | 48.3153|


## Bài 6: Dãy số HaiZuka

Dãy số HaiZuka được định nghĩa như sau:

Số đầu tiên là sẽ bằng 1
Sô thứ 2 là 4
Số thứ 3 là 10

Từ số thứ 4 trở đi, số HaiZuka thứ n sẽ bằng 3 tổng số HaiZuka trước nó.

Ví dụ: 1, 4, 10, 15, 29, 54, 98, ...

Cho số nguyên dương n. Hãy tính số HaiZuka thứ n.

**Input:**

Số nguyên dương n (1 ≤ n ≤ 30)

**Output:**

Số HaiZuka thứ n

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 3     | 10     |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 6     | 54     |