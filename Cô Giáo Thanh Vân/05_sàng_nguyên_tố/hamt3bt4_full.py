from math import *

# 4a
def tongChuSo(n):
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    return s


def ktSoNuyenTo(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
        
n = (int(input("Nhập số nguyên dương n: ")))

if ktSoNuyenTo(n) and ktSoNuyenTo(tongChuSo(n)):
    print("YES")
else:
    print("NO")

#4b

b = [True] * n
b[0] = b[1] = False

for k in range(2, isqrt(n)+1):
    if b[k] == True: # k la so nguyen to
        # K không phải là bội của 2 đến k - 1
        # => K không chia cho 2 -> đến k - 1
        for i in range(k * k, n, k):
            b[i] = False

print("Các số song tố từ 1 đến n")

for x in range(1, n):
    if b[x] == True and b[tongChuSo(x)] == True:
        print(x, end = " ")

# 4c

print("Các cặp số song tố cách nhau 2 đơn vị")

for i in range(3, n):
    if b[i] == True and b[i - 2] == True:
        print(i - 2, i)

    