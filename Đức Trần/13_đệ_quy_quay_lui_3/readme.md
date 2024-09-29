# Chuỗi ngoặc đúng

Một chuỗi **s** được gọi là chuỗi ngoặc đúng nếu

- **s** là chuỗi rỗng
- **s** là chuỗi dạng **(s1)** với **s1** là chuỗi ngoặc đúng
- **s** là chuỗi dạng **s1s2** với **s1** và **s2** là chuỗi ngoặc đúng

Ví dụ: `(()())`, `()()()`, `((()))`, `()`, `((()()))`

Cho trước một số **n**. Hãy liệt kê tất cả các chuỗi ngoặc đúng có độ dài **2 * n**.

**Input**:

- Một dòng duy nhất chứa số nguyên **n** (1 ≤ **n** ≤ 10)

**Output**:

- Mỗi dòng chứa một chuỗi ngoặc đúng theo thứ tự từ điển tăng dần

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 1     | ()   |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 2     | (())<br>()()   |

# Biến đổi số

Một số **x** có thể biến đổi thành số **y** theo các bước sau:

- Từ **x** có thể biến đổi thành **2x** hoặc **3x + 1**

Cho trước số **n**, hãy đếm xem có bao nhiêu các biến đổi từ số **1** để có được số **n**.

**Input**:

- Một dòng duy nhất chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6<sup>)

**Output**:

- Một dòng duy nhất chứa số lượng bước biến đổi từ số **1** để có được số **n**

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 2     | 1   |

**Giải thích**: 
Chỉ có 1 cách biến đổi từ số **1** để có được số **2** là **1 -> 2**

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 8     | 2   |

**Giải thích**:

Có 2 cách biến đổi từ số **1** để có được số **4**:
- **1 -> 2 -> 4 -> 8**
- **1 -> 4 -> 8**

