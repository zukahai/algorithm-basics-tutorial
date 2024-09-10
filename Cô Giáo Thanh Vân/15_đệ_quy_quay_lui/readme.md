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
b[11] = 2
b[12] = 2
b[13] = 3
b[14] = 3
b[15] = 4
b[16] = 2
b[17] = 3
b[18] = 2
b[19] = 3
b[20] = 2
b[21] = 3
b[22] = 3
b[23] = 4
b[24] = 3

4 24
1 2 8 10

b[i - x] + 1

b[0] = 0

for i chạy từ 1 đến m:
    b[i] = 100000000000000
    for x chạy trong dãy a: // x =  1, 2, 8, 10
        Nếu i >= x:
            Nếu b[i - x] + 1 < b[i]: // +1 thêm 1 tờ tiền là x
                b[i] = b[i - x] + 1
                


```