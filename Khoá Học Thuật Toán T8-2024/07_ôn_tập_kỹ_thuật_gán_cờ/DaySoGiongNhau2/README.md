# Bài 5: Dãy số giống nhau

Cho một dãy số nguyên. Bạn có quyền xoá nhiều nhất 1 số trong dãy số đó (có thể không xoá)

Hãy kiểm tra xem có thể tạo ra một dãy số mà tất cả các số trong dãy số đều giống nhau hay không.

Nếu có thể tạo ra thì in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên (-10<sup>9</sup> ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 2 1 1 | YES |

**Giải thích:**

- Xoá số 2 trong dãy số, ta được dãy số mới là [1, 1, 1, 1]. Tất cả các số trong dãy số đều giống nhau.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 2 2 1 | NO |

**Giải thích:**

- Không thể tạo ra dãy số mà tất cả các số trong dãy số đều giống nhau.

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | YES |

**Giải thích:**

- Dãy số đã giống nhau từ đầu.