from math import *

n = (int(input("Nhập số nguyên dương n: ")))
b = [True] * n
b[0] = b[1] = False

for k in range(2, isqrt(n)+1):
    if b[k] == True: # k la so nguyen to
        # K không phải là bội của 2 đến k - 1
        # => K không chia cho 2 -> đến k - 1
        for i in range(k * k, n, k):
            b[i] = False
        
for i in range(3, n):
    if b[i] == True and b[i - 2] == True:
        print(i - 2, i)