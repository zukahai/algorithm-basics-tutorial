# Bài 1: Phân tích thừa số nguyên tố

## Đề bài

Viết chương trình phân tích một số nguyên thành các thừa số nguyên tố.

## Input

Một số nguyên dương n (2 ≤ n ≤ 10^15).

## Output

In ra màn hình các thừa số nguyên tố của n, mỗi thừa số cách nhau bởi dấu cách.

## Ví dụ

### Ví dụ 1

| Input | Output |
|-------|--------|
| 100   | 2 * 2 * 5 * 5 |

### Ví dụ 2

| Input | Output |
|-------|--------|
| 120   | 2 * 2 * 2 * 3 * 5 |

### Ví dụ 3

| Input | Output |
|-------|--------|
| 13    | 13     |


# Bài 2: Số nhỏ nhất

Nhập vào số nguyên dương n (1 ≤ n ≤ 10^15). Hãy tìm số nguyên dương m nhỏ nhất sao cho m * n là số chính phương.

## Input

Một số nguyên dương n (1 ≤ n ≤ 10^15).

## Output

In ra màn hình số nguyên dương m nhỏ nhất thỏa mãn điều kiện đề bài.

## Ví dụ

### Ví dụ 1

| Input | Output |
|-------|--------|
| 12     | 3      |

12 * 3 = 36 là số chính phương.

### Ví dụ 2

| Input | Output |
|-------|--------|
| 120     | 30      |

120 * 30 = 3600 là số chính phương.

**Gợi ý**:

Phân tích n thành các thừa số nguyên tố.<br>
Ví dụ 12 = 2 * 2 * 3<br>
Cần đảm bảo các thừa số nguyên tố xuất hiện chẵn lần để m * n là số chính phương.<br>
Thừa số 3 xuất hiện lẻ lần nên cần thêm một thừa số 3 nữa để m * n là số chính phương.<br><br>

Ví dụ 120 = 2 * 2 * 2 * 3 * 5<br>
Cần thêm 1 thừa số 2 và 1 thừa số 5 để m * n là số chính phương.<br>
Thừa số 2, 3, 5 xuất hiện lẻ lần nên cần thêm thừa số 2, 3, 5 nữa để m * n là số chính phương.<br>