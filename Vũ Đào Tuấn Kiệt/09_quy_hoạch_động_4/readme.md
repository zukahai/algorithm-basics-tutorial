## Bài 1: Con chuột chũi

Một hang động rộng lớn được chia thành một lưới ô vuông kích thước **m** x **n**. Một con chuột bắt đầu từ ô (1, 1) và muốn đi đến ô (**m**, **n**). Con chuột có thể di chuyển sang bên phải hoặc xuống dưới mỗi lần. Mỗi ô có một số nguyên dương ghi trên đó, khi đi qua ô đó, con chuột sẽ nhận được số kẹo tương ứng. Hãy tìm cách để con chuột nhận được tổng số kẹo lớn nhất.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên **m**, **n** (1 ≤ **n**, **m** ≤ 10<sup>4<sup>)

- **n** dòng tiếp theo, mỗi dòng chứa **m** số nguyên **a<sub>ij</sub>** (1 ≤ **a<sub>ij</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là tổng số kẹo lớn nhất mà con chuột có thể nhận được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 3 3<br> 1 3 2<br> 2 4 3<br> 3 2 5 | 16 |

**Giải thích:**

Con chuột sẽ đi theo đường đi<br> 
(1, 1) → (1, 2) → (2, 2) → (2, 3) → (3, 3)<br>Và nhận được tổng số kẹo là 16.


## Bài 2: Tên trộm

Có nhiều món đồ giá trị trong một cửa hàng. Các một đồ được sắp xếp trên **m** hàng, mỗi hàng chứa **n** món đồ. Mỗi món đồ có giá trị là một số nguyên dương. Tên trộm xuất phát ở một ô ở cột 1 và kết thúc ở cột **n**. Tại ô **(x, y)** tên trộm có thể di chuyển qua ô **(x, y+1)**, **(x-1, y+1)** hoặc **(x+1, y+1)**. Hãy tìm cách để tên trộm có thể lấy được tổng giá trị lớn nhất của các món đồ mà tên trộm có thể lấy được.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên **m**, **n** (1 ≤ **m**, **n** ≤ 10<sup>4<sup>)
- **m** dòng tiếp theo, mỗi dòng chứa **n** số nguyên **a<sub>ij</sub>** (1 ≤ **a<sub>ij</sub>** ≤ 10<sup>9</sup>)

**Output:**

- Một số nguyên duy nhất là tổng giá trị lớn nhất mà tên trộm có thể lấy được.

**Ví dụ:**

| Input | Output |
|:-------|:--------|
| 4 4<br> 9 3 2 1<br> 5 4  2 2<br> 3 2 5 6 <br> 1 2 20 9| 36 |

**Giải thích:**

Tên trộm sẽ đi theo đường đi<br> 
(2, 1) → (3, 2) → (4, 3) → (4, 4)<br>Và nhận được tổng giá trị là 36.