# Trò chơi rút số (1)

Trong thời gian rảnh rỗi, Hải và linh chơi một trò chơi rút số. Luật chơi như sau:
- Ban đầu, sẽ có một số nguyên dương **N**.
- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** có thể là 1, 2 hoặc 3. Khi rút được số **x**, số **N** sẽ giảm đi **x**.
- Người chơi nào có thể rút được số cuối cùng bằng 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **N** (1 ≤ **N** ≤ 10<sup>6</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 2     | Hai    |

**Giải thích**:

- Hải rút số 2, **N** giảm còn 0. Hải thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 4     | Linh   |

**Giải thích**:

Hải rút trước, Hải có thể rút số 1, 2 hoặc 3. Dù Hải có rút cách nào đi chăng nữa, Linh cũng có thể rút sao cho **N** giảm còn 0. Linh thắng.

- Hải rút 1, **N** giảm còn 3. Linh rút 3, **N** giảm còn 0. Linh thắng.
- Hải rút 2, **N** giảm còn 2. Linh rút 2, **N** giảm còn 0. Linh thắng.
- Hải rút 3, **N** giảm còn 1. Linh rút 1, **N** giảm còn 0. Linh thắng.

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5     | Hai    |

**Giải thích**:

- Hải rút 1, **N** giảm còn 4. Dù Linh rút cách nào đi chăng nữa, Hải cũng có thể rút sao cho **N** giảm còn 0. Hải thắng.

# Trò chơi rút số (2)

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**.
- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** có thể là các số từ 1 đến **K**. Khi rút được số **x**, số **N** sẽ giảm đi **x**.

Người chơi nào có thể rút được số cuối cùng bằng 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm 2 số nguyên **N** và **K** (1 ≤ **N**, **K** ≤ 10<sup>4</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 4   | Linh    |

**Giải thích**:

- Hải có thể rút các số từ 1 đến 4. Dù rút cách nào thì Linh cũng có thể rút sao cho **N** giảm còn 0. Linh thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 3   | Hai    |

# Trò chơi rút số (2) - Nâng cao

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**.
- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** có thể là các số từ 1 đến **K**. Khi rút được số **x**, số **N** sẽ giảm đi **x**.

Người chơi nào có thể rút được số cuối cùng bằng 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm 2 số nguyên **N** và **K** (1 ≤ **N**, **K** ≤ 10<sup>18</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 4   | Linh    |

**Giải thích**:

- Hải có thể rút các số từ 1 đến 4. Dù rút cách nào thì Linh cũng có thể rút sao cho **N** giảm còn 0. Linh thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 3   | Hai    |

# Trò chơi rút số (3)

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**.

- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** là số dương và là số chính phương . Khi rút được số **x**, số **N** sẽ giảm đi **x**.

- Người chơi nào có thể rút được số cuối cùng bằng 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **N** (1 ≤ **N** ≤ 10<sup>5</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5     | Linh    |

**Giải thích**:

- Hải chỉ có thể rút 1 hoặc 4. Dù rút cách nào thì Linh cũng có thể rút sao cho **N** giảm còn 0. Linh thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 6     | Hai    |

**Giải thích**:

- Hải rút 4, **N** giảm còn 2. Linh rút 1, **N** giảm còn 1. Hải rút 1, **N** giảm còn 0. Hải thắng.

# Trò chơi rút số (4)

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**.

- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** là luỹ thừa tự nhiên của cơ số 2 (Các số 1, 2, 4, 8,...). 
Khi rút được số **x**, số **N** sẽ giảm đi **x**.

- Người chơi nào có thể rút được số cuối cùng bằng 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **N** (1 ≤ **N** ≤ 10<sup>5</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 3     | Linh    |

**Giải thích**:

- Hải chỉ có thể rút 1 hoặc 2. Dù rút cách nào thì Linh cũng có thể rút sao cho **N** giảm còn 0. Linh thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 6     | Hai    |

**Giải thích**:

- Hải rút 4, **N** giảm còn 2. Linh rút chỉ có thể rút 1, **N** giảm còn 1. Hải rút 1, **N** giảm còn 0. Hải thắng.

# Trò chơi rút số (5)

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**.

- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** là số nguyên tố. Khi rút được số **x**, số **N** sẽ giảm đi **x**.

- Người chơi nào có thể rút được số cuối cùng bằng 0 hoặc 1 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **N** (2 ≤ **N** ≤ 10<sup>4</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 4     | Hai    |

**Giải thích**:

- Hải rút 3, **N** giảm còn 1. Hải thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 9     | Linh    |

**Giải thích**:

- Hải rút 2, **N** giảm còn 7. Linh rút 7, **N** giảm còn 0. Linh thắng.
- Hải rút 3, **N** giảm còn 6. Linh rút 5, **N** giảm còn 1. Linh thắng.
- Hải rút 5, **N** giảm còn 4. Linh rút 3, **N** giảm còn 1. Linh thắng.
- Hải rút 7, **N** giảm còn 2. Linh rút 2, **N** giảm còn 0. Linh thắng.

