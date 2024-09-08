## Bài 1: Số các chọn

Bạn cần **N** đồng xu để mua một món đồ. Mỗi ngày bạn có thể nhận được 1, 2 hoặc 3 đồng xu. Hãy xác định số cách bạn có thể nhận được **N** đồng xu. 

Kết quả có thể rất lớn nên bạn cần in ra số dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Input:**

- Dòng đầu tiên chứa số nguyên **N** (1 ≤ **N** ≤ 10<sup>6</sup>)

**Output:**

- In ra số cách bạn có thể nhận được **N** đồng xu. Kết quả có thể rất lớn nên bạn cần in ra số dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:------|:-------|
| 4 | 7 |

**Giải thích:**

Có 7 cách để nhận được 4 đồng xu:

- 1 + 1 + 1 + 1
- 1 + 1 + 2
- 1 + 2 + 1
- 2 + 1 + 1
- 1 + 3
- 3 + 1
- 2 + 2


## Bài 2: Con chuột chũi

Một hang động rộng lớn được chia thành một lưới ô vuông kích thước **n** x **m**. Một con chuột bắt đầu từ ô (1, 1) và muốn đi đến ô (**n**, **m**). Con chuột có thể di chuyển sang bên phải hoặc xuống dưới **nhưng đảm bảo rằng các ô mà nó đi qua phải tăng dần**.


Hãy kiểm tra rằng con chuột có thể di chuyển đến ô (**n**, **m**) và nhận được tổng số kẹo lớn nhất có thể hay không. Nếu có, hãy xác định tổng số kẹo lớn nhất mà con chuột có thể nhận được. Nếu không, in ra -1.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên **n**, **m** (1 ≤ **n**, **m** ≤ 10<sup>4<sup>)

- **n** dòng tiếp theo, mỗi dòng chứa **m** số nguyên **a<sub>ij</sub>** (1 ≤ **a<sub>ij</sub>** ≤ 10<sup>9</sup>)

**Output:**

- In ra một số nguyên duy nhất là tổng số kẹo lớn nhất mà con chuột có thể nhận được. Nếu không thể đến được ô (**n**, **m**), in ra -1.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 3 3<br> 1 3 2<br> 2 4 5<br> 3 4 6 | 18 |

**Giải thích:**

Con chuột sẽ đi theo đường đi<br> 
(1, 1) → (2, 1) → (2, 2) → (2, 3) → (3, 3)<br>Và nhận được tổng số kẹo là 18.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 3 3<br> 1 3 2<br> 2 4 5<br> 3 4 1 | -1 |

**Giải thích:**

Không có cách nào để con chuột đi đến ô (3, 3) mà các ô mà nó đi qua tăng dần.


## Bài 3: Dãy con tăng liên tiếp

Cho trước một dãy số nguyên **a<sub>0</sub>**, **a<sub>1</sub>**, ..., **a<sub>n - 1</sub>** (1 ≤ **n** ≤ 10<sup>6</sup>, 1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>). Hãy đếm xem các bao nhiêu dãy con tăng liên tiếp trong dãy số đã cho. Hai dãy gọi là khác nhau nếu chỉ số của 2 dãy không giống nhau.

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>)
- Dòng thứ 2 chứa **n** số nguyên **a<sub>0</sub>**, **a<sub>1</sub>**, ..., **a<sub>n - 1</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là số dãy con tăng liên tiếp trong dãy số đã cho.

**Ví dụ:**

| Input | Output |
|:------|:-------|
| 5<br> 1 2 1 3 4 | 9 |

**Giải thích:**

Có 9 dãy con tăng liên tiếp trong dãy số đã cho là:<br>
- Dãy a<sub>0</sub> = 1
- Dãy a<sub>1</sub> = 2
- Dãy a<sub>2</sub> = 1
- Dãy a<sub>3</sub> = 3
- Dãy a<sub>4</sub> = 4
- Dãy a<sub>0</sub>, a<sub>1</sub> = 1, 2
- Dãy a<sub>2</sub>, a<sub>3</sub> = 1, 3
- Dãy a<sub>2</sub>, a<sub>3</sub>, a<sub>4</sub> = 1, 3, 4
- Dãy a<sub>3</sub>, a<sub>4</sub> = 3, 4

Hướng dẫn: Đặt dp[k] là số dãy con tăng liên tiếp kết thúc tại vị trí k.

## Bài 4: Dãy con tăng

Cho trước một dãy số nguyên **a<sub>0</sub>**, **a<sub>1</sub>**, ..., **a<sub>n - 1</sub>** (1 ≤ **n** ≤ 10<sup>6</sup>, 1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>). 

Hãy đếm xem có bao nhiêu dãy tăng trong dãy số đã cho. Một dãy tăng là một dãy con của dãy số đã cho mà các phần tử trong dãy con đó tăng dần (không nhất thiết phải liên tiếp).

**Input:**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>4</sup>)
- Dòng thứ 2 chứa **n** số nguyên **a<sub>0</sub>**, **a<sub>1</sub>**, ..., **a<sub>n - 1</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là số dãy tăng trong dãy số đã cho.

**Ví dụ:**

| Input | Output |
|:------|:-------|
| 4<br> 1 3 2 4 | 7 |

**Giải thích:**

Có 7 dãy con tăng trong dãy số đã cho là:<br>

- Dãy a<sub>0</sub> = 1
- Dãy a<sub>0</sub>, a<sub>1</sub> = 1, 3
- Dãy a<sub>2</sub> = 2
- Dãy a<sub>0</sub>, a<sub>2</sub> = 1, 
- Dãy a<sub>3</sub> = 4
- Dãy a<sub>2</sub>, a<sub>3</sub> = 2, 4
- Dãy a<sub>0</sub>, a<sub>2</sub>, a<sub>3</sub> = 1, 2, 4








