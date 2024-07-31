from math import *

n = int (input("Nhập n: "))

a = []

def isCP(n):
    return int(sqrt(n)) ** 2 == n

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

for i in range(1, isqrt(n) + 1):
    if n % i == 0:
        a.append(i)
        a.append(n // i)
if isCP(n):
    a.pop()

print(a)

c = 0
for x in a:
    if isPrime(x):
        c += 1
print(c)


        
    