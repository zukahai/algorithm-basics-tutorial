# Bài 1: Con thỏ (Phần 2)

Một con thỏ đang ở vị trí 0. Tại mỗi bước, nó có thể nhảy sang phải 1, 2 hoặc 3 đơn vị. Tại mỗi vị trí sẽ có một số nguyên mà con thỏ sẽ nhặt lên. Hãy tìm cách nhảy để con thỏ nhặt được tổng số lớn nhất. In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

**Input:**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ 2 chứa N số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>N</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output:**

- In ra tổng số lớn nhất mà con thỏ có thể nhặt được khi nhảy đến vị trí cuối cùng.

- Dòng thứ 2 in ra các số mà con thỏ nhặt được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 8<br>1 -2 -1 4 -1 -3 -2 5 | 9 <br> 1 4 -1 5 |


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


# Bài 3: Phần thưởng

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