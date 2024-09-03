# Bài 6: Dãy số tăng dần

Cho một dãy số nguyên. Hãy kiểm tra xem dãy số đó có phải là dãy số tăng dần không.

*Dãy số tăng dần là dãy số mà số sau lớn hơn số trước.*

Nếu dãy số là dãy số tăng dần thì in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên (-10<sup>9</sup> ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | YES |

**Giải thích:**

- Dãy số này là dãy số tăng dần.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 2 | NO |

**Giải thích:**

- Dãy số này không phải là dãy số tăng dần.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề

Làm được 100% số test thì mới hoàn thành bài này.