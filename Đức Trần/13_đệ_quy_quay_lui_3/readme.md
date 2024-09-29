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

