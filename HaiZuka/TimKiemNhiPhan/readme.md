## Vị trí của phần tử

Cho một dãy số nguyên a **đã sắp xếp tăng dần** gồm n phần tử và một số nguyên x. Hãy viết chương trình tìm vị trí đầu tiên của phần tử x trong dãy a. Nếu x không tồn tại trong dãy a, in ra -1.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>)

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (|a<sub>i</sub>| ≤ 10<sup>9</sup>)

- Dòng thứ 3 chứa số nguyên q (1 ≤ q ≤ 10<sup>6</sup>) - số lượng truy vấn

- Mỗi dòng trong q dòng tiếp theo chứa một số nguyên x (|x| ≤ 10<sup>9</sup>) - số cần tìm trong dãy a

**Đầu ra**:

- In ra q dòng, mỗi dòng chứa vị trí của phần tử x trong dãy a. Nếu x không tồn tại trong dãy a, in ra -1.

**Ví dụ**:

| Input | Output |
|:---|:---|
| 5 <br> 2 2 2 3 7 <br> 3 <br> 2 <br> 4 <br> 7 | 1 <br> -1 <br> 5 |

**Giải thích**:
- Trong truy vấn thứ nhất, số 2 xuất hiện ở vị trí thứ nhất trong dãy a (có nhiều ví trí sẽ in ra vị trí đầu tiên)
- Trong truy vấn thứ hai, số 4 không tồn tại trong dãy a
- Trong truy vấn thứ ba, số 7 xuất hiện ở vị trí thứ 5 trong dãy a

## Phần tử lớn hơn và nhỏ hơn

Cho một dãy số nguyên **a** đã **sắp xếp tăng dần** gồm n phần tử và một số nguyên **x**. Hãy viết chương trình tìm vị trí của phần tử cuối cùng nhỏ hơn **x** và phần tử đầu tiên lớn hơn **x** trong dãy **a**. 

**Đầu vào**:

- Dòng đầu tiên chứa 2 số nguyên n (1 ≤ n ≤ 10<sup>5</sup>)

