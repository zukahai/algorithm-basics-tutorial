from math import *
# b = []
# b[k] = true thi K la so nguyen to
# b[k] = false thi K khong phai la so nguyen to
# Nếu k la so nguyen to thi tat ca cac boi cua k khong phai la so nguyen to

n = 10000000
b = [True] * n
b[0] = b[1] = False

for k in range(2, isqrt(n)+1):
    if b[k] == True: # k la so nguyen to
        # K không phải là bội của 2 đến k - 1
        # => K không chia cho 2 -> đến k - 1
        for i in range(k * k, n, k):
            b[i] = False

# print(b)
# k = 11| 2*11, 3*11, 4*11, ..., 10* 11, 11*11, 12*11, 13*11

c = 0
for k in range(0, n):
    if b[k] == True:
        c += 1
        
print(c)

# 2 3 4 5 6 7 8 9 10 11
# 1 1 0 1 0 1 0 0 0   1


