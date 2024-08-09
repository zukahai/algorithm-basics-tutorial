n = int (input("Nhập N: "))

def findPen(n):
    l = 1
    r = n
    kq = -1
    while l <= r:
        m = (l + r) // 2
        s = m + (m // 5) * 2
        if s >= n:
            kq = m
            r = m - 1
        else:
            l = m + 1
    return kq

print(findPen(n))
        