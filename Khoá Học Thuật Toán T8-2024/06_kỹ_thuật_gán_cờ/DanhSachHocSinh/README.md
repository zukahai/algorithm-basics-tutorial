## Bài 2: Danh sách học sinh

Trường học VKU có 2 đội tuyển học sinh giỏi tin và giỏi toán. Đội tuyển tin có n học sinh, đội tuyển toán có m học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên.

Hãy tìm ra các học sinh vừa nằm trong đội tuyển tin vừa nằm trong đội tuyển toán. Nếu không có học sinh nào thì in ra "-1".

*Đầu vào sẽ đảm bảo không có 2 học sinh nào có cùng mã sinh viên*

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n, m (1 ≤ n, m ≤ 10^5)

- Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10<sup>18</sup>) - mã sinh viên của học sinh đội tuyển tin

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
| 5 5<br> 1 2 3 4 5<br> 6 7 8 9 10 | -1 |