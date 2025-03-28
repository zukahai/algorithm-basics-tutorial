from math import *

a = [2, 3, 5, 7] # các số siêu nguyên tố

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

for x in a:
    for i in range(1, 10):
        k = x* 10 + i
        if is_prime(k):
            a.append(k)

print(len(a))
# 1 -> 10^7
        