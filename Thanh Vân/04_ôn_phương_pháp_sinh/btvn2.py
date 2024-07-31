from math import *

n = int(input("Nhập n: "))

def taoSoSieuDx(doDai, giaTri):
    ans = 0
    for i in range(1, doDai + 1):
        ans *= 10
        ans += giaTri
    return ans

doDai = 1

while True:
    for i in range(1, 10):
        soSieuDx = taoSoSieuDx(doDai, i)
        if soSieuDx <= n:
            print(soSieuDx, end = " ")
        else:
            exit()
    doDai += 1
        


# n = 59
# 1 2 3 4 5 6 7 8 9
# 11 22 33 44 55 66 77 88 99
# 111 222 333 444 555 666 777 888 999