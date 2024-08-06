## Bài 1: Tìm kiếm nhị phân

Nhập vào mảng số nguyên a[] gồm n phần tử đã sắp xếp tăng dần và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có in vị trí đầu tiên của x

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>), số phần tử của mảng a[].

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].

- Dòng thứ ba chứa số nguyên x (0 ≤ x ≤ 10<sup>9</sup>), số cần tìm.

**Output**

- Xuất ra vị trí đầu tiên của x trong mảng a[], nếu không
tồn tại xuất ra -1.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 7<br> 1 2 3 3 5 7 7<br> 3 | 2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 5<br> 2 2 2 2 2<br> 2 | 0 |

## Bài 2: Tìm kiếm nhị phân

Nhập vào mảng số nguyên a[] gồm n phần tử đã sắp xếp tăng dần và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có in vị trí cuối cùng

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>), số phần tử của mảng a[].

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].

- Dòng thứ ba chứa số nguyên x (0 ≤ x ≤ 10<sup>9</sup>), số cần tìm.

**Output**

- Xuất ra vị trí đầu tiên của x trong mảng a[], nếu không
tồn tại xuất ra -1.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 3 5<br> 3 | 3 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |


        
        10
        1 3 4 6 9 10 12 16 20 22
        200

        [0, 9] -> 4: a[4] < x
        [5, 9] -> 7: a[7] < x
        [8, 9] -> 8: a[8] < x
        [9, 9] -> 9: a[9] < x
        [10, 9]

```cpp

```

### Bài 3: Tổng bé hơn hoặc bằng S

Nhập vào mảng số nguyên a[] gồm n phần tử<br>
Đếm xem có bao nhiêu cặp số (a[i], a[j]) sao cho a[i] + a[j] ≤ S. (i có thể bằng j)

**Input*

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>), số phần tử của mảng a[].

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].

- Dòng thứ ba chứa số nguyên S (0 ≤ S ≤ 10<sup>9</sup>).

**Output**

- Xuất ra số lượng cặp số (a[i], a[j]) sao cho a[i] + a[j] ≤ S.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 2 3 4 5<br> 3 | 5 |

**Giải thích**: Có 3 cặp số:
- (a[0], a[0])
- (a[0], a[1])
- (a[0], a[2])
- (a[1], a[0])
- (a[2], a[1])

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 5 | 10 |

- Chỉ số trong mảng
- Giá trị của phần tử trong mảng

## Bài 4: Mua bút

Một cửa hàng bán bút đang có dịp khuyến mãi. Cứ mua `a` cây bút sẽ được tăng `b` cây bút.<br>
Bạn cần có `n` cây bút. Hãy viết chương trình tính số lượng bút ít nhất cần mua để có thể có `n` cây bút.

**Input**

- Dòng đầu tiên chứa 3 số nguyên a, b, n (1 ≤ a, b, n ≤ 10<sup>9</sup>).

**Output**

- Xuất ra số lượng bút ít nhất cần mua.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 2 1 4 | 3 |

**Giải thích**: Mua 2 cây bút đầu tiên, được tặng 1 cây bút là đã có 3 cây bút. Mua thêm 1 cây bút nữa.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 3 2 10 | 6 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3 3 5 | 3 |

Tổng số bút khi mua X cây

x: Số bút mua
X + (X/a) * b: Tổng số bút

a = 3
b = 2
n = 10 //  can mua 6 cay


x = [1, 10]
-> x = 5
-> tổng số bút = 5 + (5/3) * 2 = 5 + 2 = 7

x -> [6, 10]
-> x = 8
-> tổng số bút = 8 + (8/3) * 2 = 8 + 4 = 12
-> 12 > 10: kq = x = 8

x -> [6, 7]
-> x = 6
-> tổng số bút = 6 + (6/3) * 2 = 6 + 4 = 10
-> 10 = 10: kq = x = 6

x -> [6, 5]

## Bài 5: Tổng bằng S

Nhập vào mảng số nguyên a[] gồm n phần tử. Và một số nguyên S.<br>

Đếm cặp số (a[i], a[j]) sao cho a[i] + a[j] = S. (i có thể bằng j)

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>5</sup>), số phần tử của mảng a[].

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].

- Dòng thứ ba chứa số nguyên S (0 ≤ S ≤ 10<sup>9</sup>).

**Output**

- Xuất ra số lượng cặp số (a[i], a[j]) sao cho a[i] + a[j] = S.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 2 3 4 5<br> 3 | 4 |

**Giải thích**: Có 4 cặp số:

- (a[0], a[1])
- (a[0], a[2])
- (a[1], a[0])
- (a[2], a[0])

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 2 3 2 3 2<br> 5 | 12 |



