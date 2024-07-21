# Số học và tối ưu thuật toán về các ước

## Bài 1: kiểm tra số thực

Cho số thực x. Hãy kiểm tra xem x có phải là số nguyên hay không.

Nếu x là số nguyên, in ra `YES`, ngược lại in ra `NO`.

**Input:**

Một dòng duy nhất chứa số thực x. (-10^9 ≤ x ≤ 10^9)

**Output:**

Một dòng duy nhất chứa `YES` nếu x là số nguyên, ngược lại in ra `NO`.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 4     | YES    |

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 5.5   | NO     |

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 10.0     | YES    |


## Bài 2: Số chính phương

Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số chính phương hay không.

*Số chính phương là số mà căn bậc 2 của nó là một số nguyên. Ví dụ: 1, 4, 9, 100 là các số chính phương*

Nếu n là số chính phương, in ra `YES`, ngược lại in ra `NO`.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa `YES` nếu n là số chính phương, ngược lại in ra `NO`.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 4     | YES    |

**Giải thích:**

Căn bậc 2 của 4 là 2, là một số nguyên.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 5     | NO     |

**Giải thích:**

Căn bậc 2 của 5 không phải là một số nguyên.


## Bài 3: Số ước của một số

Cho số nguyên dương n. Hãy tính số lượng ước của n.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa số lượng ước của n.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6     | 4      |

**Giải thích:**

Có 4 ước của số 6 là 1, 2, 3 và 6.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 9    | 3      |

## Bài 4: Tổng ước của một số

Cho số nguyên dương n. Hãy tính tổng các ước của n.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa tổng các ước của n.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6     | 12     |

**Giải thích:**

Có 4 ước của số 6 là 1, 2, 3 và 6. Tổng các ước là 1 + 2 + 3 + 6 = 12.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 9     | 13     |

**Giải thích:**

Có 3 ước của số 9 là 1, 3 và 9. Tổng các ước là 1 + 3 + 9 = 13.

## Bài 5: In ra các ước của một số

Cho số nguyên dương n. Hãy in ra các ước của n theo thứ tự tăng dần.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa các ước của n theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6     | 1 2 3 6 |

**Giải thích:**

Có 4 ước của số 6 là 1, 2, 3 và 6.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 9     | 1 3 9   |

**Giải thích:**

Có 3 ước của số 9 là 1, 3 và 9.

## Bài 7: Số nguyên tố

Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số nguyên tố hay không.

*Số nguyên tố là số lớn hơn 1 và không chia hết cho bất kỳ số nguyên dương nào khác ngoài 1 và chính nó.*

Nếu n là số nguyên tố, in ra `YES`, ngược lại in ra `NO`.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa `YES` nếu n là số nguyên tố, ngược lại in ra `NO`.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 7     | YES    |

**Giải thích:**

Số 7 không chia hết cho bất kỳ số nguyên dương nào khác ngoài 1 và chính nó.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 6     | NO     |

**Giải thích:**

Số 6 chia hết cho 2 và 3.

## Bài 8: In ra các số chính phương không lơn hơn n

Cho số nguyên dương n. Hãy in ra các số chính phương không lớn hơn n theo thứ tự tăng dần.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa các số chính phương không lớn hơn n theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 10    | 1 4 9   |

**Giải thích:**

Các số chính phương không lớn hơn 10 là 1, 4 và 9.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 20    | 1 4 9 16 |

**Giải thích:**

Các số chính phương không lớn hơn 20 là 1, 4, 9 và 16.

## Bài 9: Số hoàn thiện

Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số hoàn thiện hay không.

*Số hoàn thiện là số mà tổng các ước của n (không kể n) bằng chính nó.*

Nếu n là số hoàn thiện, in ra `YES`, ngược lại in ra `NO`.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa `YES` nếu n là số hoàn thiện, ngược lại in ra `NO`.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 28    | YES    |

**Giải thích:**

Các ước của 28 là 1, 2, 4, 7 và 14. Tổng các ước là 1 + 2 + 4 + 7 + 14 = 28.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 8     | NO     |

**Giải thích:**

Các ước của 8 là 1, 2 và 4. Tổng các ước là 1 + 2 + 4 = 7.

## Bài 10: In ra các số hoàn thiện không lớn hơn n

Cho số nguyên dương n. Hãy in ra các số hoàn thiện không lớn hơn n theo thứ tự tăng dần.

**Input:**

Một dòng duy nhất chứa số nguyên n. (0 ≤ n ≤ 10^5)

**Output:**

Một dòng duy nhất chứa các số hoàn thiện không lớn hơn n theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 30    | 6 28   |

**Giải thích:**

Các số hoàn thiện không lớn hơn 30 là 6 và 28.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 1000  | 6 28 496 |

**Giải thích:**

Các số hoàn thiện không lớn hơn 1000 là 6, 28 và 496.

## Bài 11: Số nguyên tố đầu tiên

Cho số nguyên dương n. Hãy in ra số nguyên tố nhỏ nhất lớn hơn n

**Input:**

Một dòng duy nhất chứa số nguyên n. (1 ≤ n ≤ 10^9)

**Output:**

Một dòng duy nhất chứa số nguyên tố nhỏ hơn n.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 2     | 3      |

**Giải thích:**

Số nguyên tố nhỏ nhất lớn hơn 2 là 3.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 10    | 11     |

**Giải thích:**

Số nguyên tố nhỏ nhất lớn hơn 10 là 11.

## Bài 12: Số nguyên tố cuối cùng

Cho số nguyên dương n. Hãy in ra số nguyên tố lớn nhất nhỏ hơn n

**Input:**

Một dòng duy nhất chứa số nguyên n. (1 ≤ n ≤ 10^9)

**Output:**

Một dòng duy nhất chứa số nguyên tố nhỏ hơn n. Nếu không có số nguyên tố nào nhỏ hơn n, in ra -1.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 10    | 7      |

**Giải thích:**

Số nguyên tố lớn nhất nhỏ hơn 10 là 7.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 2     | -1     |

**Giải thích:**

Không có số nguyên tố nào nhỏ hơn 2.

## Bài 13: Ước số nhỏ nhất

Cho số nguyên dương n. Hãy tìm ước số nhỏ nhất của n khác 1.

**Input:**

Một dòng duy nhất chứa số nguyên n. (1 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa ước số nhỏ nhất của n khác 1.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6     | 2      |

**Giải thích:**

Các ước của 6 là 1, 2, 3 và 6. Ước số nhỏ nhất khác 1 là 2.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 9     | 3      |

**Giải thích:**

Các ước của 9 là 1, 3 và 9. Ước số nhỏ nhất khác 1 là 3.

## Bài 14: Ước số lớn nhất

Cho số nguyên dương n. Hãy tìm ước số lớn nhất của n khác chính nó.

**Input:**

Một dòng duy nhất chứa số nguyên n. (1 ≤ n ≤ 10^12)

**Output:**

Một dòng duy nhất chứa ước số lớn nhất của n khác chính nó.

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6     | 3      |

**Giải thích:**

Các ước của 6 là 1, 2, 3 và 6. Ước số lớn nhất khác chính nó là 3.

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 100   | 50     |

**Giải thích:**

Các ước của 100 là 1, 2, 4, 5, 10, 20, 25, 50 và 100. Ước số lớn nhất khác chính nó là 50.
