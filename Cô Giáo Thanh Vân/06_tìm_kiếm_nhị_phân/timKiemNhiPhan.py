'''
a = [1, 2, 3, 7, 8, 10, 11, 20]
x = 6

[0, 7] -> 3 -> a[3] = 7 < 11
[4, 7] -> 5 -> a[5] = 10 < 11
[6, 7] -> 6 -> a[6] = 11 = 11
-------------------------------------




a = [1, 2, 3, 7, 8, 10, 11, 20]
x = 6
[0, 7] -> 3 -> a[3] = 7 > 6
[0, 2] -> 1 -> a[1] = 2 < 6
[2, 2] -> 2 -> a[2] = 3 < 6
[3, 2] -> không tìm thấy, l > r thì dừng
l: vị trí của phần tử nhỏ nhất lớn hơn hoặc bằng x
r: vị trí của phần tử lớn nhất nhỏ hơn hoặc bằng x

'''

def timKiemNhiPhan(a, x):
    l = 0
    r = len(a) - 1
    while l <= r:
        m = (l + r) // 2
        if a[m] == x:
            return m
        else:
            if a[m] > x:
                r = m - 1
            else:
                l = m + 1
    return -1
# l ... m ... r

def timKiemNhiPhanDauTien(a, x):
    l = 0
    r = len(a) - 1
    kq = -1
    while l <= r:
        m = (l + r) // 2
        if a[m] == x:
            kq = m
            r = m - 1
        else:
            if a[m] > x:
                r = m - 1
            else:
                l = m + 1
    return kq

def timKiemNhiPhanCuoiCung(a, x):
    l = 0
    r = len(a) - 1
    kq = -1
    while l <= r:
        m = (l + r) // 2
        if a[m] == x:
            kq = m
            l = m + 1
        else:
            if a[m] > x:
                r = m - 1
            else:
                l = m + 1
    return kq


def timKiemNhiPhanNhoNhatLonHonHoacBangX(a, x):
    l = 0
    r = len(a) - 1
    kq = -1
    while l <= r:
        m = (l + r) // 2
        if a[m] == x:
            kq = m
            l = m + 1
        else:
            if a[m] > x:
                r = m - 1
            else:
                l = m + 1
    if kq == -1:
        return r
    return kq

a = [1, 2, 3, 7, 8, 10, 11, 20]
x = 9

print(timKiemNhiPhanNhoNhatLonHonHoacBangX(a, x))
        

# Cho list a và x, tìm ví trí của phần tử nhỏ nhất lớn hơn hoặc bằng x
# a = [1, 2, 3, 7, 8, 10, 11, 20]
# x = 6
# kết quả là 3, vì a[3] = 7 là phần tử nhỏ nhất lớn hơn hoặc bằng 6