## Bài 1: Giá trị của cờ

Cho trước một số nguyên dương **n** và một dãy số gồm **n** số nguyên không âm. Mỗi số trong dãy số này có giá trị từ 0 đến 9. 
Ban đầu, ta có một cờ có giá trị bằng 0, nếu trong dãy có giá trị là 0 thì cờ sẽ có giá trị là 1. Hãy in ra giá trị của cờ sau khi thực hiện xong dãy số.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên không âm, mỗi số không vượt quá 9.

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 4 <br> 0 1 2 3 | 1 |

**Giải thích:**

- Ban đầu cờ có giá trị là 0, sau khi thực hiện dãy số thì cờ sẽ có giá trị là 1 vì trong dãy số có giá trị là 0.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 0 |

**Giải thích:**

- Ban đầu cờ có giá trị là 0, sau khi thực hiện dãy số thì cờ sẽ có giá trị là 0 vì trong dãy số không có giá trị là 0.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề bài