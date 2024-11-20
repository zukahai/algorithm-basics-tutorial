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
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (|a<sub>i</sub>| ≤ 10<sup>9</sup>)
- Dòng thứ ba chứa số nguyên q (1 ≤ q ≤ 10<sup>5</sup>) - số lượng truy vấn
- Mỗi dòng trong q dòng tiếp theo chứa một số nguyên x (|x| ≤ 10<sup>9</sup>) - số cần tìm trong dãy a

**Đầu ra**:

- In ra q dòng, mỗi dòng chứa 2 số nguyên là vị trí của phần tử cuối cùng nhỏ hơn **x** và phần tử đầu tiên lớn hơn **x** trong dãy **a**. Nếu không tồn tại phần tử nào nhỏ hơn **x** -1, nếu không tồn tại phần tử nào lớn hơn **x** in ra -1.

**Ví dụ**:

| Input | Output |
|:---|:---|
| 5 <br> 2 3 5 7 9 <br> 4 <br> 4 <br> 7 <br> 20 <br> 2| 2 3 <br> 3 5 <br> 5 -1 <br> -1 2 |

## Cửa hàng bán bút

Một cửa hàng bán bút vừa khai trương, đang có chương trình khuyến mãi.
Cứ mua **a** bút, khách hàng sẽ được tặng **b** bút. Một khách hàng muốn có đủ **n** bút, hỏi cần phải mua ít nhất bao nhiêu bút để có đủ **n** bút.

**Đầu vào**:

- Dòng đầu tiên chứa 3 số nguyên a, b, n (1 ≤ a, b, n ≤ 10<sup>9</sup>)

**Đầu ra**:

- In ra số bút ít nhất cần mua để có đủ **n** bút.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:---|:---|
| 3 2 10 | 6 |

**Giải thích**:

Mua 6 bút, sẽ được tặng 4 bút, tổng cộng có 10 bút.

**Ví dụ 2**:

| Input | Output |
|:---|:---|
| 2 1 10 | 7 |

**Giải thích**:

Mua 6 bút, sẽ được tặng 3 bút, tổng cộng có 9 bút. Mua thêm 1 bút nữa, tổng cộng có 10 bút.

## Tìm đỉnh trong dãy số

Cho một mảng số nguyên **a** gồm n phần tử. Một phần tử được gọi là đỉnh nếu nó lớn hơn hoặc bằng các phần tử liền kề với nó. Hãy tìm một đỉnh bất kỳ trong mảng.

**Đầu vào**:
- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>)
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (|a<sub>i</sub>| ≤ 10<sup>9</sup>)

**Đầu ra**:
- In ra vị trí của một đỉnh bất kỳ trong mảng (vị trí tính từ 1)

**Ví dụ**:

| Input | Output |
|:---|:---|
| 5 <br> 1 3 2 4 5 | 2 |

**Giải thích**:
- Trong mảng có các đỉnh ở vị trí 2 (giá trị 3) và vị trí 5 (giá trị 5)
- Ta có thể in ra bất kỳ vị trí nào trong số đó, ở đây ta chọn in ra vị trí 2

## Tìm số thiếu nhỏ nhất

Cho một mảng số nguyên **a** gồm n phần tử đã được sắp xếp tăng dần. Hãy tìm số nguyên dương nhỏ nhất không xuất hiện trong mảng.

**Đầu vào**:
- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>)
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (|a<sub>i</sub>| ≤ 10<sup>9</sup>)

**Đầu ra**:
- In ra số nguyên dương nhỏ nhất không xuất hiện trong mảng

**Ví dụ**:

| Input | Output |
|:---|:---|
| 5 <br> 1 2 3 5 6 | 4 |

**Giải thích**:
- Các số nguyên dương xuất hiện trong mảng là: 1, 2, 3, 5, 6
- Số nguyên dương nhỏ nhất không xuất hiện trong mảng là 4
