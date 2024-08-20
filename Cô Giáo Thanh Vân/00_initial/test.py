from math import *

n = int(input("Nhập N: "))

index = 2
p = sqrt(n)

while index <= p:
    if n % index == 0:
        print(index, end=" ")
    while n % index == 0:
        n = n // index
    index += 1

if n > 1:
    print(n)
