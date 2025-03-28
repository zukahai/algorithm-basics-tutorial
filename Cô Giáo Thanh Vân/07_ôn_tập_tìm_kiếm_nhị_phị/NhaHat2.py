def tknp(n, a):
    l = 1
    r = n
    kq = -1
    while l <= r:
        m = (l + r) // 2
        tongSoGhe = (a + m - 1) * (a + m) // 2 - a * (a - 1) // 2
        if tongSoGhe >= n:
            kq = m
            r = m - 1
        else:
            l = m + 1
    return kq

n = int (input("Nhập N: "))
a = int (input("Nhập a: "))

print(tknp(n, a))
        