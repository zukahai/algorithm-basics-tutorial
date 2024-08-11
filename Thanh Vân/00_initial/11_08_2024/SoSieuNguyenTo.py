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

n = int(input('Nhập N: '))
minNso = 10 ** (n - 1)
maxNso = 10 ** n - 1

flag = False
for x in a:
    if x >= minNso and x <= maxNso:
        print(x, end=' ')
        flag = True
if not flag:
    print("Không có số snt nào " + str(n) + " chữ số")