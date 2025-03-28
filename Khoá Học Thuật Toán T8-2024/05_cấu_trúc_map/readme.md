## Bài 1: Tổng bằng S

Cho một mảng số nguyên **a** gồm **n** phần tử. Hãy kiểm tra xem có tồn tại cặp chỉ số **i, j** (i != j)  sao cho **a[i] + a[j] = S** hay không. Nếu tồn tại cặp chỉ số thì trả về **YES**, ngược lại trả về **NO**.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** và **S** (1 ≤ n ≤ 10^6, -10^18 ≤ S ≤ 10^18)
- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10^18 ≤ a[i] ≤ 10^18)

**Output**:

- In ra **YES** hoặc **NO**

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 6 <br> 1 2 3 4 5 | YES |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 5)** hoặc **(2, 4)**


**Ví dụ 2**:


| Input | Output |
|:-------|:--------|
| 5 7 <br> 1 3 5 7 9 | NO |

## Bài 2: Danh sách học sinh

Trường học VKU có 2 đội tuyển học sinh giỏi tin và giỏi toán. Đội tuyển tin có n học sinh, đội tuyển toán có m học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên.

Hãy tìm ra các học sinh vừa nằm trong đội tuyển tin vừa nằm trong đội tuyển toán.

*Đầu vào sẽ đảm bảo không có 2 học sinh nào có cùng mã sinh viên, và sẽ luôn có học sinh thuộc của 2 đội tuyển *

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n, m (1 ≤ n, m ≤ 10^5)

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10<sup>6</sup>) - mã sinh viên của học sinh đội tuyển tin

- Dòng thứ ba chứa m số nguyên b1, b2, ..., bm (0 ≤ bi ≤ 10<sup>18</sup>) - mã sinh viên của học sinh đội tuyển toán

**Đầu ra**

- In ra màn hình các mã sinh viên của học sinh vừa nằm trong đội tuyển tin vừa nằm trong đội tuyển toán. Nếu không có học sinh nào thì in ra "-1".

### Ví dụ 1

| Input | Output |
|:-------|:--------|
| 5 5<br> 1 2 3 4 5<br> 3 4 5 6 7 | 3 4 5 |

### Ví dụ 2

| Input | Output |
|:-------|:--------|
| 5 4<br> 1 2 3 4 5<br> 4 7 8 9 | 4 |

### Ví dụ 3

| Input | Output |
|:-------|:--------|
| 5 5<br> 1 2 3 4 5<br> 1 2 3 4 5 | 1 2 3 4 5 |

## Bài 3: Danh sách học sinh (phần 2)

Trường học VKU có 3 đội tuyển học sinh giỏi tin, giỏi toán và giỏi hoá. Đội tuyển tin có n học sinh, đội tuyển toán có m học sinh, đội tuyển hoá có k học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên.

Hãy tìm ra các học sinh nằm trong cả 3 đội tuyển.

*Đầu vào sẽ đảm bảo không có 2 học sinh nào có cùng mã sinh viên, và sẽ luôn có học sinh thuộc của 3 đội tuyển *

**Đầu vào**

- Dòng đầu tiên chứa 3 số nguyên n, m, k (1 ≤ n, m, k ≤ 10<sup>6<sub>)
- Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>18</sup>) - mã sinh viên của học sinh đội tuyển tin
- Dòng thứ ba chứa m số nguyên b<sub>0</sub>, b<sub>1</sub>, ..., b<sub>m-1</sub> (0 ≤ b<sub>i</sub> ≤ 10<sup>18</sup>) - mã sinh viên của học sinh đội tuyển toán
- Dòng thứ tư chứa k số nguyên c<sub>0</sub>, c<sub>1</sub>, ..., c<sub>k-1</sub> (0 ≤ c<sub>i</sub> ≤ 10<sup>18</sup>) - mã sinh viên của học sinh đội tuyển hoá

**Đầu ra**

- Các mã sinh viên của học sinh nằm trong cả 3 đội tuyển. Ghi ra theo thứ tự tăng dần.

### Ví dụ 1

| Input | Output |
|:-------|:--------|
| 5 5 5<br> 1 2 3 4 5<br> 3 4 5 6 7<br> 5 6 7 8 9 | 5 |

### Ví dụ 2

| Input | Output |
|:-------|:--------|
| 5 5 5<br> 1 2 3 4 5<br> 1 2 3 4 5<br> 1 2 3 4 5 | 1 2 3 4 5 |


## Bài 4: Chia kẹo

Bảo có `n` viên kẹo, mỗi viên kẹo có một màu. Bảo muốn chia kẹo cho Quyết và Hoàng sao cho mỗi loại kẹo đều phải chia đều cho cả hai. Hãy giúp Bảo xác định xem có thể chia kẹo hay không.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^5$),

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^6$) - màu của các viên kẹo.

**Output:**

- In ra "YES" nếu có thể chia kẹo, ngược lại in ra "NO".

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 6 <br> 1 7 1 7 7 7| YES |

**Giải thích:**
Có 6 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 7 có 4 viên. Bảo có thể chia 2 viên kẹo màu 1 và 4 viên kẹo màu 7 cho Quyết và Hoàng.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 5 5 5 | NO |

**Giải thích:**
Có 5 viên kẹo, mỗi loại kẹo có số lượng như sau: loại 1 có 2 viên, loại 5 có 3 viên. Bảo không thể chia đều 3 viên kẹo loại 5 cho Quyết và Hoàng.

## Bài 5: Phần thưởng

Hải đang tham gia trò chơi ném bóng. Sẽ có các phần thưởng được treo lên trên tường, mỗi phần thưởng có một điểm số. Sau một lúc chơi, Hải đã nhận được `n` phần thưởng với điểm số lần lượt là $a_1, a_2, \dots, a_n$. Tuy nhiện Hải chỉ được chọn một loại phần thưởng duy nhất, ví dụ Hải chọn phần thưởng có điểm số là `x` thì Hải sẽ nhận được tất cả các phần thưởng có điểm số là `x` trong danh sách phần thưởng. Hãy giúp Hải xác định xem Hải có thể chọn một loại phần thưởng nào đó để nhận được tổng số điểm lớn nhất hay không.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` ($1 \le n \le 10^6$), số lượng phần thưởng mà Hải nhận được.

- Dòng thứ hai chứa `n` số nguyên $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^9$) - điểm số của các phần thưởng.

**Output:**

- In ra tổng số điểm lớn nhất mà Hải có thể nhận được nếu chọn một loại phần thưởng nào đó.

**Ví dụ:**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 2 2 5 2 5 | 10 |

**Giải thích:**

- Nếu Hải chọn phần thưởng có điểm số là 2 thì Hải sẽ nhận được 6 điểm.
- Nếu Hải chọn phần thưởng có điểm số là 5 thì Hải sẽ nhận được 10 điểm.

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | 5 |

**Giải thích:**

Hải chỉ có thể chọn một loại phần thưởng, nên Hải sẽ nhận được tổng số điểm là 5 nếu chọn phần thưởng có điểm số là 1.

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 5 |




## Bài 6: Tổng bằng S (phần 2)

Cho một mảng số nguyên **a** gồm **n** phần tử. Đếm xem có bao nhiêu cặp chỉ số **i, j** (i < j)  sao cho **a[i] + a[j] = S**.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** và **S** (1 ≤ n ≤ 10^6, -10^18 ≤ S ≤ 10^18)

- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10^18 ≤ a[i] ≤ 10^18)

**Output**:

- In ra số lượng cặp chỉ số thỏa mã

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 6 <br> 1 2 3 4 5 | 2 |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 5)** hoặc **(2, 4)**

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 4 <br> 2 2 2 1 3 | 4 |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5 10 <br> 1 2 3 4 7 | 0 |


## Bài 7: Số cặp chia hết cho 3

Cho một mảng số nguyên **a** gồm **n** phần tử. Hãy đếm số cặp chỉ số **i, j** (i < j) sao cho **a[i] + a[j]** chia hết cho 3.

**Input**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ n ≤ 10^6)

- Dòng thứ hai chứa **n** số nguyên **a[1], a[2], ..., a[n]** (-10<sup>18</sup> ≤ a[i] ≤ 10<sup>18</sup>)

**Output**:

- In ra số lượng cặp chỉ số thỏa mã

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 4 |

**Giải thích**: Có thể chọn cặp chỉ số **(1, 2)**, **(1, 5), (2, 4) và (4, 5)**

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 6 | 3 |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 4 7 10 13 | 0 |


