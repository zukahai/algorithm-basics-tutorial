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

