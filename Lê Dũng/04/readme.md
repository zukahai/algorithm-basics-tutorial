# Bài 1: Số giảm dần

**Số giảm dần** là số mà các chữ số trong số đó giảm dần từ trái sang phải. Ví dụ: 321, 97531, 21, 543210 là số giảm dần.

Tìm số giảm dần nhỏ nhất lớn hơn hoặc bằng số nguyên dương `n` cho trước. Nếu không tồn tại số giảm dần như vậy, hãy đưa ra `-1`.

**Input**:

- Một số nguyên `n` (1 ≤ `n` ≤ 10^18).

**Output**:

- Đưa ra số giảm dần nhỏ nhất lớn hơn hoặc bằng `n`.

### Ví dụ

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 34     | 40     |

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 436     | 510     |

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 65322     | 65410     |

#### Ví dụ 4:

| Input | Output |
|-------|--------|
| 999     | 3210     |

#### Ví dụ 5:

| Input | Output |
|-------|--------|
| 1234332342432     | -1     |


n = 65322

65322
-----
98765
87654
76543
65432
65432
65421


749

987
876
765
754
750

# Bài 2: Số sinh đôi

**Số sinh đôi** là số mà các chữ số liên tiếp trong số đó chỉ chênh lệch nhau đúng 1 đơn vị. Ví dụ: 123, 543210, 3434356 là số sinh đôi.

Tìm số sinh đôi lớn nhất nhỏ hơn hoặc bằng số nguyên dương `n` cho trước.

**Input**:

- Một số nguyên `n` (1 ≤ `n` ≤ 10^16).

**Output**:

- Đưa ra số sinh đôi lớn nhất nhỏ hơn hoặc bằng `n`.

### Ví dụ

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 33     | 34     |

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 436     | 454     |

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 566574     | 567654     |