## Bài 1: Vị trí của phần tử

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

## Bài 2: Phần tử lớn hơn và nhỏ hơn

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

## Bài 3: Cửa hàng bán bút

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

## Bài 4: Số dãy ghế tối thiểu

Một rạp chiếu phim có kết cấu rất độc lạ. Có **m** dãy ghế. Dãy ghế thứ 1 có 1 ghế ngồi, dãy ghế thứ 2 có 2 ghế ngồi, ..., dãy ghế thứ **m** có **m** ghế ngồi.

Chủ rạp phim muốn tính toán cần xây ít nhất bao nhiêu dãy ghế để có đủ **n** ghế ngồi.

**Đầu vào**:

- Dòng đầu tiên chứa  số nguyên n (1 ≤ n ≤ 10<sup>18</sup>)

**Đầu ra**:

- In ra số dãy ghế ít nhất cần xây.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:---|:---|
| 10 | 4 |

**Giải thích**:

Cần xây 4 dãy ghế: dãy 1 (1 ghế), dãy 2 (2 ghế), dãy 3 (3 ghế), dãy 4 (4 ghế). Tổng cộng có 10 ghế.

**Ví dụ 2**:

| Input | Output |
|:---|:---|
| 5 | 3 |

**Giải thích**:

Cần xây 3 dãy ghế: dãy 1 (1 ghế), dãy 2 (2 ghế), dãy 3 (3 ghế). Tổng cộng có 6 ghế.

## Những con gà mái

Một trang trại có **n** con gà mái, mỗi còn gà sẽ có thời gian để trứng là a<sub>i</sub>. Nghĩa là sau một khoảng thời gian là a<sub>i</sub> thì con gà sẽ đẻ một quả trứng. Giả sử trong đề rằng con gà mái sẽ đẻ trứng liên tục không ngừng nghỉ.

Hỏi sau ít nhất bao lâu thì trang trại sẽ có đủ **m** quả trứng.

**Đầu vào**:

- Dòng đầu tiên chứa 2 số nguyên n, m (1 ≤ n ≤ 10<sup>5</sup>, 1 ≤ m ≤ 10<sup>18</sup>)

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

**Đầu ra**:

- In ra thời gian ít nhất cần phải chờ để có đủ **m** quả trứng.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:---|:---|
| 3 7 <br> 1 2 3 | 4 |

**Giải thích**:

- Sau 4 giây
    - Gà mái thứ nhất sẽ đẻ 4 quả trứng.
    - Gà mái thứ hai sẽ đẻ 2 quả trứng.
    - Gà mái thứ ba sẽ đẻ 1 quả trứng.

**Ví dụ 2**:

| Input | Output |
|:---|:---|
| 3 10 <br> 10 5 8 | 25 |



