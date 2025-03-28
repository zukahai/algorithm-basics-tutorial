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
|4 24<br> 1 2 8 10 | 3  |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
|2 100<br> 10 1 | 10 |

**dp[k]: Số tờ tiền ít nhất để đổi số tiền là k**

```
4 24
1 2 8 10

dp[0] = 0
dp[1] = 1
dp[2] = 1
dp[3] = 2
dp[4] = 2
dp[5] = 3
dp[6] = 3
dp[7] = 4
dp[8] = 1
dp[9] = 2
dp[10] = 1
dp[11] = 2
dp[12] = 2
dp[13] = 3
dp[14] = 3
dp[15] = 4
dp[16] = 2
dp[17] = 3
dp[18] = 2
dp[19] = 3
dp[20] = 2
dp[21] = 3
dp[22] = 3
dp[23] = 4
dp[24] = 3


4 24
1 2 8 10

dp[0] = 0

for k từ 1 đến m:
    dp[k] = 1000000000
    for i từ 0 đến n - 1:
        if k >= a[i]:
            if dp[k - a[i]] + 1 < dp[k]:
                dp[k] = dp[k - a[i]] + 1

return dp[m]

```