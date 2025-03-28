## Số siêu lẻ lớn nhất

Số siêu lẻ lớn nhất là số mà có tất cả các chữ số đều lẻ.

Hãy tìm số siêu lẻ lớn nhất nhỏ hơn hoặc bằng **n**.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>1000</sup>).

**Đầu ra:**

- Số siêu lẻ lớn nhất nhỏ hơn hoặc bằng **n**.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:---|:---|
|20 | 19 |

**Ví dụ 2:**

| Input | Output |
|:---|:---|
|95 | 95 |


## Subtest

- **Subtask 1 (20 điểm)**: 1 ≤ **n** ≤ 10<sup>7</sup>.
- **Subtask 2 (20 điểm)**: 1 ≤ **n** ≤ 10<sup>18</sup>.
- **Subtask 3 (60 điểm)**: 1 ≤ **n** ≤ 10<sup>1000</sup>.

## Số siêu lẻ đặc biệt

**Số siêu lẻ đặc biệt** là số mà có tất cả các chữ số đều lẻ tổng các chữ số của số đó cũng là số lẻ.

Ví dụ: 135 là số siêu lẻ đặc biệt vì có tất cả các chữ số đều lẻ và tổng các chữ số của số đó cũng là số lẻ.

Hãy tìm danh số siêu lẻ đặc biệt nhỏ hơn hoặc bằng **n**.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>10</sup>).

**Đầu ra:**

- Danh sách các số siêu lẻ đặc biệt nhỏ hơn hoặc bằng **n** theo thứ tự tăng dần, mỗi số cách nhau bởi dấu cách.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:---|:---|
|20 | 1 3 5 7 9|

**Ví dụ 2:**

| Input | Output |
|:---|:---|
|120 | 1 3 5 7 9 111 113 115 117 119 |

## Subtest

- **Subtask 1 (40 điểm)**: 1 ≤ **n** ≤ 10<sup>7</sup>.
- **Subtask 2 (60 điểm)**: 1 ≤ **n** ≤ 10<sup>10</sup>.

## Ký tự thứ N trong chuỗi số siêu đối xứng

Một số được gọi là siêu đối xứng là số khi hoán vị các chữ số của nó vẫn giữ nguyên. Ví dụ, 111, 2222, 33333, ... là các số siêu đối xứng.

Chuỗi **S** được tạo ra từ việc liệt kê các số siêu đối xứng theo thứ tự tăng dần.

S = "123456789112233445566778899111222...".

Hãy tìm ký tự thứ **N** trong chuỗi **S**.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên **N** (1 ≤ **N** ≤ 10<sup>18</sup>).

**Đầu ra:**

- Ký tự thứ **N** trong chuỗi **S**.

**Ví dụ:**

| Input | Output |
|:---|:---|
|20 | 6 |

Ký tự thứ 20 trong chuỗi S là 2.

S = "1234567891122334455**6**6778899111222...".
