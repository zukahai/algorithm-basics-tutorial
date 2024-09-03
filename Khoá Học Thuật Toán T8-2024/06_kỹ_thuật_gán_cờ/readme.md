# Bài 1: Giá trị của cờ

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

Làm được 100% số test thì mới hoàn thành bài này.


# Bài 2: Các số chẵn trong dãy

Cho trước một số nguyên dương **n** và một dãy số gồm **n** số nguyên. Hãy in ra các số chẵn trong dãy số đó. Nếu không có số chẵn nào thì in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên, (-10<sup>3</sup> ≤ **a<sub>i</sub>** ≤ 10<sup>3</sup>).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 2 4 |

**Giải thích:**

- Các số chẵn trong dãy số là 2 và 4.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 5 7 9 | -1 |

**Giải thích:**

- Không có số chẵn nào trong dãy số.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề 

Làm được 100% số test thì mới hoàn thành bài này.

# Bài 3: Dãy số may mắn

Một dãy số được gọi là *dãy số may mắn* nếu dãy đó chỉ chứa tất cả các số 4 hoặc 7. Hãy kiểm tra xem một dãy có phải là dãy số may mắn không.

Nếu dãy số là dãy số may mắn thì in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên (-100 ≤ **a<sub>i</sub>** ≤ 100).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 4 <br> 4 7 4 7 | YES |

**Giải thích:**

- Dãy số này chỉ chứa các số 4 và 7 nên là dãy số may mắn

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 4 7 4 7 8 | NO |

**Giải thích:**

- Dãy số này không chỉ chứa các số 4 và 7 nên không phải

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề

Làm được 100% số test thì mới hoàn thành bài này.

# Bài 4: Dãy số nguyên tố

Cho một dãy số nguyên. In ra các số nguyên tố trong dãy số đó. Nếu không có số nguyên tố nào thì in ra "NO".

*Số nguyên tố là số nguyên dương có đúng 2 ước là 1 và chính nó.*

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>5</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên (-100 ≤ **a<sub>i</sub>** ≤ 100).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 5 7 9 | 3 5 7 |

**Giải thích:**

- Các số nguyên tố trong dãy số là 3, 5, 7.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 4 6 8 9 | NO |

**Giải thích:**

- Không có số nguyên tố nào trong dãy số.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề

Làm được 100% số test thì mới hoàn thành bài này.

# Bài 5: Dãy số giống nhau

Cho một dãy số nguyên. Hãy kiểm tra xem có phải tất cả các số trong dãy số đó đều giống nhau không.

Nếu tất cả các số trong dãy số đều giống nhau thì in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>6</sup>), là số lượng số trong dãy số.

- Dòng thứ hai chứa **n** số nguyên (-10<sup>9</sup> ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | YES |

**Giải thích:**

- Tất cả các số trong dãy số đều giống nhau.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | NO |

**Giải thích:**

- Không phải tất cả các số trong dãy số đều giống nhau.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ
- **4%** số test còn lại có giá trị lớn như trong đề

Làm được 100% số test thì mới hoàn thành bài này.


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

# Bài 7: Các ước số chẵn

Cho một số nguyên dương **n**. Hãy in ra các ước số chẵn của số đó (theo thứ tự tăng dần). Nếu không có ước số chẵn nào thì in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương **n** (1 ≤ **n** ≤ 10<sup>12</sup>), là số cần tìm ước số chẵn.

**Đầu ra:**

- In ra các ước số chẵn của số **n** (theo thứ tự tăng dần). Nếu không có ước số chẵn nào thì in ra -1.

## Ví dụ:

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 12 | 2 4 6 12 |

**Giải thích:**

- Các ước số chẵn của 12 là 2, 4, 6, 12.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 15 | -1 |

**Giải thích:**

- Không có ước số chẵn nào của 15.

## Subtest:

Để hạn chế sử dụng quá nhiều bộ nhớ của hệ thông thì:

- **96%** số test có giá trị rất nhỏ

- **4%** số test còn lại có giá trị lớn như trong đề

Làm được 100% số test thì mới hoàn thành bài này.