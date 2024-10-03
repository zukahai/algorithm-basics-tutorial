# Bài 1: Con thỏ

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1, 2 đơn vị. Tại mỗi vị trí sẽ có một số nguyên mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output:**

- In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 7<br>2 -1 3 -1 -7 8 1 | 13     |

**Giải thích:**

Cách nhảy:<br>Các vị trí: 0 → 2 → 3 → 5 → 6. Tổng số lớn nhất: 2 + 3 -1 + 8 + 1 = 13.

# Bài 2: Dãy con tăng dài nhất

Cho dãy số a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub>. Hãy tìm dãy con tăng dài nhất của dãy số đó (các phần tử không nhất thiết phải liên tiếp nhau).
Nếu có nhiều dãy con tăng cùng độ dài, hãy in ra dãy con tăng đầu tiên.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 5x10<sup>4</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**

- In ra dãy con tăng dài nhất của dãy số đó. Nếu có nhiều dãy con tăng cùng độ dài, hãy in ra dãy con tăng đầu tiên.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 10<br>4 6 1 3 2 3 9 7 8 3 |  1 2 3 7 8 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 3<br>9 2 1 | 9 |

# Bài 3: Dãy con chính phương tăng dài nhất

Cho dãy số a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub>. Hãy tìm dãy con chứa các số chính phương tăng dài nhất của dãy số đó (các phần tử không nhất thiết phải liên tiếp nhau). 

Nếu có nhiều dãy con tăng cùng độ dài, hãy in ra dãy con tăng đầu tiên. Nếu không có số chính phương nào, hãy in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>4</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**

- In ra dãy con chứa các số chính phương tăng dài nhất của dãy số đó.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 10<br>4 6 1 3 2 3 9 7 16 3 |  4 9 16|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 3<br>9 2 7 | -1 |



# Bài 4: Phần thưởng

Một công ty tổ chức một chương trình khuyến mãi. Công ty sẽ tặng phần thưởng cho những khách hàng mua hàng trong một ngày. Công ty có **n** phần quà để tặng, mỗi phần quà có giá trị là một số nguyên dương. Công ty cho phép bạn chọn bất kỳ các món quà nhưng với điều kiện không chọn hai món quà liên tiếp. Hãy tìm cách chọn các món quà sao cho tổng giá trị của các món quà chọn được là lớn nhất.

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>4</sup>)

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (-10<sup>9</sup> ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là tổng giá trị lớn nhất của các món quà chọn được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 6<br> 1 -2 3 9 5 4 | 14 |

**Giải thích:**

Có thể chọn các món quà  1, 9 và 4, tổng giá trị là 14.

# Bài 5: Con chuột chũi

Một hang động rộng lớn được chia thành một lưới ô vuông kích thước **n** x **m**. Một con chuột bắt đầu từ ô (1, 1) và muốn đi đến ô (**n**, **m**). Con chuột có thể di chuyển sang bên phải hoặc xuống dưới mỗi lần. Mỗi ô có một số nguyên dương ghi trên đó, khi đi qua ô đó, con chuột sẽ nhận được số kẹo tương ứng. Hãy tìm cách để con chuột nhận được tổng số kẹo lớn nhất.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên **n**, **m** (1 ≤ **n**, **m** ≤ 10<sup>3<sup>)

- **n** dòng tiếp theo, mỗi dòng chứa **m** số nguyên **a<sub>ij</sub>** (-10<sup>9</sup> ≤ **a<sub>ij</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là tổng số kẹo lớn nhất mà con chuột có thể nhận được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 3 3<br> 1 0 2<br> 2 4 3<br> 3 2 5 | 15 |

**Giải thích:**

Con chuột sẽ đi theo đường đi<br> 
(1, 1) → (2, 1) → (2, 2) → (2, 3) → (3, 3)<br>Và nhận được tổng số kẹo là 15.

# Bài 6: Bài toán đổi tiền

Một ngân hàng có **n** loại tiền giấy với các mệnh giá khác nhau. Bạn cần đổi một số tiền **m** bằng cách sử dụng số tờ tiền ít nhất. Hãy xác định số tờ tiền cần thiết. Nếu không thể đổi được số tiền **m** bằng các tờ tiền có sẵn, in ra -1.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:

- Dòng đầu tiên chứa 2 số nguyên **n** và **m** (1 ≤ **n** ≤ 100, 1 ≤ **m** ≤ 10<sup>4<sub>),

- Dòng thứ 2 chứa **n** số nguyên **a1**, **a2**, . . ., **an** (1 ≤ **ai** ≤ 10<sup>4<sub>) - mệnh giá của các loại tiền.

**Kết quả**: Số tờ tiền ít nhất để đổi số tiền là **m**

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
|4 11<br> 1 2 3 4 | 3 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
|4 24<br> 1 2 8 10 | 3  |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
|2 100<br> 10 1 | 10 |

**Ví dụ 4**:

| Input | Output |
|:-------|:--------|
|3 5<br> 2 4 6 | -1 |