from math import *

n = int(input("Nhập n: "))
k = int(input("Nhập k: "))

a = n // k

for i in range(1, a + 1):
    print(i * k, end = " ")