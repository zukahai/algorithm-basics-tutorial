from math import *

n = int (input("Nhập số n: "))

if n == 1:
    print("Số cần tìm là: 1")
    exit() # quit()

a = []

for i in range(2, isqrt(n) + 1):
    if n % i == 0:
        while n % i == 0:
            a.append(i)
            n = n // i
if n > 1:
    a.append(n)

print("a = ", a)

b = {} # json: {key: value}

for x in a:
    if x in b:
        b[x] += 1
    else:
        b[x] = 1

ans = 1
for k, v in b.items():
    if v % 2 == 1:
        ans *= k

print("b = ", b)
# 77 = 7 * 11

print("Số cần tìm là:", ans)