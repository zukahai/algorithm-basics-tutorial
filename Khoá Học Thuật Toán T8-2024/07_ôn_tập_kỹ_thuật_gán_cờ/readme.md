## Bài 1: Số chia hết cho 5

Cho một số nguyên dương **n**, bạn được phép xoá bất kỳ chữ các chữ số trong n để tạo ra một số nguyên dương mới. Hãy tìm số lớn nhất chia hết cho 5 mà bạn có thể tạo ra từ cách xoá chữ số.

Nếu không thể tạo ra số nào chia hết cho 5, hãy trả về -1.

**Đầu vào:**

- Số nguyên dương **n** (1 ≤ n ≤ 10<sup>100</sup>).

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 159 | 15 |

**Giải thích:**

- Bạn có thể tạo ra số 15 từ cách xoá chữ số 9.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 12039 | 120 |

**Giải thích:**

- Bạn có thể tạo ra số 120 từ cách xoá chữ số 3 và 9.

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
|524 | -1 |

**Giải thích:**

- Không có cách nào để tạo ra số chia hết cho 5 từ cách xoá chữ số.

## Bài 2: Dãy hoán vị

Kiểm tra xem dãy **n** có chứa tất cả các số từ 1 đến **n** không, mỗi số đúng một lần. Nếu có, in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Số nguyên dương **n** (1 ≤ n ≤ 10<sup>5</sup>).
- **n** số nguyên **a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub>** (1 ≤ a<sub>i</sub> ≤ n).

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 4 5 | YES |

**Giải thích:**

- Dãy đã chứa tất cả các số từ 1 đến 5.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 5 1 | NO |

**Giải thích:**

- Dãy không chứa tất cả các số từ 1 đến 5.

## Bài 3: Chuỗi in hoa

Cho một chuỗi **s** gồm các ký tự bất kỳ, hãy kiểm tra xem chuỗi **s** có phải tất cả các ký tự đều in hoa không. Nếu có, in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Chuỗi **s** (1 ≤ |s| ≤ 10<sup>5</sup>).

**Đầu ra:**

- In ra "YES" nếu chuỗi **s** chứa tất cả các ký tự in hoa, ngược lại in ra "NO".

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| ABC | YES |

**Giải thích:**

- Chuỗi **s** chỉ chứa các ký tự in hoa.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| AbC | NO |

**Giải thích:**

- Chuỗi **s** không chứa tất cả các ký tự in hoa.

## Bài 4: Chiều cao

Có **n** cây cột được xếp thành 1 hàng ngang, cột thứ **i** có chiều cao là **a<sub>i</sub>**. Để đảm tính thẩm mỹ, chiều cao các cột cạnh nhau không chênh lệch nhau quá 2 đơn vị. Hãy kiểm tra xem có thể cắt bớt một số cột để đảm bảo điều kiện trên hay không.

In ra "YES" nếu có thể cắt bớt, ngược lại in ra "NO".

**Đầu vào:**

- Số nguyên **n** (1 ≤ n ≤ 10<sup>5</sup>).

- **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 4 6 | YES |

**Giải thích:**

- Chiều cao của các cột cạnh nhau không chênh lệch nhau quá 2 đơn vị.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 2 4 7 | NO |

**Giải thích:**

- Chiều cao của 2 cột cuối cùng chênh lệch nhau 3 đơn vị.



