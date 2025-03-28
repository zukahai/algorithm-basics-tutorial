# Thuật toán tim kiêm, tìm kiếm tuần tự, tìm kiếm nhị phân

## Bài 1: Tìm kiếm số nguyên trong mảng

Nhập vào mảng số nguyên a[] gồm n phần tử và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có xuất ra vị trí **đầu tiên** của x trong mảng a[], ngược lại xuất ra -1.

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup> 5</sup>), số phần tử của mảng a[].
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].
- Dòng thứ ba chứa số nguyên x (0 ≤ x ≤ 10<sup>9</sup>), số cần tìm.

**Output**

- Xuất ra vị trí đầu tiên của x trong mảng a[], nếu không tồn tại xuất ra -1.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 3<br> 3 | 2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |

## Bài 2: Tìm kiếm số nguyên trong mảng (cuối cùng)

Nhập vào mảng số nguyên a[] gồm n phần tử và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có xuất ra vị trí **cuối cùng** của x trong mảng a[], ngược lại xuất ra -1.

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup> 5</sup>), số phần tử của mảng a[].
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].
- Dòng thứ ba chứa số nguyên x (0 ≤ x ≤ 10<sup>9</sup>), số cần tìm.

**Output**

- Xuất ra vị trí đầu tiên của x trong mảng a[], nếu không tồn tại xuất ra -1.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 3<br> 3 | 4 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |

## Bài 3: Tìm kiếm số nguyên trong mảng (Tất cả)

Nhập vào mảng số nguyên a[] gồm n phần tử và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có xuất ra tất cả vị trí của x trong mảng a[], ngược lại xuất ra -1.

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup> 5</sup>), số phần tử của mảng a[].
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), các phần tử của mảng a[].
- Dòng thứ ba chứa số nguyên x (0 ≤ x ≤ 10<sup>9</sup>), số cần tìm.

**Output**

- Xuất ra vị trí đầu tiên của x trong mảng a[], nếu không tồn tại xuất ra -1.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 3<br> 3 | 2 4 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |

## Bài 4: Tìm kiếm nhị phân

Nhập vào mảng số nguyên a[] gồm n phần tử đã sắp xếp tăng dần và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có in ra YES, ngược lại in ra NO

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
| 5<br> 1 2 3 4 5<br> 3 | YES |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | NO |


## Bài 5: Tìm kiếm nhị phân

Nhập vào mảng số nguyên a[] gồm n phần tử đã sắp xếp tăng dần và một số nguyên x. Hãy viết chương trình kiểm tra xem x có tồn tại trong mảng a[] hay không. Nếu có in vị trí đầu tiên

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
| 5<br> 1 2 3 3 5<br> 3 | 2 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5<br> 6 | -1 |

## Bài 6: Tìm kiếm nhị phân

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



        