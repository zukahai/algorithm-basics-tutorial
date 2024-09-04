## Bài toán đổi tiền

Một ngân hàng có **n** loại tiền giấy với các mệnh giá khác nhau. Bạn cần đổi một số tiền **m** bằng cách sử dụng số tờ tiền ít nhất. Hãy xác định số tờ tiền cần thiết.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:

- Dòng đầu tiên chứa 2 số nguyên **n** và **m** (1 ≤ **n** ≤ 100, 1 ≤ **m** ≤ 10^6),

- Dòng thứ 2 chứa **n** số nguyên **a1**, **a2**, . . ., **an** (1 ≤ **ai** ≤ 10^6) - mệnh giá của các loại tiền.

**Kết quả**: Số tờ tiền ít nhất để đổi số tiền là **m**

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
|4 11<br> 1 2 3 4 | 3 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
|3 24<br> 2 8 10 | 3 |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
|2 100<br> 10 1 | 10 |

**b[k]: Số tờ tiền ít nhất để đổi số tiền là k**

```
4 24
1 2 8 10

b[0] = 0
b[1] = 1
b[2] = 1
b[3] = 2
b[4] = 2
b[5] = 3
b[6] = 3
b[7] = 4
b[8] = 1
b[9] = 2
b[10] = 1
b[11] = 
b[12] = 
b[13] = 
b[14] = 
b[15] = 
b[16] = 
b[17] = 
b[18] = 
b[19] = 
b[20] = 
b[21] = 
b[22] = 
b[23] = 
b[24] = 


```