# Giá trị trong bảng số nguyên dương

Cho một bảng số nguyên gồm **m** hàng và **n** cột. Ở hàng thứ **i** và cột thứ **j** của bảng số nguyên, ta có số giá trị là **i * j**.

Ví dụ, với **m = 4** và **n = 6**, ta có bảng số nguyên như sau:

| 1 | 2 | 3 | 4 | 5 | 6 |
|:---:|:---:|:---:|:---:|:---:| :---:|
| **2** | **4** | **6** | **8** | **10** | **12** |
| **3** | **6** | **9** | **12** | **15** | **18** |
| **4** | **8** | **12**| **16** | **20** | **24** |

Nhiệm vụ của bạn là đếm xem trong bảng số nguyên trên có bao nhiêu giá trị là số nguyên có gì trị là **k**.

**Đầu vào**:

- Dòng đầu tiên chứa 3 số nguyên **m**, **n** và **k** (1 ≤ **m**, **n** ≤ 10<sup>9</sup>, 1 ≤ **k** ≤ 10<sup>12</sup>).

**Đầu ra**:

- In ra số lượng giá trị là số nguyên có giá trị là **k**.

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 4 6 6 | 3 |

**Giải thích**:

Trong bảng số có kích thước 4x6, có 3 giá trị số nguyên có giá trị là 6

**Subtask**:

- **Subtask 1 (50%)**: 1 ≤ **m**, **n** ≤ 10<sup>3</sup>, 1 ≤ **k** ≤ 10<sup>3</sup>.
- **Subtask 2 (50%)**: Không có giới hạn gì thêm.

# Số lượng số có 5 ước số tự nhiên

Số **x** được gọi là ước số tự nhiên của số **y** nếu **y** chia hết cho **x**. Ví dụ, 1, 2, 3, 4, 6 và 12 là ước số tự nhiên của 12.

Cho trước 2 số nguyên **a** và **b**. Nhiệm vụ của bạn là đếm xem có bao nhiêu số có đúng 5 ước số tự nhiên trong đoạn từ **a** đến **b**.

**Đầu vào**:

- Dòng đầu tiên chứa 2 số nguyên **a** và **b** (1 ≤ **a** ≤ **b** ≤ 10<sup>18</sup>).

**Đầu ra**:

- In ra số lượng số có đúng 5 ước số tự nhiên trong đoạn từ **a** đến **b**.

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 10 20 | 1 |

**Giải thích**:

Có duy nhất số 16 có đúng 5 ước số tự nhiên trong đoạn từ 10 đến 20.

**Subtask**:

- **Subtask 1 (50%)**: 1 ≤ **a** ≤ **b** ≤ 10<sup>3</sup>.
- **Subtask 2 (50%)**: Không có giới hạn gì thêm.



# Số cặp số gấp đôi trong dãy

Số **a** và **b** được gọi là số gấp đôi nếu **a** = 2 * **b** hoặc **b** = 2 * **a**. Cho một dãy số gồm **n** số nguyên.

Cho trước một dãy số gồm **n** số nguyên. Nhiệm vụ của bạn là đếm xem trong dãy số trên có bao nhiêu a[i] và a[j] (i < j) là số gấp đôi.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (2 ≤ **n** ≤ 10<sup>6</sup>).
- Dòng thứ 2 chứa **n** số nguyên **a[1]**, **a[2]**, ..., **a[n]** (-10<sup>9</sup> ≤ **a[i]** ≤ 10<sup>9</sup>).

**Đầu ra**:

- In ra số lượng cặp số gấp đôi trong dãy số.

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 5<br>1 3 2 6 4 | 3 |

**Giải thích**:

Có 3 cặp số gấp đôi trong dãy số trên là (1, 2), (2, 4) và (3, 6).

**Subtask**:

- **Subtask 1 (50%)**: 2 ≤ **n** ≤ 10<sup>3</sup>.
- **Subtask 2 (50%)**: Không có giới hạn gì thêm.

# Dãy con chính phương lẻ tăng dần

Một số được gọi là số chính phương nếu nó là bình phương của một số nguyên. Ví dụ, 1, 4, 9, 16, 25, ... là các số chính phương.

Cho một dãy số gồm **n** số nguyên. Nhiệm vụ của bạn là tìm dãy con chính phương lẻ tăng dần dài nhất trong dãy số trên. Dãy con có thể không cần phải liên tiếp.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>4</sup>).

- Dòng thứ 2 chứa **n** số nguyên **a[1]**, **a[2]**, ..., **a[n]** (-10<sup>9</sup> ≤ **a[i]** ≤ 10<sup>9</sup>).

**Đầu ra**:

- In ra độ dài dãy con chính phương lẻ không giảm dài nhất trong dãy số trên.

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 6<br>1 49 3 9 5 25 | 3 |

**Giải thích**:

Dãy con chính phương lẻ không giảm dài nhất trong dãy số trên là (1, 9, 25).

# Số lượng tích lớn hơn giá trị k

Cho một dãy số gồm **n** số nguyên dương. Nhiệm vụ của bạn là đếm xem trong dãy số trên có bao nhiêu cặp số (i, j) sao cho **a[i] * a[j] > k** (i < j).

**Đầu vào**:

- Dòng đầu tiên chứa 2 số nguyên **n** và **k** (1 ≤ **n** ≤ 10<sup>6</sup>, 1 ≤ **k** ≤ 10<sup>18</sup>).
- Dòng thứ 2 chứa **n** số nguyên **a[1]**, **a[2]**, ..., **a[n]** (1 ≤ **a[i]** ≤ 10<sup>9</sup>).

**Đầu ra**:

- In ra số lượng cặp số (i, j) sao cho **a[i] * a[j] > k** (i < j).

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 5 4<br>3 7 1 4 2 | 7 |

**Giải thích**:

Có 7 cặp số có tích lơn hơn 4 là (3, 7), (7, 1), (3, 2), (4, 2), (7, 2), (3, 4), (7, 4).

**Subtask**:

- **Subtask 1 (50%)**: 1 ≤ **n** ≤ 10<sup>3</sup>

- **Subtask 2 (50%)**: Không có giới hạn gì thêm.

# Số fibonacci thứ n

Dãy Fibonacci được định nghĩa như sau:

- F<sub>1</sub> = 1
- F<sub>2</sub> = 1
- F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub> với mọi n ≥ 3

Cho số nguyên dương **n**. Nhiệm vụ của bạn là tìm số Fibonacci thứ **n**.

Kết quả có thể rất lớn nên bạn cần in ra phần dư của số đó khi chia cho 10<sup>9</sup> + 7.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>18</sup>).

**Đầu ra**:

- In ra số Fibonacci thứ **n**.

**Ví dụ**:

| Đầu vào | Đầu ra |
|:---|:---|
| 6 | 8 |