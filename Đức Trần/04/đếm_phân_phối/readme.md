# Bài 1: Tìm số xuất hiện nhiều nhất trong dãy

## Đề bài

Cho dãy số nguyên a1, a2, ..., an. Hãy tìm số xuất hiện nhiều nhất trong dãy.

**Input**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5)

- Dòng thứ 2 chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9)

**Output**

- In ra số xuất hiện nhiều nhất trong dãy và số lần xuất hiện của nó. Nếu có nhiều số xuất hiện nhiều nhất thì in ra số nhỏ nhất.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 6 <br> 1 2 3 2 2 3 | 2 3 |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 5 <br> 1 1 1 1 1 | 1 5 |

**Ví dụ 3**

| Input | Output |
|-------|--------|
| 5 <br> 1 2 3 4 5 | 1 1 |

## Bài 2: Các số trong mảng

Cho một mảng số nguyên `a` gồm `n` phần tử. Liệt kê các số xuất hiện trong mảng.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($-10^6 \le a_i \le 10^6$).

**Output:**

- In ra các số xuất hiện trong mảng theo thứ tự xuất hiện trong mảng trên 1 dòng, mỗi số cách nhau bởi dấu cách.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 5 <br> 1 2 2 3 1000     |1 2 3 1000 |

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 3 3 3 3 3     |3  |


## Bài 3: Chia kẹo

Bảo có `n` viên kẹo, mỗi viên kẹo có một màu. Bảo muốn chia kẹo cho Quyết và Hoàng sao cho mỗi loại kẹo đều phải chia đều cho cả hai. Hãy giúp Bảo xác định xem có thể chia kẹo hay không.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$) - màu của các viên kẹo.

**Output:**

- In ra "YES" nếu có thể chia kẹo, ngược lại in ra "NO".

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|-------|--------|
| 6 <br> 1 7 1 7 7 7| YES |

**Giải thích:**
Có 6 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 7 có 4 viên. Bảo có thể chia 2 viên kẹo màu 1 và 4 viên kẹo màu 7 cho Quyết và Hoàng.

**Ví dụ 2:**

| Input | Output |
|-------|--------|
| 5 <br> 1 1 5 5 5 | NO |

**Giải thích:**
Có 5 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 5 có 3 viên. Bảo không thể chia đều 3 viên kẹo loại 5 cho Quyết và Hoàng

# Bài 4: Số còn thiếu

Nhập vào một mảng số nguyên gồm n chữ số.

In ra màn hình các số từ 1 đến n mà không có trong mảng. Nếu không có số nào thì in ra "-1".

**Đầu vào**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10^5)
- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^5)

**Đầu ra**

- In ra màn hình các số từ 1 đến n mà không có trong mảng. Nếu không có số nào thì in ra "-1".

## Ví dụ 1

| Input | Output |
|-------|--------|
| 5<br> 1 2 4 5 5 | 3 |

## Ví dụ 2

| Input | Output |
|-------|--------|
| 5<br> 2 3 2 3 2 | 1 4 5 |

## Ví dụ 3

| Input | Output |
|-------|--------|
| 5<br> 1 2 3 4 5 | -1 |

# Bài 5: Danh sách học sinh

Trường học VKU có 2 đội tuyển học sinh giỏi tin và giỏi toán. Đội tuyển tin có n học sinh, đội tuyển toán có m học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên.

Hãy tìm ra các học sinh vừa nằm trong đội tuyển tin vừa nằm trong đội tuyển toán.

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n, m (1 ≤ n, m ≤ 10^5)

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^5) - mã sinh viên của học sinh đội tuyển tin

- Dòng thứ ba chứa m số nguyên b1, b2, ..., bm (0 ≤ bi ≤ 10^5) - mã sinh viên của học sinh đội tuyển toán

**Đầu ra**

- In ra màn hình các mã sinh viên của học sinh vừa nằm trong đội tuyển tin vừa nằm trong đội tuyển toán. Nếu không có học sinh nào thì in ra "-1".

## Ví dụ 1

| Input | Output |
|-------|--------|
| 5 5<br> 1 2 3 4 5<br> 3 4 5 6 7 | 3 4 5 |

## Ví dụ 2

| Input | Output |
|-------|--------|
| 5 4<br> 1 2 3 4 5<br> 4 7 8 9 | 4 |

## Ví dụ 3

| Input | Output |
|-------|--------|
| 5 5<br> 1 2 3 4 5<br> 6 7 8 9 10 | -1 |


# Bài 6: Danh sách học sinh toán

Trường học VKU có 2 đội tuyển học sinh giỏi tin và giỏi toán. Đội tuyển tin có n học sinh, đội tuyển toán có m học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên.

Hãy tìm ra các học đổi tuyển tin nhưng không nằm trong đội tuyển toán.

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n, m (1 ≤ n, m ≤ 10^5)

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^5) - mã sinh viên của học sinh đội tuyển tin

- Dòng thứ ba chứa m số nguyên b1, b2, ..., bm (0 ≤ bi ≤ 10^5) - mã sinh viên của học sinh đội tuyển toán

**Đầu ra**

- In ra màn hình các mã sinh viên của học sinh vừa nằm trong đội tuyển tin nhưng không nằm trong đội tuyển toán. Nếu không có học sinh nào thì in ra "-1".

## Ví dụ 1

| Input | Output |
|-------|--------|
| 5 5<br> 1 2 3 4 5<br> 3 4 5 6 7 | 1 2 |

## Ví dụ 2

| Input | Output |
|-------|--------|
| 5 4<br> 1 2 3 4 5<br> 4 7 8 9 | 1 2 3 5 |

## Ví dụ 3

| Input | Output |
|-------|--------|
| 5 5<br> 1 2 3 4 5<br> 6 7 8 9 10 | 1 2 3 4 5 |

## Ví dụ 4

| Input | Output |
|-------|--------|
| 5 5<br> 1 2 3 4 5<br> 1 2 3 4 5 | -1 |


# Bài 7: Điểm danh hộ

Trường VKU là trường học nổi tiếng miền Trung Tây Nguyên. Với kỹ thuật điểm danh thông minh, trường VKU đã giảm thiểu được thời gian điểm danh.

Trường VKU có n học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên từ 1 đến n.

Có một số sinh viên không đi học và đã nhờ bạn điểm danh hộ. Những sinh viên điểm danh hộ cho bạn sẽ bị lưu mã sinh viên thêm một lần nữa. Nhưng sinh viên này sẽ bị kỉ luật.

Hãy in ra màn hình các sinh viên không đi học và những sinh viên bị kỉ luật.

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n (1 ≤ n ≤ 10^5) là số học sinh trong lớp

- Dòng thứ hai chứa m số nguyên a1, a2, ..., an (1 ≤ ai ≤ n) - mã sinh viên của học sinh

**Đầu ra**

- Dòng đầu tiên in ra danh sách các sinh viên không đi học
- Dòng thứ hai in ra danh sách các sinh viên bị kỉ luật

Nếu không có sinh viên nào nghỉ học thì in ra -1

## Ví dụ 1

| Input | Output |
|-------|--------|
| 5 <br> 1 2 3 4 3 | 5 <br> 3 |

## Ví dụ 2

| Input | Output |
|-------|--------|
| 5 <br> 1 1 3 2 2| 4 5 <br> 1 2 |

## Ví dụ 3

| Input | Output |
|-------|--------|
| 5 <br> 1 2 3 4 5 | -1 |

