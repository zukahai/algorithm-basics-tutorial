from math import *
def ham6(n):
    dem=0
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            dem+=1
            while n%i==0: # Xoá đi các thừa số i trong n
                n//=i
    if n>1:
        dem+=1
    return dem
#main
n=int(input("hay nhap n "))
print(ham6(n))
# 11
# 60 = 5
# i = 5
# N chia hết cho i
# N chia từ 2 tới i - 1 không?
# i không chia hết cho 2 tới i - 1 -> i là số nguyên tố
#
#
# a chia hết cho b
# b chia hết cho c
# dem: 2
#
# 12 chia hết cho 6 * 2
# 12 không chia hết cho 7
# 2 * 2 * 3 * 3 * 5 = 180
# i = 2 | 180 chia hết cho 2: dem = 1.
# 180 -> 90 -> 45
# i = 3 | 45 chia hết cho 3: dem = 2.