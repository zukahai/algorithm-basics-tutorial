Em nghĩ 1 số từ 1 tới 100

Thầy sẽ số đoán số của em nghĩ, tối đa 7 lần đoán.

[1, 100]
Lần 1: 50, [51, 100]
Lần 2: 75, [51, 74]
Lần 3: 63, [64, 74]
Lần 4: 69, [70, 74]
Lần 5: 72, [70, 71]
Lần 6: 70, [71, 71]
Lần 7: 71

Số Lân nghĩ: x
l = 1, r = 100
while (l <= r) {
    m = (l + r) / 2
    Nếu m == x:
        Thầy thắng
    Nếu m > x:
        r = m - 1
    Nếu m < x:
        l = m + 1
}

Cho dãy số a sắp xếp không giảm, và số nguyên x.
Tìm vị trí cuối cùng của x trong dãy a.
Nếu không có trả về -1.

Dữ liệu: Vào từ thiết bị nhập chuẩn:
- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5)
- Dòng thứ 2 chứa n số nguyên a1, a2, . . ., an (1 ≤ ai ≤ 10^9, i = 1 ÷ n)
- Dòng thứ 3 là một số nguyên q (1 ≤ q ≤ 10^5)
- q dòng tiếp theo, mỗi dòng chứa một số nguyên x (1 ≤ x ≤ 10^9)

Kết quả: Đưa ra thiết bị xuất chuẩn, dòng thứ i chứa vị trí cuối cùng của x trong dãy a, hoặc -1 nếu không có.


| Input | Output |
|:-------|:--------|
|12 <br>1 2 2 2 3 3 3 3 3 3 4 4<br>3<br>1<br>3<br>5 | 1 <br> 9 <br>-1 |

