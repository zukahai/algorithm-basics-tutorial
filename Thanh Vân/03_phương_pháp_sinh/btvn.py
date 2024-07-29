
from math import *

n = int (input("Nhập số n: "))
ans = 1
dem = 0
for i in range(2, isqrt(n) + 1):
    if n % i == 0:
        dem = 0
        while n % i == 0:
            dem += 1
            n = n // i
        if dem % 2 == 1:
            ans *= i
        dem = 0
if n > 1:
    ans *= n

print("Số cần tìm là:", ans)

# 20 = 2 * 2 * 5
        